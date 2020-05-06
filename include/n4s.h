/*
** EPITECH PROJECT, 2020
** n4s.h
** File description:
** n4s header
*/

#ifndef N4S_H_
#define N4S_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include "../src/get_next_line.h"

#define START "START_SIMULATION"
#define STOP "STOP_SIMULATION"
#define FOR "CAR_FORWARD:"
#define BACK "CAR_BACKWARDS:"
#define WHEELS "WHEELS_DIR:"
#define INFO "GET_INFO_LIDAR"
#define G_SPEED "GET_CURRENT_SPEED"
#define G_WHEELS "GET_CURRENT_WHEELS"
#define CYCLE "CYCLE_WAIT:"
#define MAX_SPEED "GET_CAR_SPEED_MAX"
#define MIN_SPEED "GET_CAR_SPEED_MIN"
#define TIME "GET_INFO_SIMTIME"

void my_putchar(char c);
void put_command(char *str);
void start(char *str, size_t len);
int count_word_len(char const *str, int (*to_remove)(char const *c), int *t);
int count_word(char const *str, int (*to_remove)(char const *c), int *i);
char **my_str_to_word_array(char const *str, int (*to_remove)(char const *c));
char *my_strncdup(char *dest, char const *str, int n);
unsigned int my_strlen(char const *str);

#endif /* !N4S_H_ */
