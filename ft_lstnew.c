/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:04:51 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/01 16:55:29 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	lstnew->content = content;
	lstnew->next = 0;
	return (lstnew);
}
//#include <stdio.h>
//int main(void)
//{
//	char *str = "Hello";
//	t_list *new = ft_lstnew(str);
//	printf("%s\n", (char *)new->content);
//	return (0);
//}
