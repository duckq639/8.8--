#ifndef VECTOR_CAL_H
#define VECTOR_CAL_H
#include <stdio.h>
#include <string.h>

typedef struct
{
    float x;
    float y;
    float z;
} vector3f;
// 定义三维向量结构体

vector3f Creat_vector(float x, float y, float z);
vector3f Creat_vector_by_2p(float x1, float y1, float z1, float x2, float y2, float z2);
vector3f Vector3_Add(vector3f a, vector3f b);
vector3f Vector3_Subtract(vector3f a, vector3f b);
float Vector3_DotProduct(vector3f a, vector3f b);
float Vector3_Magnitude(vector3f v);
vector3f Vector3_CrossProduct(vector3f a, vector3f b);

#endif