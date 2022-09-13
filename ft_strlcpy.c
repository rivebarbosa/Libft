/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:22:55 by rrivelin          #+#    #+#             */
/*   Updated: 2022/09/12 22:06:12 by rrivelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";
#include <stdlib.h>

// size_t    ft_strlen(char *str)
// {
//     int    i;

//     i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return (i);
// }


size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int    i;
    int j;

    j = 0;
    i = ft_strlen(src);
    while (j < i)
    {
        *dst++ = *src++;
        j++;
    }
    while (dst[i] != '\0')
    {
        dst[i++] = '\0';
    }
    return (src);

}

#include <stdio.h>
#include <string.h>

int main ()
{
    char    source[6] = "teste";
    char    destination[6] = "";
    int    size;

    size = 5;
	ft_strlcpy(destination, source, size);

    printf("%s", destination);
}