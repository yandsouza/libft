/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:09:16 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/26 18:40:56 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_head;
    t_list  *tail;
    t_list  *new;

    if (!lst || !f || !del)
        return (NULL);
    new_head = NULL;
    tail = NULL;
    while (lst)
    {
        new = ft_lstnew(f(lst->content));
        if (!new)
        {
            ft_lstclear(&new_head, del);
            return (NULL);
        }
        if (!new_head)
            new_head = new;
        else
            tail->next = new;
        tail = new;
        lst = lst->next;
    }
    return (new_head);
}
//#include <stdio.h>
//void *ft_strtoupper(void *v)
//{
//	char i;
//	char *s = (char *)v;
//	
//	i = 0;
//	while (s[i] != '\0')
//	{
//		if (s[i] >= 'a' && s[i] <= 'z')
//		{
//			s[i] = s[i] - ' ';
//		}
//		i++;
//	}
//	return (s);
//}
//int	main(void)
//{
//	t_list *head = NULL;
//	ft_lstadd_back(&head, ft_lstnew(ft_strdup("hello")));
//	ft_lstadd_back(&head, ft_lstnew(ft_strdup("world")));
//	t_list *new_list = ft_lstmap(head, &ft_strtoupper, free);
//	return (0);
//}
