/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:38:30 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/23 15:19:36 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void    del_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *head = NULL;

//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("Premier maillon")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("Deuxième maillon")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("Troisième maillon")));

//     // 2. Test de ft_lstclear
//     ft_lstclear(&head, del_content);
//     printf("head = %p\n", (void *)head);

//     ft_lstclear(NULL, del_content);
//     ft_lstclear(&head, NULL);
//     ft_lstclear(&head, del_content);

//     return (0);
// }
