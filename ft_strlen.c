/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:09:24 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/18 13:33:00 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
//int	main(void)
//{
//#include <stdio.h>
//	int size;
//
//	char *str = "Hello, World!";
//	size = ft_strlen(str);
//	printf("%d", size);
//}
