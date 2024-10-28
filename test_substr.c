/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:24:33 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 19:02:40 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"




void	test_substr(int *score)
{
	int i = 0;
	char	*s1;
	s1 = ft_substr("hello world", 0, 5);
	strcmp(s1, "hello") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s1);

	s1 = ft_substr("hello", 3, 2);
	strcmp(s1, "lo") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s1);

	s1 = ft_substr("hello", 10, 5);
	strcmp(s1, "") == 0 ? correct(score, ++i) : wrong(++i);
	free(s1);
	usleep(100 * MILISECONDE);

	s1 = ft_substr("hello", 0, 15);
	strcmp(s1, "hello") == 0 ? correct(score, ++i) : wrong(++i);
	free(s1);
	usleep(100 * MILISECONDE);

	s1 = ft_substr("", 0, 15);
	strcmp(s1, "") == 0 ? correct(score, ++i) : wrong(++i);
	free(s1);
	usleep(100 * MILISECONDE);

	s1 = ft_substr("hello", 0, 0);
	strcmp(s1, "") == 0 ? correct(score, ++i) : wrong(++i);
	free(s1);
	usleep(100 * MILISECONDE);

	s1 = ft_substr("hello", 5, 3);
	strcmp(s1, "") == 0 ? correct(score, ++i) : wrong(++i);
	free(s1);
	usleep(100 * MILISECONDE);

	s1 = ft_substr("hello world", 6, 5);
	strcmp(s1, "world") == 0 ? correct(score, ++i) : wrong(++i);
	free(s1);
	usleep(100 * MILISECONDE);

	s1 = ft_substr("hello", 0, 5);
	strcmp(s1, "hello") == 0 ? correct(score, ++i) : wrong(++i);
	free(s1);
	usleep(100 * MILISECONDE);
}
