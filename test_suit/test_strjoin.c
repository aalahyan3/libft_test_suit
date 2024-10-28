/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:06:49 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/28 14:03:57 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_strjoin(int *score)
{
	int	i = 0;
	char *j;

	j = ft_strjoin("hello ", "world!");
	strcmp(j, "hello world!") == 0 ? correct(score,++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(j);
	j = ft_strjoin("AB", "\0frf");
	strcmp(j, "AB") == 0 ? correct(score,++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(j);
	j = ft_strjoin("", "hello");
	strcmp(j, "hello") == 0 ? correct(score,++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(j);
	j = ft_strjoin("hello", "");
	strcmp(j, "hello") == 0 ? correct(score,++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(j);
	j = ft_strjoin("", "");
	strcmp(j, "") == 0 ? correct(score,++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(j);
	j = ft_strjoin("this is a long string ", "that needs to be joined.");
	strcmp(j, "this is a long string that needs to be joined.") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(j);
}

