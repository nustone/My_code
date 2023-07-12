#include <stdio.h>
#include <unistd.h> // 用于 sleep() 函数

int main() {
    int i, j, k, n;
    n = 10; // 菱形的高度

    while (1) {
        for (i = 1; i <= n; i++) {
            // 打印上半部分菱形
            for (j = 1; j <= n - i; j++) {
                printf(" ");
            }
            for (k = 1; k <= 2 * i - 1; k++) {
                printf("*");
            }
            printf("\n");
        }
        
        for (i = n - 1; i >= 1; i--) {
            // 打印下半部分菱形
            for (j = 1; j <= n - i; j++) {
                printf(" ");
            }
            for (k = 1; k <= 2 * i - 1; k++) {
                printf("*");
            }
            printf("\n");
        }
        
        // 休眠一段时间（以毫秒为单位），实现闪烁效果
        usleep(500000); // 500毫秒
        
        // 清空控制台
        system("cls"); // 适用于Unix/Linux系统
        // system("cls"); // 适用于Windows系统
    }
    
    return 0;
}
