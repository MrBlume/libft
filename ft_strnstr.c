/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:13:34 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 12:18:01 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;

	n_len = ft_strlen(little);
	if (n_len == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		c = 0;
		while (big[i + c] != '\0' && little[c] != '\0'
			&& big[i + c] == little[c] && (i + c) < len)
			c++;
		if (c == n_len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *big = "Hello, 42 Le Havre!";
//     const char *little = "42";
//     size_t len = 15;

//     char *res_ft = ft_strnstr(big, little, len);

//     if (res_ft)
//     {
//         printf("ft_strnstr = Trouvé ! Reste de la chaîne : 
// 			\"%s\" (adresse : %p)\n", res_ft, (void *)res_ft);
//     }
//     else
//     {
//         printf("ft_strnstr = Non trouvé (NULL)\n");
//     }

//     char *res_empty = ft_strnstr(big, "", len);
//     if (res_empty == big)
//     {
//         printf(" [OK] Cas de la chaîne 'little' vide géré correctement !\n");
//     }

//     return (0);
// }
