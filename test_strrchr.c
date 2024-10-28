/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:34:02 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/28 14:59:35 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_strrchr(int *score)
{
	int		i = 0;
	char	str1[] = "hello world";
	
	strcmp(strrchr(str1, 'l'), ft_strrchr(str1, 'l')) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	strcmp(strrchr("hello", 'l'), ft_strrchr("hello", 'l')) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	strrchr(str1, '=') == ft_strrchr(str1, '=') ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	strrchr(str1, '\0') == ft_strrchr(str1, '\0') ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	strrchr(str1, 77) == ft_strrchr(str1, 77) ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	strcmp(strrchr("hello", 0x6f), ft_strrchr("hello", 0x6f)) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	strcmp(strrchr(str1, 'h'), ft_strrchr(str1, 'h')) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	strcmp(strrchr(str1, 'd'), ft_strrchr(str1, 'd')) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
	strcmp(strrchr(str1, 512), ft_strrchr(str1, 512)) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * MILISECONDE);
}
