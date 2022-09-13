/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:22:55 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/13 19:41:20 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	size_count;
	int	j;

	j = 0;
	size_count = ft_strlen(dst);
	while (src[j] != '\0' && j < (size - 1))
	{
		dst[size_count++] = src[j];
		j++;
	}
	dst[size_count] = '\0';
	return (size_count);
}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     char    source[4] = "123";
//     char    destination[9] = "teste";
//     int    size;

//     size = 6;
// 	ft_strlcpy(destination, source, size);

//     printf("%s\n", destination);
// }