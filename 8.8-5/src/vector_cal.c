#include "vector_cal.h"
#pragma once
#include <math.h>

vector3f Creat_vector(float x, float y, float z)
{
    vector3f v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}
// 用于给三维向量赋值

vector3f Creat_vector_by_2p(float x1, float y1, float z1, float x2, float y2, float z2)
{
    vector3f v;
    v.x = x2 - x1;
    v.y = y2 - y1;
    v.z = z2 - z1;
    return v;
}
// 输入两点坐标得向量

vector3f Vector3_Add(vector3f a, vector3f b)
{
    vector3f v;
    v.x = a.x + b.x;
    v.y = a.y + b.y;
    v.z = a.z + b.z;
    return v;
}
// 三维向量加法

vector3f Vector3_Subtract(vector3f a, vector3f b)
{
    vector3f v;
    v.x = a.x - b.x;
    v.y = a.y - b.y;
    v.z = a.z - b.z;
    return v;
}
// 三维向量减法

float Vector3_DotProduct(vector3f a, vector3f b)
{
    float num;
    num = a.x * b.x + a.y * b.y + a.z * b.z;
    return num;
}
// 三维向量点乘

float Vector3_Magnitude(vector3f v)
{
    float num;
    num = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
    return num;
}
// 三维向量取模

vector3f Vector3_CrossProduct(vector3f a, vector3f b)
{
    vector3f v;
    v.x = a.y * b.z - a.z * b.y;
    v.y = a.z * b.x - a.x * b.z;
    v.z = a.x * b.y - a.y * b.x;
    return v;
}
// 三维向量叉乘