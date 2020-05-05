/*
** EPITECH PROJECT, 2019
** runner
** File description:
** runner
*/

#ifndef RUNNER_H_
#define RUNNER_H_
#include "structure.h"

#ifndef s_character
struct s_character 
{
    char *name;
    sfSprite *sp;
    sfTexture *tu;
    sfVector2f pos;
    sfIntRect rec;
    void (*draw_text)(text_t **[]);
    char *img;
    unsigned int level;
    unsigned int hp;
    int id;
    float stg[4];
    float d_stg[4];
    float life;
    float speed;
    float xp;
    text_t **text[5];
};
#endif // !1

#ifndef character_t
typedef struct s_character character_t;
#endif

#ifndef game_t
typedef struct s_game game_t;
#endif

#ifndef s_game
struct s_game {
    char *name;
    buttons_t *start;
    buttons_t *delete;
    character_t *character;
};
#endif


/*          main            */
void help_usage(void);

/*          game/init_game.c           */
void extend_init(index_s **game);
index_s **init_game1(game_t *g);

/*          game/sprite_init/sprite_layer1.c           */
void set_info_player(index_s *layer, game_t *g);
void extend_settings_window(index_s *layer);
index_s *layer_one(game_t *g);

/*          game/sprite_init/sprite_entity.c           */
index_s *pnj(void);
void extend_zombie(index_s *zombie);
index_s *zombie(void);
void extend_player(index_s *player);
index_s *player(int pers);

/*          game/sprite_init/sprite_quest.c           */
index_s *request(void);
index_s *icon_quest(index_s **game);

/*          game/sprite_init/sprites_particules.c           */
index_s *particules_ashes(void);
index_s *particle_blood(void);

/*          game/sprite_init/sprites_loot.c           */
index_s *sprite_loot(void);

/*          game/sprite_init/sprites_ath.c           */
index_s *resume_button(void);
index_s *font_pause(void);
index_s *ath_pp(int player);
index_s *ath_life(void);
index_s *ath_cycle(void);

/*          game/sprite_init/sprites_ath_two.c           */
index_s *back_button(void);
index_s *quit_button(void);
index_s *option_button(void);
index_s *cursor(void);

/*          game/sprite_init/sprites_ath_three.c           */
index_s *hit(void);
index_s *text_music(void);
index_s *cursor_sound(void);
index_s *bar_sound(void);

/*          game/sprite_init/sprites_ath_four.c           */
index_s *interact_ath(void);
index_s *nb_hand_text_ath(void);
index_s *hand_text_ath(void);
index_s *inv_ath(void);

/*          game/sprite_init/sprites_buildings.c           */
index_s *building_one(void);


/*          game/chain_list/ash_list.c              */
index_s *loop_ash(void);

/*          game/chain_list/loot_list.c              */
void create_loot_case(index_s **game, index_s *zombie);

/*          game/chain_list/blood_list.c              */
index_s *loop_blood(void);

/*          game/chain_list/zombie_list.c              */
void extend_create_zombie(index_s *newcase);
void create_zombie(index_s **game);
void loop_zombie(index_s **game);

/*          game/chain_list/build_one_list.c              */
index_s *set_new_build_one(void);

/*          game/game.c           */
void parse_draw_game(index_s **game);
void parse_event(index_s **game);
void loop_game(index_s **game);

/*          game/draw_game/draw_map.c           */
void draw_ath_cycle(index_s **game);
void draw_particles_blood(index_s **game);
void draw_particles_ashe(index_s **game);
void draw_layer(index_s **game);

/*          game/draw_game/draw_map.c           */
void draw_zombie(index_s **game);
void draw_player(index_s **game);
void draw_entity(index_s **game);

/*          game/draw_game/draw_buildings.c           */
void draw_building_one(index_s **game);

/*          game/draw_game/draw_ath.c           */
void draw_button_pause(index_s **game);
void draw_pause(index_s **game);
void draw_cursor(index_s **game);
void draw_ath_life_and_pp(index_s **game);

/*          game/draw_game/draw_ath_two.c           */
void draw_reques(index_s **game);
void draw_inv(index_s **game);

/*          game/draw_game/draw_settings.c           */
void draw_sound_settings(index_s **game);
void draw_pause_settings(index_s **game);

/*          game/clock_game/clock_ash.c           */
void extend_clock_rotate_ash(index_s *ash);
void clock_rotate_ash(index_s *ash);
void extend_clock_ash_down(index_s *ash);
void clock_ash_down(index_s *ash);

