#include <stdio.h>
#include "colors.h"
int main()
{
    set_bg_color(RED);      printf(" RED ");
    set_bg_color(BLUE);     printf(" BLUE ");
    set_bg_color(GREEN);    printf(" GREEN ");
    reset_color();          printf("\n");
    return 0;
}

