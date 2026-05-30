/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:28:25 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/22 16:29:12 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*dup;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	dup = malloc(len * sizeof(char) + 1);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
//#include <stdio.h>
//int	main(void)
//{
//	
//	char *str = "Hello, World!";
//	printf("%s\n", str);
//	printf("%s\n", ft_strdup(str));
//	return (0);
//}
