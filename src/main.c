/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main source file
*/

#include "../include/n4s.h"

void start(char *str, size_t len)
{
    put_command(START);
    getline(&str, &len, stdin);
}

int main(void)
{
    char *str = NULL;
    size_t len = 0;
    
    start(str, len);

    return (84);
}