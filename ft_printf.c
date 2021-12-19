/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:31:04 by ataji             #+#    #+#             */
/*   Updated: 2021/12/14 00:00:54 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(char a, char b, va_list ptr)
{
	int	k;

	k = 0;
	if (a == '%' && b == '%')
		k += ft_printchar('%');
	else if (a == '%' && b == 'c')
		k += ft_printchar(va_arg (ptr, int));
	else if (a == '%' && b == 's')
		k += ft_printstr(va_arg (ptr, char *));
	else if (a == '%' && (b == 'd' || b == 'i'))
		k += ft_printnbr(va_arg (ptr, int));
	else if (a == '%' && b == 'u')
		k += ft_printnbru(va_arg (ptr, unsigned int));
	else if (a == '%' && b == 'x')
		ft_printhexa(va_arg(ptr, unsigned int), "0123456789abcdef", &k);
	else if (a == '%' && b == 'X')
		ft_printhexa(va_arg (ptr, unsigned int), "0123456789ABCDEF", &k);
	else if (a == '%' && b == 'p')
		ft_printptr(va_arg (ptr, unsigned long int), &k);
	else if (a != '%')
		k = ft_printchar(a);
	else
		return (-1);
	return (k);
}

int	ft_print_format(char *format, va_list ap)
{
	int	i;
	int	j;

	j = 0;
	while (*format)
	{
		i = ft_print(*format, *(format + 1), ap);
		if (i == -1)
			return (j);
		j += i;
		if (*format == '%')
			format++;
		format++;
	}
	return (j);
}

int	ft_printf(const char *format, ...)
{
	int		k;
	va_list	ap;

	va_start(ap, format);
	k = ft_print_format((char *)format, ap);
	va_end(ap);
	return (k);
}
