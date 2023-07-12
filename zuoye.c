#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data
{
    char name[20];
    char pass[20];
};
struct data usr[20] = {0};
int last = 0;
int do_reg(void);
int do_log(void);
int quit(void);

int main()
{
    int n;
    while (1){
      
        printf("***********************************\n");
        printf("*******1.log****2.reg****3.quit****\n");
        printf("***********************************\n");
        scanf("%d",&n);
        getchar();
        switch (n)
        {
        case 1:
        do_log();
            break;
        case 2:
        do_reg();
            break;
        case 3:
        quit();
        return 0;    
        }
    }
}

int do_reg(void)

{
    if(20==last){
        puts("用户已满");
        return -1;
    }
    char name[20] = {0},pass[20] = {0};
    int i,t;
Log:
    printf("please input your usrname: \n");
    gets(name);
    for (int i = 0; i < last; i++)
    {
        if (0==strcmp(usr[i].name,name)){
            t = 3;
            while (t--)
            {
                printf("用户已存在，%d s后自动跳转...\n",t+1);
                sleep(1);
            }
            goto Log;
        }
    }
    strcpy(usr[last].name,name);
    printf("请输入密码: ");
    gets(pass);
    strcpy(usr[last].pass,pass);
    last++;
    t = 3;
    while (t--)
            {
                printf("注册成功，%d s后自动跳转...\n",t+1);
                sleep(1);
            }        
    return 0;
}
int do_log(void)
{
    if (0==last)
    {
        printf("请先注册\n");
        return -1;
    }
    char name[20] = {0},pass[20] = {0};
loop:
    printf("请输入用户名: \n");
    gets(name);
    printf("请输入密码: \n");
    gets(pass);
    for (int i = 0; i < last; i++)
    {
        if (0==strcmp(usr->name,name)&&0==strcmp(usr->pass,pass))
        {
        int t = 3;
        while (t--)
            {
                printf("登陆成功,%d s后自动跳转...\n",t+1);
                sleep(1);
            }        
    return 0;
        }    
    }
    puts("账号或密码错误，请重新输入");
    sleep(1);
    goto loop;
}

int quit()
{
    printf("退出");
    return 0;
}