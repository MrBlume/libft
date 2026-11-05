/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:35:08 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:20:33 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// static void modify_char(unsigned int index, char *c)
// {
//     if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }

// int main(void)
// {
//     char str[] = "hello 42 le havre";

//     printf("Avant ft_striteri : \"%s\"\n", str);
//     ft_striteri(str, modify_char);
//     printf("Après ft_striteri : \"%s\"\n", str);

//     return (0);
// }
