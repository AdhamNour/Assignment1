#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j>=floor(9.0/2)-i &&j<=ceil(9.0/2)+i)
            {
                printf("*");
            }
            else
            printf("-");
            
        }
        printf("\n");
        
    }
    
    return 0;
}
