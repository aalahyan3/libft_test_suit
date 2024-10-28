/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:25:40 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/27 13:26:46 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_tolower(int *score)
{		
	int j = 0;
	char str[14] = "!*\thVHI./aAzZ";
	for (int i = 0; i < 14 ; i++)
	{
		ft_tolower(str[i]) == tolower(str[i]) ? correct(score, ++j) : wrong(j);
		usleep(100 * 1000);
	}
}