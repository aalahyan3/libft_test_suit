/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:13:33 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 13:13:43 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void test_strlcat(int *score)
{
	int		i = 0;
	char	dest1[20] = "";
	char	dest2[20] = "";

	strlcat(dest1, "abc", 20) == strlcat(dest2, "abc", 20) ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	strcmp(dest1, dest2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	strlcat(dest1, "abcdefghijklmnopqrstuvwxyz", 20) == ft_strlcat(dest2, "abcdefghijklmnopqrstuvwxyz", 20) ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	// printf("%zu\n", ft_strlen(dest2));
	strcmp(dest1, dest2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	// printf("%lu\n", ft_strlcat(dest2, "abc", 20));
	// printf("%lu\n", ft_strlcat(dest1, "abc", 0));
	strlcat(dest1, "abc", 0) == ft_strlcat(dest2, "abc", 0) ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	strcmp(dest1, dest2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	strlcat(dest1, "abc", 10) == ft_strlcat(dest2, "abc", 10) ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
	strcmp(dest1, dest2) == 0 ? correct(score, ++i) : wrong(++i);
	usleep(100 * 1000);
}

// int main()
// {
// 	int a = 0;
// 	test_strlcat(&a);
// }
