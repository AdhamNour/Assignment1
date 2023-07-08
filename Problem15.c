#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num,exponent;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("enter the exponent: ");
    scanf("%d",&exponent);
    printf("%.1f ",pow(num,exponent));
    return 0;
}
