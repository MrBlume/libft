/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:36:42 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:22:55 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

// int main(void)
// {
//     char    *str;
//     t_list  *elem;

//     str = ft_strdup("Hello, 42 Le Havre!");
//     if (!str)
//         return (1);

//     elem = ft_lstnew(str);

//     if (elem == NULL)
//     {
//         printf(" [ERREUR] L'allocation a échoué 
// 			(ft_lstnew a retourné NULL).\n");
//         free(str);
//         return (1);
//     }

//     printf("content : \"%s\" (adresse : %p)\n", 
// 		(char *)elem->content, elem->content);
//     printf("next : %p (attendu : NULL)\n", (void *)elem->next);

//     free(elem->content);
//     free(elem);

//     return (0);
// }
