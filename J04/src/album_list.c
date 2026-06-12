#include "../include/album.h"

AlbumItem *create_album_item(char *title, char *artist, int year)
{
    AlbumItem *album = malloc(sizeof(AlbumItem));
    album->artist = artist;
    album->title = title;
    album->year = year;
    album->next = NULL;

    return album;
}

int count_album_item(AlbumItem *list)
{
    int count = 0;
    AlbumItem *currentAlbum = list;
    while (currentAlbum->next != NULL) {
        count++;
        currentAlbum = currentAlbum->next;
    }

    return count;
}

AlbumItem *find_album(AlbumItem *list, const char *title)
{
    AlbumItem *currentAlbum = list;
    while (currentAlbum->next != NULL) {
        if (currentAlbum->title = title)
            return currentAlbum;
    }
    return NULL;
}

void reverse_list(AlbumItem **list) {
    AlbumItem *prev = NULL;
    AlbumItem *current = *list;
    AlbumItem *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *list = prev;
}

void clear_list(AlbumItem **list)
{
    AlbumItem *current = *list;
    AlbumItem *next = NULL;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

void push_back_album(AlbumItem **list, AlbumItem *album)
{
    AlbumItem *current = *list;

    while (current != NULL) {
        current = current->next;
    }

    current->next = album;
}

void push_front_album(AlbumItem **list, AlbumItem *album)
{
    AlbumItem *current = *list;
    album->next = *list;
    list = album;
}