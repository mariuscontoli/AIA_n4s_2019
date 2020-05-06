/*
** EPITECH PROJECT, 2020
** get_next_line.h
** File description:
** get next line header
*/

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

#ifndef READ_SIZE
#define READ_SIZE (2)
#endif /* !READ_SIZE */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

char *get_next_line(const int fd);
static char *my_realloc(char *str, int index, int *static_begin, char *buffer);
char *my_strncpy(char *dest, char const *src, int n);

#endif /* !GET_NEXT_LINE_H_ */
