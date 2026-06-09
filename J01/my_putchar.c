#include <unistd.h>

void my_putchar(char c) 
{
    write(1, &c, sizeof(c));
}

void my_putstr(char *c) 
{
    write(1, c, sizeof(c));
}

int main() 
{
    my_putchar('a');
    my_putstr("\ntest");
    return 0;
}