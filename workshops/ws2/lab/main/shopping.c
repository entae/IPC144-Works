//
//  shopping.c
//  main.c
//
//  Created by Intae Chung on 2023-01-26.
//

#include "stdio.h"

void title(void) {
    printf("Money Spending Calculator\n");
}

void shoppingStats(int noOfItems) {
    int itemNum;
    int itm;
    float price;
    int d;
    float total;
    float avg;
    
    printf("How many items were bought?\n");
    printf("> ");
    scanf("%d", &itemNum);
    printf("Please enter the price of the %d items bought...\n",itemNum);
    itm = 0;
    total =0;
    while (itm != itemNum) {
        printf("%d> ", itm+1);
        scanf("%f", &price);
        itm++;
        total += price;
        }
    for (d = 0; d <50; d++) {
        putchar('-');
        }
    putchar('\n');
    printf("Total price for all the items purchased: %.2f\n", total);
    avg = total / itemNum;
    printf("Average price of the items: %.2f\n",avg);
}

void line(char fill, int length) {
    char c;
    int l;
    for (l = 0; l < length; l++) {
        printf("%c", fill);
        }
        putchar('\n');
    }
