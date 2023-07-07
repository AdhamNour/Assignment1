#include<stdio.h>
int main(int argc, char const *argv[])
{
    const float PI =3.14;
    float radius =0 ;
    printf("Input the Radius of the circle\n");
    scanf("%f",&radius);
    printf("Circumfrance = %f\n",2*PI*radius);
    printf("Area = %f\n",PI*radius*radius);
    return 0;
}
