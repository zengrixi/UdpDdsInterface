#include "wrj_function_variable.h"

// CRC校验
unsigned short CRC16Encode(unsigned char *buf, unsigned short nLen)
{
    unsigned short i = 0;
    unsigned short wCRC = 0;
    if(!buf)
    {
    return 0;
    }
    for(i = 0; i < nLen; i++)
    {
        wCRC = (wCRC << 8) ^ CRC16Tab[((wCRC >> 8) ^* (unsigned char *)buf++) & 0x00FF];

    }
    return wCRC;
}
