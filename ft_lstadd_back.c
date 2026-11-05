/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:37:52 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:21:26 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}

// int main(void)
// {
//     t_list *head = NULL;

//     t_list *elem1 = ft_lstnew("Premier");
//     t_list *elem2 = ft_lstnew("Deuxième");
//     t_list *elem3 = ft_lstnew("Troisième");

//     ft_lstadd_back(&head, elem1);
//     ft_lstadd_back(&head, elem2);
//     ft_lstadd_back(&head, elem3);

//     t_list *current = head;
//     int i = 1;
//     while (current != NULL)
//     {
//         printf("Maillon %d : \"%s\"\n", i, (char *)current->content);
//         current = current->next;
//         i++;
//     }

//     t_list *tmp;
//     while (head != NULL)
//     {
//         tmp = head;
//         head = head->next;
//         free(tmp);
//     }

//     return (0);
// }
