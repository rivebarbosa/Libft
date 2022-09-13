/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:28:01 by roberto           #+#    #+#             */
/*   Updated: 2022/09/13 20:27:54 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	int		fill_byte;
	size_t	*pos;
	size_t	tot_size;	

	tot_size = nmenb * size;
	fill_byte = 0;
	pos = malloc(tot_size);
	if (!pos || (tot_size > __INT_MAX__))
		return (NULL);
	ft_menset(pos, fill_byte, tot_size);
	return ((void *)pos);
}
