/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:57:58 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/25 18:39:30 by aalahyan         ###   ########.fr       */
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

void test_strlen(int *score)
{
	char *arr[] = {"Aeifjnewfn", "Zefk;lwk eklfm", "a134", "", "hff", "Hn\n\n", "\t", " ", "1", "*"};
	for (unsigned int i = 0; i < (sizeof(arr)/ sizeof(arr[0])); i++)
	{
		expect(i + 1, ft_strlen(arr[i]), strlen(arr[i]), score);
		usleep(100 * 1000);
	}
}
