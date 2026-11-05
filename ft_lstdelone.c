/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:38:04 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/26 12:23:49 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del)
	{
		if (lst)
		{
			(*del)(lst->content);
			free(lst);
		}
	}
}

// static void    del_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *elem = ft_lstnew(ft_strdup("Contenu du maillon"));

//     ft_lstdelone(elem, del_content);

//     ft_lstdelone(NULL, del_content);
//     ft_lstdelone(elem, NULL);

//     return (0);
// }
