/*
** EPITECH PROJECT, 2020
** direction.c
** File description:
** direction source file
*/

#include "../include/n4s.h"

int right(dir_t **dir, char *str, size_t len, char **infos)
{
    if ((*dir)->mid >= 1500) {
        put_command(WHEELS"-0.005\n");
        str = get_next_line(0);
    }
    else if ((*dir)->mid >= 1000) {
        put_command(WHEELS"-0.05\n");
        str = get_next_line(0);
    }
    else if ((*dir)->mid >= 600) {
        put_command(WHEELS"-0.1\n");
        str = get_next_line(0);
    }
    else if ((*dir)->mid >= 400) {
        put_command(WHEELS"-0.3\n");
        str = get_next_line(0);
    } else {
        right_2(dir, str, len, infos);
    }
}

int right_2(dir_t **dir, char *str, size_t len, char **infos)
{
    if ((*dir)->mid >= 200) {
        put_command(WHEELS"-0.4\n");
        str = get_next_line(0);
    }
    else if ((*dir)->mid >= 100) {
        put_command(WHEELS"-0.5\n");
        str = get_next_line(0);
    }
    else {
        put_command(WHEELS"-0.6\n");
        str = get_next_line(0);
    }
}

int left_2(dir_t **dir, char *str, size_t len, char **infos)
{
    if ((*dir)->mid >= 200) {
        put_command(WHEELS"0.4\n");
        str = get_next_line(0);
    }
    else if ((*dir)->mid >= 100) {
        put_command(WHEELS"0.5\n");
        str = get_next_line(0);
    }
    else {
        put_command(WHEELS"0.6\n");
        str = get_next_line(0);
    }
}

int left(dir_t **dir, char *str, size_t len, char **infos)
{
    if ((*dir)->mid >= 1500) {
        put_command(WHEELS"0.005\n");
        str = get_next_line(0);
    }
    else if ((*dir)->mid >= 1000) {
        put_command(WHEELS"0.05\n");
        str = get_next_line(0);
    }
    else if ((*dir)->mid >= 600) {
        put_command(WHEELS"0.1\n");
        str = get_next_line(0);
    }
    else if ((*dir)->mid >= 400) {
        put_command(WHEELS"0.3\n");
        str = get_next_line(0);
    } else
        left_2(dir, str, len, infos);
}