/*          game/clock_game/clock_ash_two.c           */
void add_scale_ash(index_s *ash);
void clock_scale_ash(index_s *ash);

/*          game/clock_game/clock_blood.c           */
void clock_blood_down(index_s *blood);

/*          game/clock_game/clock_movement.c           */
void clock_sprint_player(index_s **game);
void clock_move_player_x(index_s **game);
void clock_move_player_y(index_s **game);
void clock_move_map_x(index_s **game);
void clock_move_map_y(index_s **game);

/*          game/clock_game/extend_movement_one.c           */
void movement_player_left(index_s **game);
void movement_player_right(index_s **game);
void movement_player_up(index_s **game);
void movement_player_down(index_s **game);

/*          game/clock_game/extend_movement_one.c           */
void movement_player_left_two(index_s **game);
void movement_player_right_two(index_s **game);
void movement_player_up_two(index_s **game);
void movement_player_down_two(index_s **game);

/*          game/clock_game/clock_movement_two.c           */
void extend_move_map_keyd(index_s **game);
void extend_move_map_keyq(index_s **game);
void extend_move_map_keyz(index_s **game);
void extend_move_map_keys(index_s **game);

/*          game/clock_game/clock_movement_three.c           */
void extend_move_map_keyz_two(index_s **game);
void extend_move_map_keys_two(index_s **game);
void extend_move_map_keyd_two(index_s **game);
void extend_move_map_keyq_two(index_s **game);

/*          game/clock_game/clock_movement_four.c           */
void extend_move_map_keyz_three(index_s **game);
void extend_move_map_keys_three(index_s **game);
void extend_move_map_keyd_three(index_s **game);
void extend_move_map_keyq_three(index_s **game);

/*          game/clock_game/clock_animplayer.c           */
void clock_animated_player_d(index_s **game);
void clock_animated_player_q(index_s **game);
void clock_animated_player_s(index_s **game);
void clock_animated_player_z(index_s **game);

/*          game/clock_game/clock_ath.c           */
void clock_set_cursor(index_s **game);
void clock_move_lateral_button(index_s **game);
void clock_font_pause(index_s **game);
void clock_pp(index_s **game);
void clock_ath_cycle(index_s **game);

/*          game/clock_game/clock_movement_zombie.c           */
void extend_animated_zombie(index_s *zombie, int i);
void clock_animated_zombie(index_s *zombie, int i);
void extend_movement_zombie_y(sfVector2f tmpp, sfVector2f tmpz,
    index_s *zombie, index_s **game);
void extend_movement_zombie_x(sfVector2f tmpp, sfVector2f tmpz,
    index_s *zombie, index_s **game);
void clock_movement_zombie(index_s **game, index_s *zombie);


/*          game/event_game/event_window.c           */
void event_window(index_s **game);

/*          game/event_game/event_collision.c           */
int verif_if_down(index_s **game, index_s *entity);
int verif_if_up(index_s **game, index_s *entity);
int verif_if_left(index_s **game, index_s *entity);
int verif_if_right(index_s **game, index_s *entity);

/*          game/event_game/event_collision_two.c           */
int verif_if_down_two(index_s **game, index_s *entity);
int verif_if_up_two(index_s **game, index_s *entity);
int verif_if_left_two(index_s **game, index_s *entity);
int verif_if_right_two(index_s **game, index_s *entity);

/*          game/event_game/event_pause.c           */
void event_back_button_pause(index_s **game);
void event_quit_button_pause(index_s **game);
void event_option_button_pause(index_s **game);
void event_resume_button_pause(index_s **game);
void event_set_pause(index_s **game);

/*          game/event_game/event_pause_sound.c           */
void extend_move_cursor_sound(index_s **game);
void event_cursor_sound(index_s **game);

/*          game/event_game/event_hit.c           */
void zombie_hit_player(index_s **game, index_s *zombie);
void kill_zombie(index_s **game);
void event_hit(index_s **game);

/*          game/event_game/event_hit.c           */
void e_loot_add(index_s **game, index_s *tmp);
void event_loot_interact(index_s **game, index_s *tmp);
void e_interact_pnj(index_s **game);
void event_pnj_interact(index_s **game);

/*          game/event_game/event_verif_hand.c           */
void verif_hand(index_s **game);

#endif /* !RUNNER_H_ */
