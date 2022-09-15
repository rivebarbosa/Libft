/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:22:55 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/14 21:55:17 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	size_count;
	size_t	j;

	j = 0;
	size_count = ft_strlen(src);
	while (src[j] != '\0' && j < (size - 1))
	{
		*dst++ = *src++;
		j++;
	}
	dst[size_count] = '\0';
	return (size_count);
}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     char    source[6] = "teste";
//     char    destination[6] = "";
//     int    size;

//     size = 6;
// 	ft_strlcpy(destination, source, size);

//     printf("%s\n", destination);
// }