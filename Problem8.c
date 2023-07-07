#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int input=0;
    printf("Enter the number to check if it is perfect square: ");
    scanf("%d",&input);
    double x = sqrt(input);
    if ((int)x*x==input)
    {
        printf("The number is perfect square!\n");
    }
    else
    printf("The number is not perfect square!\n");
    
    return 0;
}
