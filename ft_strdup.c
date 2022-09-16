/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:15:07 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/16 20:15:19 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	s_dup_size;

	s_dup_size = ft_strlen(s) + 1;
	s_dup = ft_calloc(s_dup_size, sizeof(*s_dup));
	if (s_dup)
		ft_memcpy(s_dup, s, s_dup_size);
	return (s_dup);
}
