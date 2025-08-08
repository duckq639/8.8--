# 向量计算题

<span style="color: transparent; cursor: pointer;" onmouseover="this.style.color='black'" onmouseout="this.style.color='transparent'">
这种简单题都写markdown我写了你真看啊？
</span>

## 由以下三个部分组成

- main
运行程序解答题目
- vector_cal.h
对函数进行声明，对用到的头文件声明
- vector_cal.c
对函数进行定义

## 其中包含的函数有以下这些：

```c
vector3f Creat_vector(float x, float y, float z);
vector3f Creat_vector_by_2p(float x1, float y1, float z1, float x2, float y2, float z2);
vector3f Vector3_Add(vector3f a, vector3f b);
vector3f Vector3_Subtract(vector3f a, vector3f b);
float Vector3_DotProduct(vector3f a, vector3f b);
float Vector3_Magnitude(vector3f v);
vector3f Vector3_CrossProduct(vector3f a, vector3f b);
```

## 功能分别为：

- 填写向量数据
- 输入两点创造向量
- 向量加法运算
- 向量减法运算
- 向量点积运算
- 向量模长计算
- 向量叉积运算

