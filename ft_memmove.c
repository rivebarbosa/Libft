/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:25:46 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/14 21:28:20 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

// void	*ft_memmove(void *destination, const void *source, size_t n)
// {
// 	unsigned char	*dest;
// 	unsigned char	*src;
// 	size_t			i;

// 	dest = (unsigned char *)destination;
// 	src = (unsigned char *)source;
// 	if (dest == src)
// 		return (destination);
// 	if (dest > src)
// 	{
// 		i = 0;
// 		while (++i <= n)
// 			dest[n - i] = src[n - i];
// 	}
// 	else
// 	{
// 		i = 0;
// 		while (i < n)
// 		{
// 			dest[i] = src[i];
// 			i++;
// 		}
// 	}
// 	return (destination);
// }


void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*dest;
	size_t			i;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dest == source)
	{
		return (dst);
	}
	if (dest > source)
	{
		i = 0;
		while (++i <= n)
			dest[n - i] = source[n - i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (void)
{
	unsigned char dest[20] = "oldstring";
   	unsigned char src[20]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}