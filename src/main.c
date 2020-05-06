/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main source file
*/

#include <my_tools.h>
#include <n4s.h>

int remov_space(char const *c)
{
    int i = 0;
    for (; (c[i] == ':' || c[i] == '\t') && c[i] != '\0'; i++);
    return i;
}

int main(void)
{
    char **tab = my_str_to_word_array("bili:bili:fasfsad:safsadf:f:sdfs", remov_space);
    my_show_word_array(tab);
    return (0);
}