/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabde-ar <fabde-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:57:28 by fabde-ar          #+#    #+#             */
/*   Updated: 2026/04/21 18:30:18 by fabde-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(int ac, char **av)
{
	int     ret_ft_isprint;

	if (ac == 2)
	{
		ret_ft_isprint = ft_isprint(av[1][0]);
		if ((isprint(av[1][0]) != 0) == ret_ft_isprint)
		{
			printf("Return from Std function: %d\n", (isprint(av[1][0]) != 0));
			printf("Return from my function: %d\n", ft_isprint(av[1][0]));
			printf("The function is running like the original.\n");
		}
		if (ret_ft_isprint != 1)
			printf("The typed character isn't printable.\n");
		else
			printf("The typed character is printable.\n");
	}
	return (0);
}
*/
