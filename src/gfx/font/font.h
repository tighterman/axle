#ifndef FONT_H
#define FONT_H

//#include <gfx/lib/gfx.h>
#include <std/common.h>

#define FONT8_SIZE 128*8

typedef struct {
	uint8_t* characters[FONT8_SIZE];
} Font;

int char_index(char ch);

struct screen_t;
typedef struct screen_t Screen;

Font* setup_font();
void draw_char(Screen* screen, Font* font_map, char ch, int x, int y, int color);
void draw_string(Screen* screen, Font* font_map, char* str, int x, int y, int color);

#endif
