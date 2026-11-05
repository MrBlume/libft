/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:20:10 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 12:14:14 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

// #include <string.h>

// int main(void)
// {
//     char buffer1[20] = "Hello, 42 Le Havre!";
//     char buffer2[20] = "Hello, 42 Le Havre!";
//     int c = '.';
//     size_t n = 10;

//     void *res_orig = memset(buffer1, c, n);
//     void *res_ft = ft_memset(buffer2, c, n);

//     printf("Après memset() : \"%s\" (retour : %p)\n", buffer1, res_orig);
//     printf("Après ft_memset() : \"%s\" (retour : %p)\n", buffer2, res_ft);

//     return (0);
// }
