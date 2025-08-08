#include <stdio.h>

int num = 0x12253647;

int conventor(int num)
{
    int bytes[4] = {0};
    bytes[0] = (num >> 24) & 0xFF; // 原最高字节 → 新最低字节
    bytes[1] = (num >> 16) & 0xFF;
    bytes[2] = (num >> 8) & 0xFF;
    bytes[3] = num & 0xFF;
    return (bytes[3] << 24) | (bytes[2] << 16) | (bytes[1] << 8) | bytes[0];
}

int main()
{
    int mun = conventor(num);
    printf("num=%x,mun=%x", num, mun);
}
