/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:51:09 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/26 22:38:02 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_memcpy(int *score)
{
	int i = 0;
	char str1[10];
	char str2[10];


	ft_memmove(str1, "abc", 4);
	memcmp(str1, "abc", 4) ==  0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_memmove(str2, str1, 1);
	memcmp(str1, str2, 1) ==  0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_memmove(str2, "ioi" ,0);
	memcmp(str1, str2, 1) ==  0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	int a, b;

	a = 8;
	ft_memmove(&b, &a, 4);
	a == b ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	b = 5;
	ft_memmove(&b, &a, 0);
	a != b ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);

	char	c;
	ft_memmove(&c, &str1[1], 1);
	c == str1[1] ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);

	int	tab[3];
	int	src[3] = {8, 3, 4};
	ft_memmove(tab, src, 3 * sizeof(int));
	memcmp(tab, str1, 3 * sizeof(int)) ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
}