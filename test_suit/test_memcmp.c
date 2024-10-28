/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:27:45 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 15:45:36 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_memcmp(int *score)
{
	int i = 0;
	char s1[10] = "hello";
	char s2[10] = "hey";
    char s3[10] = "hello";
    char s4[10] = "hellz";
    char s5[10] = "";
    char s6[10] = "world";
    char s7[10] = "he";
    char s8[10] = "hello\0";
    char s9[10] = "hello";

	memcmp(s1 ,s2, 2) == ft_memcmp(s1, s2, 2) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	memcmp(s1 ,s2, 4) == ft_memcmp(s1, s2, 4) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
    memcmp(s1, s3, 5) == ft_memcmp(s1, s3, 5) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    memcmp(s1, s4, 5) == ft_memcmp(s1, s4, 5) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    memcmp(s1, s5, 0) == ft_memcmp(s1, s5, 0) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    memcmp(s5, s6, 0) == ft_memcmp(s5, s6, 0) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    memcmp(s1, s7, 2) == ft_memcmp(s1, s7, 2) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    memcmp(s1, s7, 3) == ft_memcmp(s1, s7, 3) ? correct(score, ++i) : wrong(++i); 
    memcmp(s1, s9, 5) == ft_memcmp(s1, s9, 5) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    memcmp(s8, s1, 5) == ft_memcmp(s8, s1, 5) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
}
