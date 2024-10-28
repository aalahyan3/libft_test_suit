/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:57:58 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/25 18:49:36 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


static void expect(int i, int answer, int sol, int *score)
{
	if (answer == sol)
		correct(score, i);

	else
		wrong(i);
}

void test_isalpha(int *score)
{
	char *arr[] = {"A", "Z", "a", "z", "h", "H", "\n", " ", "1", "*"};
	for (unsigned int i = 0; i < (sizeof(arr)/ sizeof(arr[0])); i++)
	{
		expect(i + 1, ft_isalpha(arr[i][0]), isalpha(arr[i][0]), score);
		usleep(100 * 1000);
	}
}
