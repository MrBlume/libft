/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:32:27 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:17:41 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	remaining_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	remaining_len = ft_strlen(s + start);
	if (len > remaining_len)
		len = remaining_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len +1);
	return (substr);
}

// int main(void)
// {
//     char const *s = "Hello, 42 Le Havre!";
//     unsigned int start = 7;
//     size_t len = 2;

//     char *result = ft_substr(s, start, len);

//     printf("ft_substr : \"%s\" (adresse : %p)\n", 
// 		result ? result : "NULL", (void *)result);

//     if (result)
//         free(result);

//     return (0);
// }
