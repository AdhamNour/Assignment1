#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("it is not prime\n");
            return 0;
        }
    }
    printf("it is prime\n");
    return 0;
}
