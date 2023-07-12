#include<stdio.h>
#include<string.h>

struct data{
    int val;
    char str[6];
};
/*
    typedef struct data{
    int val;
    char str[6];
}Data;       // struct data == Data 取别名
*/

// 改变传入的实参
void fun(struct data *pa)
{
    pa->val = 250;
    strcpy(pa->str,"world");
}
int main()
{
    struct data ma={1,"hello"};
    fun(&ma);
    printf("%d %s\n",ma.val,ma.str);
    return 0;
}
