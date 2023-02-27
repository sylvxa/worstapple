#include <stdlib.h>
#include <stdio.h>
#include <png.h>
#include <math.h>

char ascii[] = " `.-':_,^=;><+!rc*/z?sLTv)J7(|Fi{C}fI31tlu[neoZ5Yxjya]2ESwqkP6h9d4VpOGbUAKXHm8RD#$Bg0MNWQ%&@";

char value_to_char(int value) {
    int length = (sizeof(ascii)/sizeof(ascii[0]))-1;
    float index = (float) (value-1) / 255 * length;
    return ascii[(int) index];
}

int rgb_to_brightness(int r, int g, int b) {
    return (int) ((r+g+b)/3);
};

char* image_to_ascii(char *filename) {

    FILE *fp = fopen(filename, "rb");
}

int main() {
    printf("char: %c\n", value_to_char(255));
    
    return 0; 
}