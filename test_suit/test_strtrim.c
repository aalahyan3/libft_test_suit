/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:58:20 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/28 11:20:18 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_strtrim(int *score)
{
	int i = 0;

	char	*s;
	s = ft_strtrim("uwhjdquwhdajsdqwhdiquwdhjkh", "abcdef");
	strcmp(s, "uwhjdquwhdajsdqwhdiquwdhjkh") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s);
	//printf("%s\n", ft_strtrim("     abcdef my name is ayoub    \t\n\t", " \t\n "));
	s = ft_strtrim("     abcdef my name is ayoub     ", " ");
	strcmp(s, "abcdef my name is ayoub") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s);
	s = ft_strtrim(" ", " ");
	strcmp(s, "") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s);
	s = ft_strtrim("abcd", "abcd");
	strcmp(s, "") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s);
	s = ft_strtrim("", "");
	strcmp(s, "") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s);
	s = ft_strtrim(NULL, NULL);
	s == NULL? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s);
}
