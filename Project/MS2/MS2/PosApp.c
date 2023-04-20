//
//  PosApp.c
//  MS2
//
//  Created by Intae Chung on 2023-03-29.
//
/* Citation and Sources
 MS2
 void cpyString(char* des, const char* src, int size) uitls.c referenced in PosApp.c
 Classmate Emily Fagin showed me this function as a way of copying one string variable to another without the use of strncpy from the <string.h> library and gave me permission to incorporate it into my code
 */
#include "PosApp.h"
#include "utils.h"
#include <stdio.h>
#include <string.h>

void start(const char* action) {
   printf(">>>> %s...\n", action);
}

int loadItems(const char filename[]) {
    int i = 0;
    start("Loading Items");
    FILE* fp = fopen(filename, "r");
    if (fp != NULL) {
        while (fscanf(fp, "%[^,],%[^,],%lf,%d,%d\n", items[i].SKU, items[i].name, &items[i].price, &items[i].taxed, &items[i].quantity) == 5) {
            i++;
        }
        noOfItems = i;
        start("Done!");
    }
    fclose(fp);
    return noOfItems;
}

void saveItems(const char filename[]) {
    int i = 0;
    start("Saving Items");
    FILE* fp = fopen(filename, "w");
    if (fp != NULL) {
        for (i=0; i < noOfItems; i++) {
            fprintf(fp, "%s,%s,%2.2lf,%d,%d\n", items[i].SKU, items[i].name, items[i].price, items[i].taxed, items[i].quantity);
        }
        start("Done!");
        fclose(fp);
    }
    else {
        printf("Could not open >>%s<<\n", filename);
    }
}

void inventory(void) {
    double tav = 0;
    int i = 0;
    start("List Items");
    listItems();
    for (i =0; i < noOfItems; i++) {
        tav += cost(&items[i]) * items[i].quantity;
    }
    printf("                               Total Asset: $  |%14.2lf |\n", tav);
    printf("-----------------------------------------------^---------------^\n");
}

void addItem(void) {
   start("Adding Item");
}

void removeItem(void) {
   start("Remove Item");
}

void stockItem(void) {
   start("Stock Items");
}

void POS(void) {
    int itemCount = 0;
    double total = 0.0;
    double itemPrice;
    struct Item bill[MAX_BILL_ITEMS];
    int find, i;
    int done = 1;
    start("Point Of Sale");
    while (itemCount < MAX_BILL_ITEMS) {
       int find = search();

       if (find == -2)
       {
          done = 0;
       }
       else if (find == -1)
       {
          printf("SKU not found!\n");
       }
       else if (items[find].quantity == 0)
       {
          printf("Item sold out!\n");
       }
       else
       {
          items[find].quantity--;
          bill[itemCount++] = items[find];
          display(&items[find]);
       }
    }
    if (find != 0) {
        printf("+---------------v-----------v-----+\n"
               "| Item          |     Price | Tax |\n"
               "+---------------+-----------+-----+\n");
        for (i = 0; i < itemCount; i++ ) {
            itemPrice = billDisplay(&bill[i]);
            total += itemPrice;
        }
        printf("+---------------^-----------^-----+\n");
        printf("| total:         %10.2lf |\n", total);
        printf("^---------------------------^");
    }
}

double billDisplay(const struct Item* item) {
    double itemCost = cost(item);
    char itemName[15];
    cpyString(itemName, item->name, 14);
    itemName[14] = '\0';
    printf("| %-14.14s| %9.2lf | %s |\n", item->name, itemCost, item->taxed ? "Yes" : "   ");
    return cost(item);
}

double cost(const struct Item* item) {
    double cost = item->price * (1 + item->taxed * TAX);
    return cost;
}

void listItems(void) {
    char iName[19];
    int i = 0;
    printf(" Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n"
           "-----|--------|--------------------|-------|---|-----|---------|\n");
    for (i=0;i < noOfItems; i++) {
        cpyString(iName, items[i].name, 18);
        iName[18] = 0;
        printf("%4d | %6s | %-18s |%6.2lf | %c | %3d |%8.2lf |\n", i+1, items[i].SKU, iName, items[i].price, items[i].taxed ? 'T' : ' ', items[i].quantity, cost(&items[i]) * items[i].quantity);
    }
    printf("-----^--------^--------------------^-------^---^-----^---------^\n");
}

void display(const struct Item* item) {
    printf("=============v\n");
    printf("Name:        %s\n", item->name);
    printf("Sku:         %s\n", item->SKU);
    printf("Price:       %.2lf\n", item->price);
    printf("Price + tax: ");
    if (item->taxed) {
        printf("%.2lf\n", cost(item));
    }
    else {
        printf("N/A\n");
    }
    printf("Stock Qty:   %d\n", item->quantity);
    printf("=============^\n");
}

int search(void) {
    char sku[MAX_SKU_LEN + 1];
    int i;
    int index = -1;
    printf("Sku: ");
    if (scanf("%[^\n]%*c", sku) != 1) {
        index = -2;
    }
    for ( i=0; i<noOfItems; i++ ) {
        if (strcmp(sku, items[i].SKU) == 0) {
            index = i;
        }
    }
    return index;
}
