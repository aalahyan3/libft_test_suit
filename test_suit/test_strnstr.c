/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:48:04 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 17:01:38 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_strnstr(int *score)
{
	int i = 0;
	char haystack[100] = "locates the first occurrence of the needle in the haystack";

	strcmp(ft_strnstr(haystack, "the", 100), strnstr(haystack, "the", 100)) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	strcmp(ft_strnstr(haystack, "haystack", 100), strnstr(haystack, "haystack", 100)) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	strcmp(ft_strnstr(haystack, "locates", 100), strnstr(haystack, "locates", 100)) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	ft_strnstr(haystack, "firsd", 100) == strnstr(haystack, "firsd", 100) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	ft_strnstr(haystack, "locates the first occurrence of the needle in the haystack given", 100) == strnstr(haystack, "locates the first occurrence of the needle in the haystack given", 100) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	ft_strnstr(haystack, "notfound", 100) == strnstr(haystack, "notfound", 100) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	ft_strnstr(haystack, "occurrence", 25) == strnstr(haystack, "occurrence", 25) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	strcmp(ft_strnstr(haystack, "", 100), strnstr(haystack, "", 100)) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	ft_strnstr("", "test", 100) == strnstr("", "test", 100) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	strcmp(ft_strnstr(haystack, "o", 100), strnstr(haystack, "o", 100)) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);

	ft_strnstr(haystack, "cat", 4) == strnstr(haystack, "cat", 4)? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
}
