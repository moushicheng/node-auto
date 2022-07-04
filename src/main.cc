/*
 * @Author: moushicheng 1163675107@qq.com
 * @Date: 2022-05-15 19:28:59
 * @LastEditors: moushicheng 1163675107@qq.com
 * @LastEditTime: 2022-05-30 18:23:14
 * @FilePath: \napi-examples\demo\src\demo.cc
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "main.h"

using namespace Napi;


Napi::Boolean moveTo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    int x = info[0].As<Napi::Number>().Int32Value();
    int y = info[1].As<Napi::Number>().Int32Value();
    MouseMove(x, y);
    return Napi::Boolean::New(env, true);
}

Napi::Boolean sendKey(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    SendKeyboard(info[0].As<Napi::Number>().Int32Value());
    return Napi::Boolean::New(env, true);
}
Napi::Boolean clickMouse(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    MouseButton button = info[0].As<Napi::Number>().Int32Value();
    MouseClick(button);
    return Napi::Boolean::New(env, true);
}

Napi::Boolean swapMouseButton(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    SwapMouseButton(info[0].As<Napi::Boolean>().ToBoolean());
    return Napi::Boolean::New(env, true);
}
Napi::Boolean setScroll(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    int x = info[0].As<Napi::Number>().Int32Value();
    int y = info[1].As<Napi::Number>().Int32Value();
    ScrollMouse(x, y);
    return Napi::Boolean::New(env, true);
}

Napi::Object getScreen(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    BitMap screen = getScreenBitmap();
    Object obj = Object::New(env);
    obj["width"] = Number::New(env, screen.width);
    obj["height"] = Number::New(env, screen.height);
    obj["size"] = Number::New(env, screen.size);
    napi_value result_buffer;
    napi_create_buffer_copy(env, screen.size, screen.data, nullptr, &result_buffer);
    obj["data"] = result_buffer;
    return obj;
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, "moveTo"),
                Napi::Function::New(env, moveTo));
    exports.Set(Napi::String::New(env, "click"),
                Napi::Function::New(env, clickMouse));
    exports.Set(Napi::String::New(env, "sendKey"),
                Napi::Function::New(env, sendKey));
    exports.Set(Napi::String::New(env, "swapMouseButton"),
                Napi::Function::New(env, swapMouseButton));
    exports.Set(Napi::String::New(env, "scroll"),
                Napi::Function::New(env, setScroll));
    exports.Set(Napi::String::New(env, "getScreen"),
                Napi::Function::New(env, getScreen));
    return exports;
}

NODE_API_MODULE(addon, Init)
