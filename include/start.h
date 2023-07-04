#ifndef START_H
#define START_H

#include"Player.h"
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
Player* start();
void set_init_fund(Player *player, int fund);
Player *set_init_role(char *s);
void initPlayer(Player *player, int id);
int get_set_fund();
void freePlayer(Player*p);
int getPlayerNumber();
static int PlayerNumber;

#endif