/*
** EPITECH PROJECT, 2020
** utils.c
** File description:
** utils source file
*/

#include "../include/n4s.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void put_command(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        ++i;
    }
}