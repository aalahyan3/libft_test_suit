/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:57:58 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/25 20:09:35 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	expect_s(int i, int *score, char *answer, char *sol)
{
	if (strcmp(answer, sol) == 0)
		correct(score, i);
	else
		wrong(i);
}

static void expect_t(int i, int *score, int *answer, int *sol, int size)
{
	for (int j = 0; j < size; j++)
	{
		if (answer[j] != sol[j])
		{
			wrong(i);
			return;
		}
	}
	correct(score, i);
}

void	test_memset(int *score)
{
	int	i = 0;
	char s1[10];
	expect_s(++i, score, ft_memset(s1, '0', sizeof(char) * 10), memset(s1, '0', sizeof(char) * 10));
	ft_memset(s1, '1', sizeof(char) * 9);
	s1[9] = 0;
	expect_s(++i, score, s1, "111111111");
	usleep(100 * 1000);
	ft_memset(s1, '3', 0);
	expect_s(++i, score, s1, "111111111");
	usleep(100 * 1000);
	ft_memset(s1, '3', 2);
	expect_s(++i, score, s1, "331111111");
	usleep(100 * 1000);
	ft_memset(s1 + 3, 'e', 1);
	expect_s(++i, score, s1, "331e11111");
	usleep(100 * 1000);

	// int arrays
	int tab1[10];
	expect_t(++i, score, ft_memset(tab1, '1', sizeof(tab1)), memset(tab1, '1', sizeof(tab1)), 10);
	ft_memset(tab1, 0, 8);
	if (tab1[0] == 0 && tab1[1] == 0)
		correct(score, ++i);
	else
		wrong(++i);
	usleep(100 * 1000);
	ft_memset(tab1 + 3, 0, 0);
	tab1[3] == 0 ? wrong(++i) : correct(score, ++i);
	usleep(100 * 1000);
	char c = 'a';
	ft_memset(&c, 'C', 1) == memset(&c, 'C', 1) ? correct(score, ++i): wrong(++i);
	usleep(100 * 1000);
	ft_memset(&c, 'A', 1);
	c == 'A' ? correct(score, ++i) :wrong(++i);
	usleep(100 * 1000);
}