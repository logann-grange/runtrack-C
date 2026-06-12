#include "../include/album.h"
#include <stdio.h>

void print_album(Album *album)
{
    printf("%s by %s released in %d", album->title, album->artist, album->year);
}