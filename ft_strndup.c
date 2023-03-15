/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouthai <mbouthai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:51:50 by mbouthai          #+#    #+#             */
/*   Updated: 2023/03/14 22:36:51 by mbouthai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (result != NULL)
		ft_strlcpy(result, str, n + 1);
	return (result);
}	
