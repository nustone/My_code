//递归函数打印斐波那契数列

#include<stdio.h>
int func(int n){
    if (n<=1)
    {
        return n;
    }else
    {
        return func(n-1)+func(n-2);
    }
    
    
}

int main(){
    int n=20;
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",func(i));
    }
    
}