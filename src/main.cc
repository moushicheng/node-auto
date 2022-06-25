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

void MouseMove(int x, int y)
{
    double fScreenWidth = ::GetSystemMetrics(SM_CXSCREEN) - 1;
    double fScreenHeight = ::GetSystemMetrics(SM_CYSCREEN) - 1;
    double fx = x * (65535.0f / fScreenWidth);
    double fy = y * (65535.0f / fScreenHeight);
    INPUT Input = {0};
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
    Input.mi.dx = fx;
    Input.mi.dy = fy;
    SendInput(1, &Input, sizeof(INPUT));
}
void SendKeyboard(int num)
{
    INPUT inputs[1] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = num;
    SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void scrollMouse(int x, int y)
{
    INPUT mouseScrollInputs[2];
    // Must send y first, otherwise we get stuck when scrolling on y axis
    mouseScrollInputs[0].type = INPUT_MOUSE;
    mouseScrollInputs[0].mi.dx = 0;
    mouseScrollInputs[0].mi.dy = 0;
    mouseScrollInputs[0].mi.dwFlags = MOUSEEVENTF_WHEEL;
    mouseScrollInputs[0].mi.time = 0;
    mouseScrollInputs[0].mi.dwExtraInfo = 0;
    mouseScrollInputs[0].mi.mouseData = -y;

    mouseScrollInputs[1].type = INPUT_MOUSE;
    mouseScrollInputs[1].mi.dx = 0;
    mouseScrollInputs[1].mi.dy = 0;
    mouseScrollInputs[1].mi.dwFlags = MOUSEEVENTF_HWHEEL;
    mouseScrollInputs[1].mi.time = 0;
    mouseScrollInputs[1].mi.dwExtraInfo = 0;
    mouseScrollInputs[1].mi.mouseData = x;

    SendInput(2, mouseScrollInputs, sizeof(INPUT));
}

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

Napi::Boolean swapMouseButton(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    SwapMouseButton(info[0].As<Napi::Boolean>().ToBoolean());
    return Napi::Boolean::New(env, true);
}
Napi::Boolean setVerticalScroll(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    int x = info[0].As<Napi::Number>().Int32Value();
    int y = info[1].As<Napi::Number>().Int32Value();
    scrollMouse(x, y);
    return Napi::Boolean::New(env, true);
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    Napi::String name = Napi::String::New(env, "moveTo");
    exports.Set(Napi::String::New(env, "moveTo"),
                Napi::Function::New(env, moveTo));
    exports.Set(Napi::String::New(env, "sendKey"),
                Napi::Function::New(env, sendKey));
    exports.Set(Napi::String::New(env, "swapMouseButton"),
                Napi::Function::New(env, swapMouseButton));
    exports.Set(Napi::String::New(env, "setVerticalScroll"),
                Napi::Function::New(env, setVerticalScroll));
    return exports;
}

NODE_API_MODULE(addon, Init)
