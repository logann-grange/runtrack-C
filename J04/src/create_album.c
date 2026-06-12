#include "../include/album.h"

Album *create_album(char *title, char *artist, int year)
{
    Album *album = malloc(sizeof(Album));
    album->artist = artist;
    album->title = title;
    album->year = year;

    return album;
}