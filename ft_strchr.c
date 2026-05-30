/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:34:16 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/20 10:57:55 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
//#include <stdio.h>
//int	main(void)
//{
//	const char *s = "Hello";
//	char *res = ft_strchr(s, 'e');
//
//	printf("%s\n", res);
//	return (0);
//}
