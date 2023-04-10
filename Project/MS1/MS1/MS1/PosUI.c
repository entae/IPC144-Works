//
//  PosUI.c
//  MS1
//
//  Created by Intae Chung on 2023-03-29.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PosUI.h"
#include "PosAPP.h"
#include "utils.h"

void runPos(const char filename[]) {
    int done = 0;
    loadItems(filename);
    while (!done) {
        switch (menu()) {
            case 1: inventory ();
                break;
            case 2: addItem();
                break;
            case 3: removeItem();
                break;
            case 4: stockItem();
                break;
            case 5: POS();
                break;
            default: saveItems(filename);
                printf("Goodbye!\n");
                done = 1;
                break;
        }
    }
}

int menu(void) {
    int selection;
    int done = 0;
    printf("The Sene-Store\n"
           "1- Inventory\n"
           "2- Add item\n"
           "3- Remove item\n"
           "4- Stock item\n"
           "5- POS\n"
           "0- exit program\n"
           "> ");
    selection = getIntMM(0, 5, "Selection");
    return selection;
}
