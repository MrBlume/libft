/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:33:21 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:18:01 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = malloc((len1 + len2 + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1, len1);
	ft_memcpy(newstr + len1, s2, len2 + 1);
	return (newstr);
}

// int main(void)
// {
//     char const *s1 = "Hello, ";
//     char const *s2 = "42 Le Havre!";

//     char *result = ft_strjoin(s1, s2);

//     printf("s1        : \"%s\"\n", s1);
//     printf("s2        : \"%s\"\n", s2);
//     printf("ft_strjoin: \"%s\" (adresse : %p)\n", 
// 		result ? result : "NULL", (void *)result);

//     if (result)
//         free(result);

//     return (0);
// }
