#include<stdio.h>
int main()
{
    int lengh = 0;
    while (scanf("%d", &lengh) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < lengh; i++)
        {
            for (j = 0; j <=i; j++)
            {
                printf("* ");//星号后带空格
            }
            printf("\n");
        }
    }
    return 0;
}