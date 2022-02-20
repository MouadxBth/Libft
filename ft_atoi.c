/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouthai <mbouthai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:52:25 by mbouthai          #+#    #+#             */
/*   Updated: 2022/02/20 15:00:37 by mbouthai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_should_skip(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v' || c == '\f');
}

int	ft_atoi(const char *str)
{
	long	result;
	int	sign;

	if (!str)
		return (0);
	result = 0;
	sign = 1;
	while (ft_should_skip(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}
