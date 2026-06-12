#include "../include/manhattan.h"

int manhattan(Point a, Point b)
{
    int dist_x = b.x - a.y;
    int dist_y = b.y - a.y;

    return dist_x + dist_y;
}