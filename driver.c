/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouthai <mbouthai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:01:47 by mbouthai          #+#    #+#             */
/*   Updated: 2022/01/26 14:25:41 by mbouthai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	testing(char **tr)
{
	int	index;

	index = 0;
	while (index < 5)
		pstr(tr[index++]);
}

int	main(void)
{
	char	*test;
	char	**result;

	test = "Hello hello how are you?";
	result = ft_split(test, ' ');
	testing(result);
	return (0);
}
