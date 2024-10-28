/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:57:58 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/25 18:39:42 by aalahyan         ###   ########.fr       */
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

void test_isprint(int *score)
{
	int tab[] = {0, 9, 13, 32, 75, 127, 126, 177, 48, 19};
	for (unsigned int i = 0; i < (sizeof(tab)/ sizeof(tab[0])); i++)
	{
		expect(i + 1, ft_isprint(tab[i]), isprint(tab[i]), score);
		usleep(100 * 1000);
	}
}