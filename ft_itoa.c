/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:04:52 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/13 20:15:07 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert_itoa(char *str,
								size_t size,
								unsigned int num,
								unsigned int is_negative)
{
	str[size] = '\0';
	while (size--)
	{
		str[size] = (num % 10) + 48;
		num /= 10;
	}
	if (is_negative)
	{
		str[0] = '-';
	}
	return (str);
}

size_t	ft_numlen(int num)
{
	size_t	len;

	len = 1;
	if (num < 0)
	{
		len++;
		num /= 10;
	}
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	n_digits;
	long	is_negative;
	char	*str;

	n_digits = ft_numlen(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	str = malloc(sizeof(char) * (n_digits + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	return (convert_itoa(str, n_digits, (unsigned int)n, is_negative));
}
