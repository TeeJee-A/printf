/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:32:35 by ataji             #+#    #+#             */
/*   Updated: 2021/12/15 11:18:56 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_number(long int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		n = n * -1;
		c++;
	}
	if (n == 0)
		c++;
	while (n != 0)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

int	ft_printnbr(int n)
{
	long int	nb;
	int			nblen;

	nb = n;
	nblen = ft_number(nb);
	if (nb < 0)
	{
		ft_printchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_printnbr(nb / 10);
		ft_printnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
	{
		ft_printchar(nb + '0');
	}
	return (nblen);
}
