/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:51:23 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 12:14:05 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
		n--;
	}
	return (0);
}

// #include <string.h>

// int main(void)
// {
//     char s1[] = "Hello, 42!";
//     char s2[] = "Hello, 43!";
//     size_t n = 10;

//     int res_orig = memcmp(s1, s2, n);
//     int res_ft = ft_memcmp(s1, s2, n);

//     printf("memcmp() = %d\n", res_orig);
//     printf("ft_memcmp() = %d\n", res_ft);

//     return (0);
// }
