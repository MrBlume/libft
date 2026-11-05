/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:53:17 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:15:03 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_src = 0;
	while (src[len_src])
		len_src++;
	len_dst = 0;
	while (len_dst < size && dst[len_dst])
		len_dst++;
	if (size <= len_dst)
		return (size + len_src);
	i = 0;
	j = len_dst;
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_dst + len_src);
}

// #include <string.h>

// int main(void)
// {
//     char dest1[30] = "Hello";
//     char dest2[30] = "Hello";
//     const char *src = ", 42 Le Havre!";
//     size_t size = 15;

//     size_t ret_orig = strlcat(dest1, src, size);
//     size_t ret_ft   = ft_strlcat(dest2, src, size);

//     printf("strlcat   : \"%s\" (retour : %zu)\n", dest1, ret_orig);
//     printf("ft_strlcat: \"%s\" (retour : %zu)\n", dest2, ret_ft);

//     return (0);
// }
