/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:44:28 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/27 10:59:11 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(f)(lst->content);
		lst = lst->next;
	}
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
//}	
//int	main(void)
//{
//	t_list *head = NULL;
//	ft_lstadd_back(&head, ft_lstnew("Hello"));
//	ft_lstadd_back(&head, ft_lstnew("World"));
//	ft_lstiter(head, &ft_putstr);
//	return (0);
//}
