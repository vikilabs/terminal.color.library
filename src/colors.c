/* Library to give interactive 3/4 bit color to unix like terminal
*
*                      Author:
*                      Vignesh Natarajan (Viki)
*                      viki@vikilabs.org
*
* Licence : Free to use, modify and distribute.
*/

#include <stdio.h>
#include "colors.h"

void reset_color()
{
    printf("%s", RESETCOLOR);
}

void set_bg_color(color_t color)
{
    char *color_str = NULL;
    
    switch(color){
        case BLACK:     
            color_str = BG_BLACK;
            break;   
        case RED:
            color_str = BG_RED;
            break;   
        case GREEN: 
            color_str = BG_GREEN;
            break;   
        case YELLOW:
            color_str = BG_YELLOW;
            break;   
        case BLUE: 
            color_str = BG_BLUE;
            break;   
        case MAGENTA: 
            color_str = BG_MAGENTA;
            break;   
        case CYAN: 
            color_str = BG_CYAN;
            break;   
        case WHITE:
            color_str = BG_WHITE;
            break;   
        case BRIGHT_BLACK:  
            color_str = BG_BR_BLACK;
            break;   
        case BRIGHT_RED: 
            color_str = BG_BR_RED;
            break;   
        case BRIGHT_GREEN: 
            color_str = BG_BR_GREEN;
            break;   
        case BRIGHT_YELLOW:
            color_str = BG_BR_YELLOW;
            break;   
        case BRIGHT_BLUE: 
            color_str = BG_BR_BLUE;
            break;   
        case BRIGHT_MAGENTA:
            color_str = BG_BR_MAGENTA;
            break;   
        case BRIGHT_CYAN: 
            color_str = BG_BR_CYAN;
            break;   
        case BRIGHT_WHITE:
            color_str = BG_BR_WHITE;
            break;   
    }

    printf("%s", color_str);
}

void set_fg_color(color_t color)
{
    char *color_str = NULL;
    
    switch(color){
        case BLACK:     
            color_str = FG_BLACK;
            break;   
        case RED:
            color_str = FG_RED;
            break;   
        case GREEN: 
            color_str = FG_GREEN;
            break;   
        case YELLOW:
            color_str = FG_YELLOW;
            break;   
        case BLUE: 
            color_str = FG_BLUE;
            break;   
        case MAGENTA: 
            color_str = FG_MAGENTA;
            break;   
        case CYAN: 
            color_str = FG_CYAN;
            break;   
        case WHITE:
            color_str = FG_WHITE;
            break;   
        case BRIGHT_BLACK:  
            color_str = FG_BR_BLACK;
            break;   
        case BRIGHT_RED: 
            color_str = FG_BR_RED;
            break;   
        case BRIGHT_GREEN: 
            color_str = FG_BR_GREEN;
            break;   
        case BRIGHT_YELLOW:
            color_str = FG_BR_YELLOW;
            break;   
        case BRIGHT_BLUE: 
            color_str = FG_BR_BLUE;
            break;   
        case BRIGHT_MAGENTA:
            color_str = FG_BR_MAGENTA;
            break;   
        case BRIGHT_CYAN: 
            color_str = FG_BR_CYAN;
            break;   
        case BRIGHT_WHITE:
            color_str = FG_BR_WHITE;
            break;   
    }
    
    printf("%s", color_str);
}


