/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:15:34 by ataji             #+#    #+#             */
/*   Updated: 2021/12/14 00:13:49 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
}

void	ft_printhexaptr(unsigned long int p, char *base, int *f)
{
	if (p >= 16)
	{
		ft_printhexaptr(p / 16, base, f);
		ft_printhexaptr(p % 16, base, f);
	}
	else
	{
		write(1, &base[p], 1);
		(*f)++;
	}
}

void	ft_printptr(unsigned long int p, int *f)
{
	*f = 2;
	ft_putstr("0x");
	ft_printhexaptr(p, "0123456789abcdef", f);
}
