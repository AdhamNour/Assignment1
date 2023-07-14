#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (unsigned char i = 0; i <= 100; i++)
    {
        sum +=i;
    }
    printf("sum = %d\n", sum);
    
    return 0;
}
