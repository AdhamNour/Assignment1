#include<stdio.h>
int main(int argc, char const *argv[])
{
    int input = 1;
    printf("Enter your Number: ");
    scanf("%d", &input);
    if(input <=0)
    printf("Error: Invalid input");
    int sum =1;
    for (int i = 1; i <= input; i++)
    {
        sum*=i;
    }
    printf("%d",sum);    
    return 0;
}
