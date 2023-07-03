#include"tool.h"
#include"start.h"


int main() {
    Player*player=start();
    int num=0;
    char c=0;
    buyTool(player);
    freePlayer(player);
    return 0;
    
}