/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabde-ar <fabde-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:42:36 by fabde-ar          #+#    #+#             */
/*   Updated: 2026/04/21 17:45:44 by fabde-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	buffer;
	size_t			i;

	p = (unsigned char *)s;
	buffer = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = buffer;
		i++;
	}
	return (s);
}
/*
int main(void)
{
	int		nbrs[10];
	int		i;
	char	str[20];

	ft_memset(nbrs, 0, sizeof(nbrs));
	ft_memset(str, '9', sizeof(str));
	str[20] = '\0';
	i = 0;
	while (i < 10)
	{
		printf("%d", nbrs[i]);
		if (i < 9)
			printf(", ");
		i++;
	}
	printf("\n");
	i = 0;
	while (str[i])
	{
		printf("%c", str[i]);
		if (i < 19)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
*/
