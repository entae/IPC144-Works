//
//  PosApp.h
//  MS2
//
//  Created by Intae Chung on 2023-03-29.
//
#ifndef SDDS_POSAPP_H
#define SDDS_POSAPP_H
#include "POS.h"
struct Item {
    char SKU[MAX_SKU_LEN+1];
    char name[61];
    double price;
    int taxed;
    int quantity;
};
void start(const char* action);
int loadItems(const char filename[]);
void saveItems(const char filename[]);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);
struct Item items[MAX_NO_ITEMS];
int noOfItems;
double cost(const struct Item* item);
void listItems(void);

#endif // !SDDS_POSAPP_H
