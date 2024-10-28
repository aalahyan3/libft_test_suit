/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:11:39 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/26 21:49:05 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_bzero(int *score)
{
	int	i = 0;
	char	arr[10] = "hello";
	int		tab[5] = {1, 2, 3, 4, 5};
	char	c = 'c';
	float	f = 1.22;

	ft_bzero(arr, sizeof(arr));
	strcmp(arr, "\0") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	arr[1] = 'A';
	ft_bzero(arr, 2);
	arr[1] == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	arr[0] = '1';
	ft_bzero(arr, 0);
	arr[0] != 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_bzero(tab, 2 * sizeof(int));
	tab[0] == 0 && tab[1] == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_bzero(tab + 2, 0);
	tab[2] != 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_bzero(tab, sizeof(tab));
	tab[4] == 0 && tab[3] == 0 ? correct(score, ++i) : wrong(++i);
	ft_bzero(&c, 0);
	c != 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_bzero(&c, 1);
	c == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	char *str = malloc(4);
	strcpy(str, "hey");
	ft_bzero(str, 4);
	str[0] == 0 ? correct(score, ++i) : wrong(++i);
	ft_bzero(&f, sizeof(float));
	f == 0 ? correct(score, ++i) : wrong(++i);
	free(str);
}
