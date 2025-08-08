# 8.8-4作业的代码解析

```c
int main(){
    memcpy(p, &a, sizeof(a));
    memcpy((p + sizeof(a)), &b, sizeof(b));
    memcpy(&a, p, sizeof(a));
    memcpy(&b, (p + sizeof(a)), sizeof(b));
    printf("a = %f, b = %f\n", a, b);
}
```
使用memcpy将内存直接拷贝到str上，是完整的相同的数据。

```c
int main(){
    float *q = (float *)str;
    q[0] = a;
    q[1] = b;
    memcpy(&a1, p, sizeof(a));
    memcpy(&b1, (p + sizeof(float)), sizeof(b));
    printf("a = %f,b = %f\n", a1, b1);
}
```
使用指针强制转换类型写入

```c
int main(){
    typedef union
    {
        char str1[8];
        float f[2];
    } exchange;
    exchange exc1;
    exchange *EXC = &exc1;
    EXC->f[0] = a;
    EXC->f[1] = b;
    memcpy(&a1, EXC->str1, sizeof(a));
    memcpy(&b1, (EXC->str1 + sizeof(float)), sizeof(b));
    printf("a = %f, b = %f\n", a1, b1);
}
```
使用联合体，成员内存完全相同（代码弯弯绕绕只是因为我想复习指针）