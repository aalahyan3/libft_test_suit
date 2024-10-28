/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:57:58 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/25 18:41:03 by aalahyan         ###   ########.fr       */
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

void test_isascii(int *score)
{
	int tab[] = {0, 100, 32, 77, 876, 224, 100, 127, 126, 999};
	for (unsigned int i = 0; i < (sizeof(tab)/ sizeof(tab[0])); i++)
	{
		expect(i + 1, ft_isascii(tab[i]), isascii(tab[i]), score);
		usleep(100 * 1000);
	}
}