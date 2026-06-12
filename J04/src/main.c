#include "../include/manhattan.h"
#include "../include/album.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n======== Job 01 ========");
    Point a, b;
    a.x = 10;
    a.y = 5;
    b.x = 20;
    b.y = 15;
    printf("\ndistance entre a et b -> %d", manhattan(a, b));

    printf("\n\n======== Job 02 ========");
    Album *album;
    album->artist = "Metallica";
    album->title = "Master of Puppets";
    album->year = 1986;
    printf("\n");
    print_album(album);

    printf("\n\n======== Job 03 ========");
    Album *album2 = create_album("Musique musicale", "lui", 2020);
    printf("\n");
    print_album(album2);
    free(album2);

    // printf("\n\n======== Job 04 ========");
    // AlbumItem *albumItem = create_album_item("Musique musicale", "lui", 2020);


    return 0;
}