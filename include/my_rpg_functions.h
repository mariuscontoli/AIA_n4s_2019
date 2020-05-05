/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** my_rpg_functions
*/

#ifndef MY_RPG_FUNCTIONS_H_
#define MY_RPG_FUNCTIONS_H_

void events(data_t *src);
void window(data_t *src);

/*Main*/
void creat_main(main_t *main);
void creat_main_settings(main_settings_t *stg);
void draw_main(main_t *main);
void draw_main_setings(main_settings_t *stg);
void loop_draw_button_anim(buttons_t **button);
void main_buttons_events(data_t *data, main_t *main);
void set_main_settings(main_settings_t *stg);
void creat_main_sound(main_settings_t *stg);
void draw_music(music_t *music);
void set_sound_volume_by_arrow(music_t *music);
void open_how_to_play(main_t *main);
void close_other_buttons(buttons_t *skp, buttons_t **btns);

/*WIN&LOSE*/
void create_losts(parallax_t *pl);
void parallax_animation_1(data_t *src);
void loste_events(data_t *data, parallax_t *pl);
void draw_parallax(parallax_t *pl);
void create_losts2(data_t *src, parallax_t *pl);

/*Game*/
void creat_game(dlist_t **game_l, char *game_info_file, main_t *main);
char *pracs_string(char *item, char *input_buffer);
char **pracs_stringarray(char *item, char *input_buffer);
double pracs_num(char *item, char *input_buffer);
double *pracs_numarray(char *item, char *input_buffer);
char **get_parscing_file_info(char *filename);
char *get_str(char *item, char **input_buffer);
char **get_strarray(char *item, char **input_buffer);
double get_num(char *item, char **input_buffer);
double *get_numarray(char *item, char **input_buffer);
sfVector2f get_pos(char **input_buffer);
sfIntRect get_rec(char **input_buffer);
char *get_string(char *string);
void draw_game_list(dlist_t *game_l, data_t *data);
void loop_draw_char_text(text_t **text[]);
game_t *init_newgame(dlist_t *g_l, character_t *c, main_t *main);
character_t *init_newcharater(character_t *c);
void set_charater_stg(main_t *main, character_t *c);
void done_creat_chrarter(main_t *main, dlist_t **g_l, character_t *c);
text_t **laod_textcg(sfVector2f pos, char *name, float val);
void game_events(data_t *data);
game_t *init_game(void);
character_t *init_charater(void);

/*free/destroy*/
void free_main(main_t *main);
void destroy_game_l_node(node_t *node);
void destroy_char_l_node(node_t *node);
void free_rpg_data(data_t *data);
void destory_charater(character_t *c);
void destory_game(game_t *game);

/**/
void write_info_numf(int fd, char *item, double num);
void write_info_numi(int fd, char *item, double num);
void write_info_str(int fd, char *item, char *str);
void write_info_tabi(int fd, char *item, int *t, int size);
void write_info_tabf(int fd, char *item, double *t, int size);

#endif /* !MY_RPG_FUNCTIONS_H_ */
