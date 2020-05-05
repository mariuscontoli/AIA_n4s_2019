/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** csfml_tools
*/

#ifndef CSFML_TOOLS_H_
#define CSFML_TOOLS_H_

typedef struct {
    float x;
    float y;
    int top;
    int left;
    int width;
    int height;
} s;

typedef struct s_button {
    unsigned int name;
    bool cliked;
    sfSprite *sp;
    sfTexture *tu;
    sfVector2f pos;
    sfIntRect rec;
} button_t;

typedef struct buttons buttons_t;
typedef struct box box_t;
typedef struct s_music music_t;
struct box {
    bool swich;
    sfSprite *sp;
    sfTexture *tu;
    sfVector2f pos;
    sfIntRect rec;
    buttons_t **btn;
    buttons_t ***btnl;
    void (*draw)(box_t *box, bool animation);
    void (*destroy)(box_t *box);
    bool (*collsion)(box_t *box, void *data);
};

struct s_music {
    sfMusic *buf;
    int def_width;
    int volume;
    box_t *bar;
    buttons_t *arrow[3];
    void (*draw)(music_t *);
    void (*destory)(music_t *);
};

typedef struct s_t t_t;
struct s_t {
    unsigned int name;
    bool cliked;
    sfSprite *sp;
    sfTexture *tu;
    sfVector2f pos;
    sfIntRect rec;
};

typedef struct s_text text_t;
struct s_text {
    bool swich;
    char *str;
    sfText *buf;
    sfFont *font;
    sfVector2f pos, d_pos;
    sfFloatRect rec;
    sfColor color;
    unsigned int d_size, size;
    void (*destroy)(text_t *);
    void (*draw)(text_t *);
};

struct buttons {
    unsigned int name;
    bool cliked;
    sfSprite *sp;
    sfTexture *tu;
    sfVector2f pos;
    sfIntRect rec;
    bool swich;
    void *et;
    void (*draw)(buttons_t *);
    bool (*pressed)(buttons_t *);
    bool (*touched)(buttons_t *);
    bool (*releasd)(buttons_t *);
    void (*destroy)(buttons_t *);
    void (*set_pos_by_box)(buttons_t *, box_t *, sfVector2f);
};

////////////
/// @param img    Your img loction load for the Sprite
/// @param pos    set postion of button, exmeple pos.x 0.1 = 10% size of windows
///               screen
/// @param div_by    divsion sfRect.width by x time minimu 1
/// @brief cerat new button auto set sfRect valuse
/// @return
////////////
buttons_t *new_button(char *img, sfVector2f pos, int div_by, bool swich);

////////////
/// @param img    Your img loction load for the Sprite
/// @param pos    set postion of button, exmeple pos.x 0.1 = 10% size of windows
///               screen
/// @param swich  if ture draw box sprite
/// @brief cerat new button
/// @return bot_t *
////////////
box_t *new_box(char *img, sfVector2f pos, bool swich);

////////////
/// @param filename    Your muisc loction load for the Sprite
/// @param bar_pos    set postion of button, exmeple pos.x 0.1 = 10% size of
/// windows
///               screen
/// @param box bar_pos need done insed of box position, like option box
/// @brief cerat new sfmuisc will start paly and loop affter created
/// @return muisc_t *
////////////
music_t *new_music(char *filename, sfVector2f bar_pos, box_t *box);

text_t *new_text(sfVector2f pos, char *str, bool swich);
text_t *new_text2(sfVector2f pos, char *str, bool swich);

////////////
/// @param box1 take struct type contne vayable sfvector2f pos and sfRect1 rec
/// @param box2 take struct type contne vayable sfvector2f pos and sfRect1 rec
/// @brief take any type strcut chck collsion
/// @return if boxs touched return true else false
bool square_collision2(void *box1, void *box2);

///////////////
/// @param box1 take struct type contne vayable sfvector2f pos and sfRect1 rec
/// @param box1 take struct type contne vayable sfvector2f pos and sfRect1 rec
/// @brief set box1 postion acrote by box2
//////////////
void set_pos_by_box(void *box1, void *box2, sfVector2f pos);
void set_pos_by_boxt(text_t *text, box_t *box2, sfVector2f pos);

// cheak if moase touched in button retuen true if pressed else faulse
// pos: postion of button
// rect: rectangle of the button
bool button_touched(sfVector2f mouse, sfVector2f pos, sfIntRect rect);

// cheak if moase pressed in button retuen true if pressed else faulse
// pos: postion of button
// rect: rectangle of the button
bool button_preszzsed(sfEvent event, sfVector2f mouse, sfVector2f pos,
                    sfIntRect rec);

// cheak if moase relesed in button retuen true if pressed else faulse
// pos: postion of button
// rect: rectangle of the button
bool button_relesed(sfEvent event, sfVector2f mouse, sfVector2f pos,
                    sfIntRect rec);

// Check if the two img (sprite) collision
// pos_1, pos_1: postion of square
// rect: rectangle of the square
// Detection accuracy: cube
bool square_collision(sfVector2f pos_1, sfIntRect rect_1, sfVector2f pos_2,
                    sfIntRect rect_2);

// check events key pressed
bool is_env_key_pressed(sfKeyCode code);

// if button have 3 steps you can use this conction
// ection if mouse touched button and
// if mouse pressed button
// rec_side:  exp: &rect.letf or &rect.top
void button_animation(sfVector2f mouse_pos, button_t *button, int offset,
                    int *rec_side);

// 1 Get img (sprite) rectangle automatically
// 2 Position (pos) img percentage position on screen
// pos.x pos.y (Screen 1920 × 1080 standard) 0.1 = 10%, 0.5 = 50% postion on
// screen
void creat_button(button_t *button, char *img, s src);

void creat_sprite(sfSprite **sprite, sfTexture *texture);

void creat_img_sprite(sfSprite **sprite, sfTexture **texture, char *img);

void creat_clocks(sfClock **clock, unsigned int num);

// creat_text
void creat_text(text_t *text, sfVector2f pos, unsigned int size, char *str);

// change rect.lete time cold wthen equle max_value reset to 0;
void move_rect(sfIntRect *rect_pea, int offset, int max_value);

// change rect.lete time cold wthen equle max_valuedon't do anything
void move_rect_deth(sfIntRect *rect_pea, int offset, int max_value);

void buttons_animation(buttons_t *button);
void buttons_draw(buttons_t *button);
void buttons_destroy(buttons_t *button);
bool buttons_touched(buttons_t *button);
bool buttons_pressed(buttons_t *button);
bool buttons_releasd(buttons_t *button);

void set_text_str(text_t *text, char *str);

void draw_tab_button_anim(buttons_t **btnl[]);
void draw_tab_button(buttons_t **btnl[]);

#endif /* !CSFML_TOOLS_H_ */