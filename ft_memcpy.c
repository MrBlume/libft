/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:51:35 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 12:14:09 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		p_dest[i] = p_src[i];
		i++;
		n--;
	}
	return (p_dest);
}

// #include <string.h>

// int main(void)
// {
//     char src[] = "Hello, 42 Le Havre!";
//     char dest1[30];
//     char dest2[30];
//     size_t n = 14;

//     void *res_orig = memcpy(dest1, src, n);
//     dest1[n] = '\0';

//     void *res_ft = ft_memcpy(dest2, src, n);
//     dest2[n] = '\0';

//     printf("memcpy() : \"%s\" (retour : %p)\n", dest1, res_orig);
//     printf("ft_memcpy() : \"%s\" (retour : %p)\n", dest2, res_ft);

//     return (0);
// }
