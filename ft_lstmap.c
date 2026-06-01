/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:09:16 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/01 17:00:01 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*ft_clear(t_list **lst, void (*del)(void *), void *content)
{
	if (content)
		del(content);
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new;
	t_list	*tail;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_clear(&new_head, del, content));
		new = ft_lstnew(content);
		if (!new)
			return (ft_clear(&new_head, del, content));
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
//void	ft_putstr(void *s)
//{
//	int	i;
//	char *c = s;	
//	i = 0;
//	while (c[i] != '\0')
//	{
//		write(1, &c[i], 1);
//		i++;
//	}
//	write(1, "\n", 1);
//}	
//void *ft_strtoupper(void *v)
//{
//	char *s;
//	char *c;
//	size_t len;
//	size_t i;
//	c = (char *)v;
//	len = ft_strlen(c);
//		
//	s = malloc(sizeof(char *) * len);
//	i = 0;
//	while (*c != '\0')
//	{
//		if (*c >= 'a' && *c <= 'z')
//		{
//			s[i] = *c - ' ';
//		}
//		c++;
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
//	ft_lstiter(head, &ft_putstr);
//	ft_lstiter(new_list, &ft_putstr);
//	return (0);
//}
