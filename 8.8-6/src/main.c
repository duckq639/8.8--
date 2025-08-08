#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <inttypes.h>

uint32_t num = 0;

int main()
{
    srand((unsigned int)time(NULL));
    int r[32];
    for (int i = 0; i < 32; i++)
    {
        r[i] = ((unsigned int)rand() % 100);
        switch (r[i] <= 50)
        {
        case 0:
            num = (num + 1) << 1;
            break;

        default:
            num = num << 1;
            break;
        }
    }
    printf("num= ");
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
}