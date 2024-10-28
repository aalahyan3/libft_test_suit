/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:44:51 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/26 23:09:19 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void test_strlcpy(int *score)
{
	int i = 1;

	char str1[10], str2[10];

	ft_strlcpy(str1, "abc", 10);
	strcmp(str1, "abc") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_strlcpy(str2, str1, 0);
	strcmp(str1, str2) != 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_strlcpy(str1, "123", 10) == strlcpy(str1, "123", 10) ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_strlcpy(str1, "", 10) == strlcpy(str1, "", 10) ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	ft_strlcpy(str1, "123wijsjkwhfhsdhfhajkhd", 10) == strlcpy(str1, "123wijsjkwhfhsdhfhajkhd", 10) ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	strcmp(str1, "123wijsjk") == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
}