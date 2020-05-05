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

#endif /* !N4S_H_ */
