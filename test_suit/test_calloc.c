/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:23:34 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 17:55:03 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_calloc(int *score)
{
	int i = 0;
	int	*ptr1, *ptr2;
	char *str1, *str2;

	ptr1 = ft_calloc(4, sizeof(int));
	ptr2 = calloc(4, sizeof(int));

	if (ptr1 && ptr2 && memcmp(ptr2, ptr1, sizeof(int) * 4) == 0)
	{
		correct(score ,++i);
		usleep(100 * MILISECONDE);
	}
	else
	{
		wrong(++i);
		usleep(100 * MILISECONDE);
	}

	str1 = ft_calloc(4, sizeof(char));
	str2 = calloc(4, sizeof(char));
	if (str1 && str2 && memcmp(str1, str2, sizeof(char) * 4) == 0)
	{
		correct(score ,++i);
		usleep(100 * MILISECONDE);
	}
	else
	{
		wrong(++i);
		usleep(100 * MILISECONDE);
	}
	free(ptr1);
	free(ptr2);
	free(str1);
	free(str2);

	ptr1 = ft_calloc(10, 4 * sizeof(int));
	int yes = 1;
	for (int j = 0; j < 10 ;j++)
	{
		if (ptr1[j] != 0)
		{
			yes = 0;
			wrong(++i);
			usleep(100 * MILISECONDE);
			break;
		}
	}
	if (yes == 1)
	{
		correct(score, ++i);
		usleep(100* MILISECONDE);
	}
	ptr2 = ft_calloc(0, 0);

	ptr2 != NULL ? correct(score, ++i) : wrong(++i);
	free(ptr1);
	free(ptr2);
}
