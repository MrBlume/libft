/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:52:16 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 09:48:22 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	i = 0;
	if (!p_dest && !p_src)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
			p_dest[n] = p_src[n];
	}
	else
	{
		while (n > 0)
		{
			p_dest[i] = p_src[i];
			i++;
			n--;
		}
	}
	return (dest);
}

// #include <string.h>

// int main(void)
// {
//     char buffer1[] = "1234567890";
//     char buffer2[] = "1234567890";
//     size_t n = 6;

//     void *res_orig = memmove(buffer1 + 2, buffer1, n);
//     void *res_ft   = ft_memmove(buffer2 + 2, buffer2, n);

//     printf("Après memmove() : \"%s\" (retour : %p)\n", buffer1, res_orig);
//     printf("Après ft_memmove() : \"%s\" (retour : %p)\n", buffer2, res_ft);

//     return (0);
// }
