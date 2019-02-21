/* Library to give interactive 3/4 bit color to unix like terminal
 *
 *                      Author:
 *                      Vignesh Natarajan (Viki)
 *                      viki@vikilabs.org
 *
 * Licence : Free to use, modify and distribute.
 */

/*Foreground*/
#define FG_BLACK        "\x1B[30m"
#define FG_RED          "\x1B[31m"
#define FG_GREEN        "\x1B[32m"
#define FG_YELLOW       "\x1B[33m"
#define FG_BLUE         "\x1B[34m"
#define FG_MAGENTA      "\x1B[35m"
#define FG_CYAN         "\x1B[36m"
#define FG_WHITE        "\x1B[37m"

/*Bright Foreground*/
#define FG_BR_BLACK    "\x1B[90m"
#define FG_BR_RED      "\x1B[91m"
#define FG_BR_GREEN    "\x1B[92m"
#define FG_BR_YELLOW   "\x1B[93m"
#define FG_BR_BLUE     "\x1B[94m"
#define FG_BR_MAGENTA  "\x1B[95m"
#define FG_BR_CYAN     "\x1B[96m"
#define FG_BR_WHITE    "\x1B[97m"

/*Background*/
#define BG_BLACK        "\x1B[40m"
#define BG_RED          "\x1B[41m"
#define BG_GREEN        "\x1B[42m"
#define BG_YELLOW       "\x1B[43m"
#define BG_BLUE         "\x1B[44m"
#define BG_MAGENTA      "\x1B[45m"
#define BG_CYAN         "\x1B[46m"
#define BG_WHITE        "\x1B[47m"

/*Bright Background*/
#define BG_BR_BLACK    "\x1B[100m"
#define BG_BR_RED      "\x1B[101m"
#define BG_BR_GREEN    "\x1B[102m"
#define BG_BR_YELLOW   "\x1B[103m"
#define BG_BR_BLUE     "\x1B[104m"
#define BG_BR_MAGENTA  "\x1B[105m"
#define BG_BR_CYAN     "\x1B[106m"
#define BG_BR_WHITE    "\x1B[107m"

#define RESETCOLOR     "\033[0m"

typedef enum{
    BLACK,      
    RED, 
    GREEN, 
    YELLOW, 
    BLUE, 
    MAGENTA, 
    CYAN, 
    WHITE, 
    BRIGHT_BLACK,     
    BRIGHT_RED, 
    BRIGHT_GREEN, 
    BRIGHT_YELLOW, 
    BRIGHT_BLUE, 
    BRIGHT_MAGENTA, 
    BRIGHT_CYAN, 
    BRIGHT_WHITE
}color_t;


extern void reset_color();
extern void set_bg_color(color_t color);
extern void set_fg_color(color_t color);
