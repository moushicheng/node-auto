#include "main.h"
void MouseClick(MouseButton button){
    // MouseToggle(true,button);
    MouseToggle(false,button);
        MouseToggle(true,button);
}

void MouseToggle(bool down,MouseButton button)
{
    INPUT mouseInput;
    mouseInput.type = INPUT_MOUSE;
    mouseInput.mi.dx = 0;
    mouseInput.mi.dy = 0;
    mouseInput.mi.dwFlags = MouseEvent(down, button);
    mouseInput.mi.time = 0; // System will provide the timestamp
    mouseInput.mi.dwExtraInfo = 0;
    mouseInput.mi.mouseData = 0;
    SendInput(1, &mouseInput, sizeof(mouseInput));
}

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
void ScrollMouse(int x, int y)
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