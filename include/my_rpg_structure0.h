/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** my_rpg_structure0
*/

#ifndef MY_RPG_STRUCTURE0_H_
#define MY_RPG_STRUCTURE0_H_

#ifndef win
sfRenderWindow *win;
#endif

#ifndef event
sfEvent event;
#endif

enum e_menu_buttons { ply, hlp, opt, quit, m_btn_end } m_btns;

enum e_fps { f30, f60, f120, f144, fend } e_fps;

typedef struct s_Keys {
    bool esc;
    bool up;
    bool down;
    bool left;
    bool right;
    bool space;
} KEY_BOOL_t;

enum e_box {
    cls, // main_settings_t box_t close button
    newgame,
    bleft,
    bright
};

enum e_muisc {
    mleft,    // left arror img
    mright // right arror img
};

enum win_page {
    menup,
    gamep,
    winp,
    losep
};

enum e_lost_box_btn {
    lrestat,
    lbackmenu,
    lexit,
    lend
};

typedef struct s_main_settings {
    box_t *box;
    music_t *music;
    buttons_t *fps[fend + 1];
} main_settings_t;

typedef struct s_game_settings {
} game_settings_t;

typedef struct s_point {
    int val;
    text_t *text;
} point_t;

typedef struct s_main {
    box_t *bg;
    buttons_t *btn[m_btn_end + 1];
    main_settings_t settings;
    box_t *chr; // chrarater list
    box_t *ccb; // choos_charater_box
    box_t *ccs; // choos_charater_statagi
    box_t *htp;
    point_t point;
} main_t;

enum stg {
    life,
    speed,
    xp,
    lvl
};

#ifdef s_character
struct s_character 
{
    char *name;
    sfSprite *sp;
    sfTexture *tu;
    sfVector2f pos;
    sfIntRect rec;
    void (*draw_text)(text_t **[]);
    unsigned int level;
    unsigned int hp;
    int id;
    float stg[3];
    float d_stg[3];
    float life;
    float speed;
    float xp;
    text_t **text[5];
};
#endif // !1

#ifdef character_t
typedef struct s_character character_t;
#endif

#ifdef game_t
typedef struct s_game game_t;
#endif

#ifdef s_gamel
struct s_game {
    char *name;
    buttons_t *start;
    buttons_t *delete;
    character_t *character;
};
#endif

typedef struct lol_z {
    bool swich;
    sfSprite *sp;
    sfTexture *tu;
    sfVector2f pos;
    sfIntRect rec;
    sfTime time;
    float seconds;
    sfClock *clockss;
}z_t;

typedef struct s_parallax {
    sfSprite *sp[9];
    sfTexture *tu[9];
    sfVector2f pos[9];
    sfIntRect rec[9];
    buttons_t *btn[4];
    z_t z;
    sfTime time;
    float seconds;
    sfClock *clockss;
    music_t *muisc;
}parallax_t;

typedef struct s_data {
    int page;
    game_t *tmp;
    dlist_t *game_l;
    dlist_t *chara;
    main_t main;
    bool fullscreen;
    index_s **game;
    parallax_t pl;
} data_t;

#endif /* !MY_RPG_STRUCTURE0_H_ */