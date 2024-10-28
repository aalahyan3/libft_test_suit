/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:37:06 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 15:01:02 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_strncmp(int *score)
{
	int	i = 0;
	ft_strncmp("abc", "abc", 3) == strncmp("abc", "abc", 3) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	ft_strncmp("abc", "abc", 0) == strncmp("abc", "abc", 0) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	ft_strncmp("abc", "abcd", 3) == strncmp("abc", "abcd", 3) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	ft_strncmp("abcde", "abced", 4) == strncmp("abcde", "abced", 4) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	ft_strncmp("", "abc", 4) < 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	ft_strncmp("aaa", "aaaaaa", 4) < 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
    ft_strncmp("abcdef", "abcde", 6) > 0 ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    ft_strncmp("abcde", "abcdf", 5) < 0 ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    ft_strncmp("abc\0def", "abc\0xyz", 7) == strncmp("abc\0def", "abc\0xyz", 7) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
    ft_strncmp("abc", "abd", 3) == strncmp("abc", "abd", 3) ? correct(score, ++i) : wrong(++i);
    usleep(100 * MILISECONDE);
}
