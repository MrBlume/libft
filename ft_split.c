/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:33:59 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 12:33:15 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**free_tab(char **tab, size_t i)
{
	while (i > 0)
		free(tab[--i]);
	free(tab);
	return (NULL);
}

static char	**malloc_tab(const char *s, char c)
{
	char	**lst;

	if (!s)
		return (NULL);
	lst = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	size_t	i;

	lst = malloc_tab(s, c);
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i] = ft_substr(s, 0, word_len);
			if (!lst[i++])
				return (free_tab(lst, i - 1));
			s += word_len;
		}
	}
	return (lst[i] = NULL, lst);
}

// int main(void)
// {
// 	char const *s = "Bonjour,je,suis,a,l,ecole,42";
// 	char c = ',';
// 	int i = 0;

// 	char **result = ft_split(s, c);

// 	while (result[i] != NULL)
// 	{
// 		printf("  [%d] -> \"%s\"\n", i, result[i]);
// 		i++;
// 	}

// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);

// 	return (0);
// }
