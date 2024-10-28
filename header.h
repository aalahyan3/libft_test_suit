/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:32:25 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/28 11:23:49 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include "../libft/libft.h"

#define MILISECONDE 1000
#define MAX_INT "2147483647"
#define MIN_INT "-2147483648"
#define RESET  "\033[0m"
#define BLACK   "\033[30m" 
#define RED     "\033[31m" 
#define GREEN   "\033[32m" 
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"   
#define MAGENTA "\033[35m" 
#define CYAN    "\033[36m"  
#define WHITE   "\033[37m"
#define PURPLE "\033[35m"

void	correct(int *score, int i);
void	wrong( int i);
void	test_isalpha(int *score);
void 	test_isdigit(int *score);
void	test_isalnum(int *score);
void	test_isascii(int *score);
void	test_isprint(int *score);
void	test_strlen(int *score);
void	test_memset(int *score);
void	test_bzero(int *score);
void	test_memcpy(int *score);
void	test_memmove(int *score);
void	test_strlcpy(int *score);
void	test_strlcat(int *score);
void	test_toupper(int *score);
void	test_tolower(int *score);
void	test_strchr(int *score);
void	test_strrchr(int *score);
void	test_strncmp(int *score);
void	test_memchr(int *score);
void	test_memcmp(int *score);
void	test_strnstr(int *score);
void	test_atoi(int *score);
void	test_calloc(int *score);
void	test_strdup(int *score);
void	test_substr(int *score);
void	test_strjoin(int *score);
void	test_strtrim(int *score);
void	test_split(int *score);


#endif