// 用指针访问结构体


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    struct stu{
        char name[20];
        float h;
        int age;
    };
    struct stu a = {"cxk" ,1.85,888};
    struct stu *p = &a;
    printf("%s %.2f %d\n", p->name,p->h,p->age);

    // 从堆区开辟一个结构体对象
    struct stu *q = malloc(sizeof(struct stu));
    strcpy(q->name,"rap");


    // for 循环里面的代码,'a'+1就是 b 
   /* for (int i = 0; i < 3; i++)
    {
        q->name[i] = 'a'+1;
    }*/
    printf("%s ", q->name);
}