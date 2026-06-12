#include "../include/album.h"

void album_del_one(AlbumItem **list, AlbumItem *elem) {
    if (*list == NULL || elem == NULL)
        return;

    // cas spécial : elem est la tête
    if (*list == elem) {
        *list = elem->next;
        free(elem);
        return;
    }

    // cas général : chercher le nœud précédent
    AlbumItem *prev = *list;
    while (prev->next != NULL && prev->next != elem)
        prev = prev->next;

    if (prev->next == NULL)
        return; // elem n'est pas dans la liste

    prev->next = elem->next; // enjambe elem
    free(elem);
}