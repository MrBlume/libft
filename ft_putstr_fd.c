/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:36:01 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 14:40:16 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(fd, &c[i], 1);
		i++;
	}
}

// int main(void)
// {
//     ft_putstr_fd("Hello, 42 Le Havre!", 1);

//     return (0);
// }
