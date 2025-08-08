#include <stdio.h>
#include <string.h>

char str[8];
char *p = str;
float a = 1.23f, b = 4.56f;
float a1, b1;

int main()
{
    // memcpy(p, &a, sizeof(a));
    // memcpy((p + sizeof(a)), &b, sizeof(b));
    // memcpy(&a1, p, sizeof(a));
    // memcpy(&b1, (p + sizeof(a)), sizeof(b));
    // printf("a = %f, b = %f\n", a1, b1);

    float *q = (float *)str;
    q[0] = a;
    q[1] = b;
    memcpy(&a1, p, sizeof(a));
    memcpy(&b1, (p + sizeof(float)), sizeof(b));
    printf("a = %f,b = %f\n", a1, b1);

    // typedef union
    // {
    //     char str1[8];
    //     float f[2];
    // } exchange;
    // exchange exc1;
    // exchange *EXC = &exc1;
    // EXC->f[0] = a;
    // EXC->f[1] = b;
    // memcpy(&a1, EXC->str1, sizeof(a));
    // memcpy(&b1, (EXC->str1 + sizeof(float)), sizeof(b));
    // printf("a = %f, b = %f\n", a1, b1);
}