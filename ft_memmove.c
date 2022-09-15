/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:25:46 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/14 20:57:27 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	*storage;
	int				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		storage[i] = d[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		s[i] = d[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		s[i] = storage[i];
		i++;
	}
}



int main (void)
{
	unsigned char dest[20] = "oldstring";
   	unsigned char src[20]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}