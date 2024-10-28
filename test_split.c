/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:24:21 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/28 14:02:09 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_split(int *score)
{
	int	i = 0;
	int yes = 1;

	char	**arr;
	char	*sol[] = {"hello", "ayoub", "thanks", "for", "the", "response", NULL};
	arr = ft_split("hello Ayoub thanks for the response", ' ');
	for (int j = 0;j < 7; j++)
	{
		if (strcmp(arr[i], sol[i]) != 0)
		{
			wrong(++i);
			yes = 0;
			break ;
		}
	}
	if (yes == 1)
		correct(score, ++i);
	usleep(100 * MILISECONDE);
	free(arr);
	char	*sol2[] = {"hello Ayoub", NULL};
	arr = ft_split("hello Ayoub", '-');
	for (int j = 0;j < 2; j++)
	{
		if (strcmp(arr[i], sol2[i]) != 0)
		{
			wrong(++i);
			yes = 0;
			break ;
		}
	}
	if (yes == 1)
		correct(score, ++i);
	usleep(100 * MILISECONDE);
	free(arr);

}
