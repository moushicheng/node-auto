
#include "main.h"

void SendKeyboard(int num)
{
    INPUT inputs[1] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = num;
    SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}