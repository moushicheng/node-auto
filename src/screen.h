#pragma once
typedef unsigned char Uint8;
class Size
{
public:
    size_t width, height;
    void setWidth(size_t value)
    {
        width = value;
    }
    void setHeight(size_t value)
    {
        height = value;
    }
};
class BitMap{
    public:
    size_t width, height;
    size_t size;
    Uint8 * data;
    BitMap::BitMap(size_t w,size_t h,Uint8* buffer){
     width=w;
     height=h;
     size=w*h*4;
     data=buffer;
    }
    void setWidth(size_t value)
    {
        width = value;
    }
    void setHeight(size_t value)
    {
        height = value;
    }
};
BitMap getScreenBitmap();