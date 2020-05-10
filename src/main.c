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

int is_track_cleared(char *str)
{
    char **tab = NULL;
    int i = 0;

    tab = my_str_to_word_array(str, delim);

    while (tab[i] != NULL) {
        if (strcmp("Track Cleared", tab[i]) == 0) {
            put_command(STOP"\n");
            return (0);
        }
        i += 1;
    }
    return (1);
}

int forward(dir_t *dir, char *str, size_t len)
{
    if (dir->mid >= 2000) {
        put_command(FOR"1.0\n");
        str = get_next_line(0);
    }
    else if (dir->mid >= 1500) {
        put_command(FOR"0.8\n");
        str = get_next_line(0);
    }
    else if (dir->mid >= 1000) {
        put_command(FOR"0.6\n");
        str = get_next_line(0);
    }
    else if (dir->mid >= 600) {
        put_command(FOR"0.4\n");
        str = get_next_line(0);
    }
    else if (dir->mid >= 300) {
        put_command(FOR"0.2\n");
        str = get_next_line(0);
    }
    else {
        put_command(FOR"0.1\n");
        str = get_next_line(0);
    }
    return (1);
}

int direct(dir_t *dir, char *str, size_t len, char **infos)
{
    dir->left = atoi(infos[3]);
    dir->right = atoi(infos[33]);
    if (dir->right > dir->left) {
        put_command(WHEELS"-0.4\n");
        str = get_next_line(0);
    }
    if (dir->right < dir->left) {
        put_command(WHEELS"0.4\n");
        str = get_next_line(0);
    }
    return(1);
}

int main(void)
{
    char *str = NULL;
    size_t len = 0;
    char **infos = NULL;
    int offset = 1;
    float middle;
    dir_t dir;

    start(str, len);
    while (offset)
    {
        put_command(INFO"\n");
        str = get_next_line(0);
        if (is_track_cleared(str) == 0)
            return (0);
        infos = my_str_to_word_array(str, delim);
        dir.mid = atoi(infos[17]);
        offset = forward(&dir, str, len);

        put_command(INFO"\n");
        str = get_next_line(0);
        if (is_track_cleared(str) == 0)
            return (0);
        infos = my_str_to_word_array(str, delim);
        dir.mid = atoi(infos[17]);
        offset = direct(&dir, str, len, infos);
    }
    stop(str, len);

    return (0);
}