/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main source file
*/

#include "../include/n4s.h"

void start(char *str, size_t len)
{
    put_command(START"\n");
    printf("BITE\n");
    getline(&str, &len, stdin);
}

void stop(char *str, size_t len)
{
    put_command(STOP"\n");
    getline(&str, &len, stdin);
}

void get_infos(char *str, size_t len)
{
    put_command(INFO"\n");
    getline(&str, &len, stdin);
}

void car_forward(char *str, size_t len)
{
    put_command(FOR"0.3\n");
    getline(&str, &len, stdin);
}

int delim(char const *str)
{
    int i = 0;
    for (; str[i] == ':' && str[i] != '\0'; i++);
    return i;
} 

int is_track_cleared(char *str)
{
    char **tab = NULL;
    int i = 0;
    printf("CECI EST STR : %s\n", str);
    tab = my_str_to_word_array(str, delim);
    printf("%s\n", tab[0]);
    while (tab[i] != NULL) {
        if (strcmp("Track Cleared", tab[i]) == 0) {
            put_command(STOP"\n");
            return (0);
        }
        i += 1;
    }
    return (1);
}

int main(void)
{
    char *str = NULL;
    size_t len = 0;
    char **infos = NULL;
    int offset = 1;

    start(str, len);
    car_forward(str, len);
    while (offset)
    {
        get_infos(str, len);
        offset = is_track_cleared(str);
    }
    stop(str, len);

    return (0);
}