//
//  rentals.c
//  lab
//
//  Created by Intae Chung on 2023-02-10.
//

#include <stdio.h>
#include "utils.h"
#include "rental.h"

void menu(void) {
    printf("Equipment     Price      SKU\n");
    line('-',28);
    printf("Skis          12.30      101\n"
           "Boots         10.45      102\n"
           "Poles         2.99       203\n"
           "Helmet        3.99       204\n"
           "Winter Pants  14.30      305\n"
           "Winter Jacket 20.55      306\n");
    line('-',28);
}

double rent(int sku) {
    double price;
    switch (sku) {
        case 101:
            price = 12.30;
            printf("Skis ............ 12.30$\n");
            break;
        case 102:
            price = 10.45;
            printf("Boots ........... 10.45$\n");
            break;
        case 203:
            price = 2.99;
            printf("Poles ............ 2.99$\n");
            break;
        case 204:
            price = 3.99;
            printf("Helmet ........... 3.99$\n");
            break;
        case 305:
            price = 14.30;
            printf("Winter Pants ..... 14.30$\n");
            break;
        case 306:
            price = 20.55;
            printf("Winter Jacket .... 20.55$\n");
            break;
        default:
            printf("Invalid Selection!\n");
            price = 0.0;
            break;
    }
    return price;
}

void rental(void) {
    int receivedSKU;
    double rentalPrice;
    double finalPrice;
    menu();
    do {
        printf("Enter Sku or 0 to exit: ");
        receivedSKU = getInt();
        rentalPrice = rent(receivedSKU);
        finalPrice += rentalPrice;
    } while (receivedSKU != 0);
    
    line('-',28);
    printf("Total price:      %.2lf\n",finalPrice);
    printf("Tax:              %.2lf\n",finalPrice*.13);
    printf("Total + Tax:      %.2lf\n",finalPrice+finalPrice*.13);
    line('*',28);
}
