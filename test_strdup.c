/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:56:03 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 18:17:43 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_strdup(int *score)
{
	int i = 0;
	char *s1 = ft_strdup("hello");
	char *s2 = strdup("hello");
	strcmp(s1, s2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s1);
	free(s2);

	s1 = ft_strdup("");
	s2 = strdup("");
	strcmp(s1, s2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s1);
	free(s2);
	s1 = ft_strdup("A longer test string to check ft_strdup functionality.");
	s2 = strdup("A longer test string to check ft_strdup functionality.");
	strcmp(s1, s2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s1);
	free(s2);

	s1 = ft_strdup("!@#$%^&*()_+12345");
	s2 = strdup("!@#$%^&*()_+12345");
	strcmp(s1, s2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s1);


	s1 = strdup(s2);
	s1 != NULL ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	free(s1);
	free(s2);

}
