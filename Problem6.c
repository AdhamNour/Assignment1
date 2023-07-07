#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1;
    printf("Enter number1");
    scanf("%d", &num1);
    int num2;
    printf("Enter number2");
    scanf("%d", &num2);
    if (num1==num2) 
    {
        printf("Two Numbers are Equal!\n");
    }
    if(num1>num2){
        printf("Number 1 is Larger than Number 2!\n");
    }
    if(num1<num2){
        printf("Number 2 is Larger than Number 1!\n");
    }
    
    return 0;
}
