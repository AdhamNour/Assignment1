#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int minimum=INT_MAX,input;
    printf("Enter the first number");
    scanf("%d",&input);
    if(minimum>input){
        minimum=input;
    }
    printf("Enter the second number");
    scanf("%d",&input);
    if(minimum>input){
        minimum=input;
    }
    printf("Enter the Third number");
    scanf("%d",&input);
    if(minimum>input){
        minimum=input;
    }
    printf("The minimum number is %d",minimum);
    return 0;
}
