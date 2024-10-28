/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:07:56 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 15:23:14 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_memchr(int *score)
{
	int i = 0;
	char s1[10] = "hello!";
	int	tab[5] = {1, 2, 3, 4, 5};

	memcmp(ft_memchr(s1, 'l', 10), memchr(s1, 'l', 10), 2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	memcmp(ft_memchr(s1, '\0', 10), memchr(s1, '\0', 10), 2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	ft_memchr(s1, 'l', 0) == memchr(s1, 'l', 0)? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	ft_memchr(s1, 'x', 10) == memchr(s1, 'x', 10)? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	memcmp(ft_memchr(tab, 2, 3 * sizeof(int)), memchr(tab, 2, 3 * sizeof(int)), 2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	ft_memchr(tab, 5, 3 * sizeof(int)) == memchr(tab, 5, 3 * sizeof(int))? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

}
