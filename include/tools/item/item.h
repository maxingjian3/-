#ifndef ITEM_H
#define ITEM_H
typedef struct 
{
    char id[7];
    char item_name[11];
    double price;
    char description[101];
    char seller_id[7];
    char time[11];
    char state[21];
}Item;
#endif