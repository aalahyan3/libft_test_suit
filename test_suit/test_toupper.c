/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:15:14 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 13:24:12 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_toupper(int *score)
{		
	int j = 0;
	char str[14] = "!\n\thvHI./aAzZ";
	for (int i = 0; i < 14 ; i++)
	{
		ft_toupper(str[i]) == toupper(str[i]) ? correct(score, ++j) : wrong(j);
		usleep(100 * 1000);
	}
}
