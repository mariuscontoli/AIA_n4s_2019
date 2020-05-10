/*
** EPITECH PROJECT, 2020
** commands.c
** File description:
** commands source file
*/

#include "../include/n4s.h"

void start(char *str, size_t len)
{
    put_command(START"\n");
    str = get_next_line(0);
}

void stop(char *str, size_t len)
{
    put_command(STOP"\n");
    str = get_next_line(0);
}

void get_infos(char *str, size_t len)
{
    put_command(INFO"\n");
    str = get_next_line(0);
}

void car_forward(char *str, size_t len)
{
    put_command(FOR"0.3\n");
    str = get_next_line(0);;
}

int delim(char const *str)
{
    int i = 0;
    for (; str[i] == ':' && str[i] != '\0'; i++);
    return i;
}