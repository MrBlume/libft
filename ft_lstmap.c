/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:40:23 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:21:37 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!(new))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

// #include <string.h>

// static void    del_content(void *content)
// {
//     free(content);
// }

// static void    *map_upper(void *content)
// {
//     char    *str;
//     char    *new_str;
//     int     i;

//     str = (char *)content;
//     new_str = strdup(str);
//     if (!new_str)
//         return (NULL);

//     i = 0;
//     while (new_str[i])
//     {
//         if (new_str[i] >= 'a' && new_str[i] <= 'z')
//             new_str[i] -= 32;
//         i++;
//     }
//     return ((void *)new_str);
// }

// int main(void)
// {
//     t_list *head = NULL;
//     t_list *new_list = NULL;

//     ft_lstadd_back(&head, ft_lstnew(strdup("alpha")));
//     ft_lstadd_back(&head, ft_lstnew(strdup("beta")));
//     ft_lstadd_back(&head, ft_lstnew(strdup("gamma")));

//     new_list = ft_lstmap(head, map_upper, del_content);

//     t_list *curr = new_list;
//     int success = 1;
//     char *expected[] = {"ALPHA", "BETA", "GAMMA"};
//     int i = 0;

//     printf("Résultat de ft_lstmap :\n");
//     while (curr)
//     {
//         printf("  Maillon %d : \"%s\"\n", i + 1, (char *)curr->content);
//         if (strcmp((char *)curr->content, expected[i]) != 0)
//             success = 0;
//         curr = curr->next;
//         i++;
//     }

//     if (success && i == 3)
//     {
//         printf(" [OK] ft_lstmap a correctement créé et 
// 			transformé la nouvelle liste !\n");
//     }
//     else
//     {
//         printf(" [ERREUR] Le contenu de la nouvelle liste est incorrect.\n");
//     }

//     t_list *err_test = ft_lstmap(NULL, map_upper, del_content);
//     if (err_test == NULL)
//     {
//         printf(" [OK] Gestion correcte d'une liste source NULL.\n");
//     }

//     ft_lstclear(&head, del_content);
//     ft_lstclear(&new_list, del_content);

//     return (0);
// }
