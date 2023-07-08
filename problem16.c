#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    char snum[5];
    sprintf(&snum, "%d", num);
    for (int i = strlen(snum); i>= 0; i--)
    {
        printf("%c", snum[i]);
    }
    
    return 0;
}
