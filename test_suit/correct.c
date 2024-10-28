/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:05:57 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/26 22:05:59 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	correct(int *score, int i)
{
			printf(YELLOW"\t\t[TEST %d]\t"GREEN"SUCCESS\n", i);
			*score += 1;;
}