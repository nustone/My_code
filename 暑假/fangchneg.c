#include<stdio.h>
#include<math.h>
int main(){
    printf("输入abc:");
    float a,b,c;
    scanf("%f,%f,%f",&a,&b,&c);
    float root1,root2;
    if ((b*b-4*a*c)<0)
    {
        printf("无解");
    }
    if ((b*b-4*a*c)==0)
    {
        root1 = -b / (2 * a);
    }
    if ((b*b-4*a*c)>0)
    {
        root1 = (-b + sqrt((b*b-4*a*c))) / (2 * a);
        root2 = (-b - sqrt((b*b-4*a*c))) / (2 * a);
    }
    
     
}