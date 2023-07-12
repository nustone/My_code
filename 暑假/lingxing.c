#include<stdio.h>
int main(){
    printf("要打印的行数num:");
    int num;
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
       for (int j=0 ; j < num-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= num-1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <2*(num-1-i)+1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}