/*
** EPITECH PROJECT, 2020
** structure
** File description:
** structure
*/

#ifndef STRUCTURE_H_
#define STRUCTURE_H_
#include "my.h"

typedef struct wintex_t
{
    sfVideoMode scale;
    sfRenderWindow *window;
    sfTexture *texture;
}wintex_s;

typedef struct rectsprite_t
{
    sfIntRect rect;
    sfSprite *sprite;
}rectsprite_s;

typedef struct evclock_t
{
    sfEvent event;
    sfClock *clock, *clocktwo, *clockthree;
}evclock_s;

typedef struct vecto_t
{
    sfVector2f twof, twoff;
    sfVector2i twoi, twoii;
    sfVector2u twou, twouu;
    sfVector3f threef, threeff;
}vecto_s;

typedef struct texfont_t
{
    sfFont *font;
    sfText *text;
    sfColor color;
}texfont_s;

typedef struct audio_t
{
    sfMusic *music;
}audio_s;

typedef struct varint_t
{
    float i, ii;
    float j, jj;
    float x, y;
    int rand, key, brok;
    int pause;
}varint_s;

typedef struct varchar_t
{
    char c;
    char *str, *str2;
}varchar_s;

typedef struct info_t
{
    float life;
    float speed;
    float player;
    float xp;
    float lvl;
    int hand;
}info_s;

typedef struct index_t
{
    struct wintex_t wintex;
    struct rectsprite_t rectsprite;
    struct texfont_t texfont;
    struct evclock_t evclock;
    struct vecto_t vecto;
    struct audio_t audio;
    struct varint_t varint;
    struct varchar_t varchar;
    struct info_t info;
    struct index_t *next, *prev, *first;
}index_s;

#endif /* !STRUCTURE_H_ */
