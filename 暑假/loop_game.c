#include<Stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include<time.h>
int choose(){

            int game,mode,hero;
        printf("this is the game screen\n");
        printf("------------------------\n");
        printf("|     1-first  game    |\n");
        printf("|     2-secend game    |\n");
        printf("|     3-third  game    |\n");
        printf("------------------------\n");
        printf("you choose:");
        scanf("%d",&game);
        printf("this is the mode\n");
        printf("------------------------\n");
        printf("|     1-first  mode    |\n");
        printf("|     2-secend mode    |\n");
        printf("|     3-third  mode    |\n");
        printf("------------------------\n");
        printf("you choose:");
        scanf("%d",&mode);
        printf("this is hero \n");
        printf("------------------------\n");
        printf("|     1-first  hero    |\n");
        printf("|     2-secend hero    |\n");
        printf("|     3-third  hero    |\n");
        printf("------------------------\n");
        printf("you choose:");
        scanf("%d",&hero);
}
int fight(){
    struct hero
        {
            int life;
            int attack;
            float crit;
            float hemophagia;
            float dodge;
            int speed;
        };
        struct hero hero1;
        hero1.life=100;
        hero1.attack=5;
        hero1.crit=25;
        hero1.hemophagia=10;
        hero1.dodge=15;
        hero1.speed;
        struct hero enemy;
        enemy.life=100;
        enemy.attack=5;
        enemy.crit=25;
        enemy.hemophagia=10;
        enemy.dodge=15;
        enemy.speed;

    printf("you meet enemy\n");

        while (1)
        { 
        printf("------------------------------------------\n");
        printf("      You                     enemy         \n");
        printf("     life:%d                life:%d      \n",hero1.life,enemy.life);
        printf("     attack:%d                attack:%d    \n",hero1.attack,enemy.attack);
        printf("     crit:%d                  crit:%d    \n",hero1.crit,enemy.crit);
        printf("     hemophagia:%d            hemophagia:%d      \n",hero1.hemophagia,enemy.hemophagia);
        printf("     dodge:%d                 dodge%d    \n",hero1.dodge,enemy.dodge);
        printf("     speed:%d                 speed:%d     \n",hero1.speed,enemy.speed);
        printf("------------------------------------------\n");
        usleep(1000000);
        system("cls"); 
        }
        }
int main(){
   // choose();
    fight();
    return 0;
}
