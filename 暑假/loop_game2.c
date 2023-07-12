#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int choose(){
     printf("欢迎来到洛克王国\n");
    printf("请选择你的精灵\n");
    printf("----------------------------------\n");
    printf("-第一个精灵--第二只精灵--第三只精灵-\n");
    printf("----------------------------------\n");
    int i;
    scanf("%d",&i);
    printf("你选择第%d只",i);
}
int attack() {
    struct  spirit{
    int hp;
    int attack;
    int crit_chance;
    int life_steal;
    int evade;
    };
    struct spirit spirit1;
    spirit1.hp=100;
    spirit1.attack=5;
    spirit1.life_steal=30;
    spirit1.crit_chance=30;
    spirit1.evade=10;
    struct spirit spirit2;
    spirit2.hp=180;
    spirit2.attack=3;
    spirit2.life_steal=20;
    spirit2.crit_chance=20;
    spirit2.evade=20;

    int isCrit1 = rand() % 100 < spirit1.crit_chance ? 1 : 0;
    int lifesteal1 = rand() % 100 < spirit1.life_steal ? 1 : 0;
    int evade1 = rand() % 100 < spirit1.evade ? 1 : 0;

    int isCrit2 = rand() % 100 < spirit2.crit_chance ? 1 : 0;
    int lifesteal2 = rand() % 100 < spirit2.life_steal ? 1 : 0;
    int evade2 = rand() % 100 < spirit2.evade ? 1 : 0;

    if (isCrit1) {
        spirit1.attack *= 2; // 双倍伤害
        printf("暴击!\n");
    }

    if (lifesteal1) {
        int healed1 = spirit1.attack / 2; // 吸血量为伤害的一半
        printf("吸血:%d\n", healed1);
        return healed1; // 返回吸血量
    }

    if (evade1) {
        printf("闪避!\n");
        spirit2.attack = 0; // 伤害为0
    }
        if (isCrit2) {
        spirit2.attack *= 2; // 双倍伤害
        printf("暴击!\n");
    }

    if (lifesteal2) {
        int healed2 = spirit2.attack / 2; // 吸血量为伤害的一半
        printf("吸血:%d\n", healed2);
        return healed2; // 返回吸血量
    }

    if (evade2) {
        printf("闪避!\n");
        spirit1.attack = 0; // 伤害为0
    }
        srand(time(NULL));
    while ( spirit1.hp> 0 && spirit2.hp > 0) {
        int spirit1_speed = rand() % 100;
        int spirit2_speed = rand() % 100;

        if (spirit1_speed > spirit2_speed) {
            int healed1 = spirit1.attack/2; // 获取吸血量
            spirit2.hp -= spirit1.attack;
            if (lifesteal1)
            {
                spirit1.hp += healed1;
            }

            printf("玩家1对玩家2造成%d点伤害\n", spirit1.attack);
        } else {
            int healed2 =spirit2.attack/2;
            spirit1.hp -= spirit2.attack;
            if (lifesteal2)
            {
                spirit2.hp += healed2;
            }
            printf("玩家2对玩家1造成%d点伤害\n", spirit2.attack);
        }

        printf("玩家1血量:%d\n", spirit1.hp);
        printf("玩家2血量:%d\n", spirit2.hp);
        printf("\n");
    }

    if (spirit1.hp <= 0) {
        printf("玩家2获胜!\n");
    } else {
        printf("玩家1获胜!\n");
    }
}

int main() {
   choose();
   attack();
    return 0;
}
