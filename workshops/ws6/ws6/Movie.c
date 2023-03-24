//
//  Movie.c
//  ws6
//
//  Created by Intae Chung on 2023-03-24.
//

#include "Movie.h"

int loadMovie(struct Movie* mptr, FILE* fptr) {
    return (fscanf(fptr, "%[^\t\n]\t%d\t%[^\t]\t%d\t%[^\t]\t%f\\n", mptr->title, &mptr->year, mptr->rating, &mptr->minutes, mptr->genre, &mptr->consRating));
}
    
void list(const struct Movie* mptr, int row) {
    printf("| %3d | %-20.20s | %d | %4s |%2d:%02d | %-25.25s | %4.1f |\n", row, mptr->title, mptr->year, mptr->rating, mptr->minutes / 60, mptr->minutes % 60, mptr->genre, mptr->consRating);
}

void display(const struct Movie* m) {
    printf("Title: %s\n", m->title);
    printf("Year: %d\n", m->year);
    printf("Rating: %s\n", m->rating);
    printf("Duration: %d\n", m->minutes);
    printf("Genres: %s\n", m->genre);
    printf("Consumer Rating: %3.f\n", m->consRating);
}

const char* getMovieTitle(const struct Movie* mptr) {
    return mptr->title;
}
