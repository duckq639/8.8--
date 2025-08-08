#include "vector_cal.h"
#include <math.h>

int main()
{
    vector3f AC1 = Creat_vector_by_2p(1, 0, 1, 0, 1, 0);
    vector3f AB = Creat_vector(0, 1, 0);
    float AB_M = Vector3_Magnitude(AB);
    float AC1_M = Vector3_Magnitude(AC1);
    float l = Vector3_DotProduct(AC1, AB) / AC1_M;
    double B_AC1 = sqrt(pow(AB_M, 2) - pow(l, 2));

    vector3f EC1 = Creat_vector_by_2p(0, 1, 0, 1, 0.5, 0);
    vector3f CC1 = Creat_vector(0, 0, -1);
    vector3f n = Vector3_CrossProduct(AC1, EC1);
    float n_M = Vector3_Magnitude(n);
    float h = Vector3_DotProduct(n, CC1) / n_M;

    printf("B到AC1的距离为%.2lf，FC到面AEC1的距离为%.2f", B_AC1, h);
}
