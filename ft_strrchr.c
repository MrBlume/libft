/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:17:51 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 09:35:21 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != (char)c && i > 0)
		i--;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// #include <string.h>

// int main(void)
// {
//     const char *s = "Hello, 42 Le Havre! 42";
//     int c = '4';

//     const char *res_orig = strrchr(s, c);
//     const char *res_ft = ft_strrchr(s, c);

//     printf("strrchr = %p", (void *)res_orig);
//     if (res_orig) printf(" (trouvé, reste : \"%s\")", res_orig);
//     printf("\n");

//     printf("ft_strrchr = %p", (void *)res_ft);
//     if (res_ft) printf(" (trouvé, reste : \"%s\")", res_ft);
//     printf("\n");

//     return (0);
// }
