//删除 b
#include<stdio.h>
#include<string.h>
void delete(char *str,char c){
    int len = strlen(str);
    int i,j=0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != c)
        {
            str[j]=str[i];
            j++;
        }
        
    }
    str[j]='\0';
}
int main(){
    //数组char str[20] = " "的数据类型是char[20]
    char str[]="aabccbdd";
    char c='b';
    delete(str,c);
    printf("%s",str);
}