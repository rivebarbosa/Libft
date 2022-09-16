/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:56:03 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/16 19:36:38 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		int_to_return;
	char	is_negative;

	is_negative = 1;
	int_to_return = 0;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_negative = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
		int_to_return = (int_to_return * 10) + (*nptr++ - '0');
	return (int_to_return * is_negative);
}
