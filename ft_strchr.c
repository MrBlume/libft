/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:17:51 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 09:33:59 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// #include <string.h>

// int main(void)
// {
//     const char *s = "Hello, 42 Le Havre!";
//     int c = '4';

//     const char *res_orig = strchr(s, c);
//     const char *res_ft = ft_strchr(s, c);

//     printf("strchr = %p", (void *)res_orig);
//     if (res_orig) printf(" (trouvé, reste : \"%s\")", res_orig);
//     printf("\n");

//     printf("ft_strchr = %p", (void *)res_ft);
//     if (res_ft) printf(" (trouvé, reste : \"%s\")", res_ft);
//     printf("\n");

//     return (0);
// }
