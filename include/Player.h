#ifndef PLAYER_H
#define PLAYER_H

typedef struct PLAYER
{   
    //任务id
    int id;
    //toolnum[0]为道具总数，接下来一次为路障，机器娃娃,炸弹
    int toolnum[4];
    //任务点数
    int points;
    //资金
    int fund;
    //int prison;
    struct PLAYER*next;

}Player;
#endif