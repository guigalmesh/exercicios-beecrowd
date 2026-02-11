#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef enum{
    FIRE,
    WATER,
    EARTH,
    AIR
}Tipos;

typedef struct{
    int type;
    int level;
    int radius;
    int center[2];
    int damage;
}Magic;

typedef struct{
    int height;
    int width;
    int coord_inf_esq[2];
}Enemy;

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void gets_enemy_info(Enemy *enemy){
    scanf("%d", &enemy->width);
    scanf("%d", &enemy->height);
    scanf("%d", &enemy->coord_inf_esq[0]);
    scanf("%d", &enemy->coord_inf_esq[1]);
}

void gets_magic_info(Magic *magic){
    char buffer[10];

    scanf("%s", buffer);

    scanf("%d", &magic->level);
    if(!strcmp(buffer, "fire")){
        magic->type = FIRE;
        magic->damage = 200;
        switch(magic->level){
            case 1: magic->radius = 20;
                break;
            case 2: magic->radius = 30;
                break;
            case 3: magic->radius = 50;
                break;
        }
    }
    if(!strcmp(buffer, "water")){
        magic->type = WATER;
        magic->damage = 300;
        switch(magic->level){
            case 1: magic->radius = 10;
                break;
            case 2: magic->radius = 25;
                break;
            case 3: magic->radius = 40;
                break;
        }
    }
    if(!strcmp(buffer, "earth")){
        magic->type = EARTH;
        magic->damage = 400;
        switch(magic->level){
            case 1: magic->radius = 25;
                break;
            case 2: magic->radius = 55;
                break;
            case 3: magic->radius = 70;
                break;
        }
    }
    if(!strcmp(buffer, "air")){
        magic->type = AIR;
        magic->damage = 100;
        switch(magic->level){
            case 1: magic->radius = 18;
                break;
            case 2: magic->radius = 38;
                break;
            case 3: magic->radius = 60;
                break;
        }
    }

    scanf("%d", &magic->center[0]);
    scanf("%d", &magic->center[1]);
}

int determines_damage(Enemy* enemy, Magic* magic){
    int x0 = enemy->coord_inf_esq[0];
    int y0 = enemy->coord_inf_esq[1];
    int w = enemy->width;
    int h = enemy->height;
    int cx = magic->center[0];
    int cy = magic->center[1];
    int r = magic->radius;
    int dmg = magic->damage;


    int x_mais_proximo = magic->center[0];
    if(x_mais_proximo < x0)
        x_mais_proximo = x0;
    else if(x_mais_proximo > x0 + w)
        x_mais_proximo = x0 + w;
    
    int y_mais_proximo = magic->center[1];
    if(y_mais_proximo < y0)
        y_mais_proximo = y0;
    else if(y_mais_proximo > y0 + h)
        y_mais_proximo = y0 + h;

    int dist_x = cx - x_mais_proximo;
    int dist_y = cy - y_mais_proximo;
    int dist_quadrada = (dist_x * dist_x) + (dist_y * dist_y);
    
    if(dist_quadrada <= (r * r))
        return dmg;
    return 0;
}

int main(){
    int t, damage;

    Enemy enemy;
    Magic magic;

    scanf("%d", &t);    

    clearInputBuffer();

    for(int i = 0; i < t; i++){
        gets_enemy_info(&enemy);
        gets_magic_info(&magic);
        damage = determines_damage(&enemy, &magic);
        printf("%d\n", damage);
    }

    return 0;
}