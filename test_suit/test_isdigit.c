/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:56:19 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/25 18:39:57 by aalahyan         ###   ########.fr       */
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

void test_isdigit(int *score)
{
	char *arr[] = {"0", "9", "6", "-", " ", "#", "\t", "9", "Q", "x"};
	for (unsigned int i = 0; i < (sizeof(arr)/ sizeof(arr[0])); i++)
	{
		expect(i + 1, ft_isdigit(arr[i][0]), isdigit(arr[i][0]), score);
		usleep(100 * 1000);
	}
}