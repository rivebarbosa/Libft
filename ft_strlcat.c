/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:22:55 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/16 20:48:52 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		size_count;
	size_t	j;

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
// size_t	ft_strlcpy(char *dst, const char *src, size_t maxlen)
// {
// 	size_t	src_size;

// 	src_size = ft_strlen(src);
// 	if (src_size < maxlen)
// 		ft_memcpy(dst, src, src_size + 1);
// 	else if (maxlen != 0)
// 	{
// 		ft_memcpy(dst, src, maxlen);
// 		dst[maxlen - 1] = 0;
// 	}
// 	return (src_size);
// }