#include <stdio.h>
#include<stdlib.h>
#include"tool.h"
int main() {
    Player*player=(Player*)malloc(sizeof(Player));
    buyTool(player);
    free(player);
    return 0;
}
