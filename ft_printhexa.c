/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 08:28:50 by ataji             #+#    #+#             */
/*   Updated: 2021/12/14 00:00:48 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexa(unsigned int p, char *base, int *f)
{
	if (p >= 16)
	{
		ft_printhexa(p / 16, base, f);
		ft_printhexa(p % 16, base, f);
	}
	else
	{
		write(1, &base[p], 1);
		(*f)++;
	}
}
