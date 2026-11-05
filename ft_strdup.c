/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:03:54 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:17:25 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	dest = malloc((ft_strlen(s) + 1) * sizeof(*dest));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <string.h>

// int main(void)
// {
//     const char *src = "Hello, 42 Le Havre!";

//     char *res_orig = strdup(src);
//     char *res_ft = ft_strdup(src);

//     printf("strdup    : \"%s\" (adresse : %p)\n", 
// 		res_orig, (void *)res_orig);
//     printf("ft_strdup : \"%s\" (adresse : %p)\n", res_ft, (void *)res_ft);

//     free(res_orig);
//     free(res_ft);

//     return (0);
// }
