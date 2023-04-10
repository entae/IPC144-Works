//
//  PosApp.h
//  MS1
//
//  Created by Intae Chung on 2023-03-29.
//
#ifndef SDDS_POSAPP_H
#define SDDS_POSAPP_H

void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);

int loadItems(const char filename[]);
void saveItems(const char filename[]);

#endif // !SDDS_POSAPP_H
