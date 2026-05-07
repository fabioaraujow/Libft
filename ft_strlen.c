/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabde-ar <fabde-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:42:36 by fabde-ar          #+#    #+#             */
/*   Updated: 2026/04/21 17:45:44 by fabde-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	size_t	size;

	if (ac == 2)
	{
		size = ft_strlen(av[1]);
		if (strlen(av[1]) == size)
		{
			printf("return from std function: %zu\n", strlen(av[1]));
			printf("return from my function: %zu\n", ft_strlen(av[1]));
			printf("the function is running like the original.\n");
		}
		printf("The size of string is %zu\n", size);
	}
	return (0);
}
*/
