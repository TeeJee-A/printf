/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:31:47 by ataji             #+#    #+#             */
/*   Updated: 2021/12/13 05:37:51 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_printstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (len);
}
