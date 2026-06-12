#include <stdlib.h>
#include <stdio.h>


typedef struct {
    char *title;
    char *artist;
    int year;
} Album;

typedef struct album_item {
    char *artist;
    char *title;
    int year;
    struct album_item *next;
} AlbumItem;

void print_album(Album *album);
Album *create_album(char *title, char *artist, int year);

AlbumItem *create_album_item(char *title, char *artist, int year);
int count_album_item(AlbumItem *list);
AlbumItem *find_album(AlbumItem *list, const char *title);
void reverse_list(AlbumItem **list);
void clear_list(AlbumItem **list);
void push_back_album(AlbumItem **list, AlbumItem *album);
void push_front_album(AlbumItem **list, AlbumItem *album);
void album_del_one(AlbumItem **list, AlbumItem *elem);