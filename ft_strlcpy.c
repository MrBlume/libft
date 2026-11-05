/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:53:45 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:13:23 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		len;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

// #include <string.h>

// int main(void)
// {
//     char src[] = "Hello, 42 Le Havre!";
//     char dest1[25] = "Ancienne valeur";
//     size_t size = 12;

//     size_t ret_ft = ft_strlcpy(dest1, src, size);

//     printf("ft_strlcpy : \"%s\" (retour : %zu)\n", dest1, ret_ft);

//     return (0);
// }
