#include "main.h"

Size getScreenSize()
{
    Size screenSize;
    screenSize.setWidth(GetSystemMetrics(SM_CXSCREEN));
    screenSize.setHeight(GetSystemMetrics(SM_CYSCREEN));
    return screenSize;
}

BitMap getScreenBitmap()
{
    void *buffer;
    HDC screen = NULL, screenMem = NULL;
    HBITMAP dib;
    BITMAPINFO bi;
    Size screenSize = getScreenSize();

    bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
    bi.bmiHeader.biWidth = (long)screenSize.width;
    bi.bmiHeader.biHeight = -(long)screenSize.height;
    bi.bmiHeader.biPlanes = 1;
    bi.bmiHeader.biBitCount = 32;
    bi.bmiHeader.biCompression = BI_RGB;
    bi.bmiHeader.biSizeImage = (DWORD)(4 * screenSize.width * screenSize.height);
    bi.bmiHeader.biXPelsPerMeter = 0;
    bi.bmiHeader.biYPelsPerMeter = 0;
    bi.bmiHeader.biClrUsed = 0;
    bi.bmiHeader.biClrImportant = 0;

    screen = GetDC(NULL); /* Get entire screen */
                          // if (screen == NULL) return NULL;
    /* Get screen data in display device context. */
    dib = CreateDIBSection(screen, &bi, DIB_RGB_COLORS, &buffer, NULL, 0);
    if ((screenMem = CreateCompatibleDC(screen)) == NULL ||
        SelectObject(screenMem, dib) == NULL ||
        !BitBlt(screenMem,
                (int)0,
                (int)0,
                (int)screenSize.width,
                (int)screenSize.height,
                screen,
                0,
                0,
                SRCCOPY));


    BitMap screenBitMap(screenSize.width, screenSize.height, (Uint8 *)buffer);
    return screenBitMap;
}
