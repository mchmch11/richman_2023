#include "update.h"
#include "Player.h"
#include <stdlib.h>
#include<stdio.h>
#include<time.h>
/*step函数*/
/*包含更新状态的函数，用于每回合初处理各种效果和游戏中购买土地*/
/*生成随机数的函数*/
int get_roll_number()
{

    // 设置随机数生成器的种子为当前时间
    srand(time(NULL));

    // 生成随机数并打印
    return 1 + rand() % 6;

}


/*change Player*/
Player* changePlayer(Player*player)
{
    player=player->next;
    printf("%s>待输入命令\n",player->name);
}