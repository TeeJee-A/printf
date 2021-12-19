/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:50:44 by ataji             #+#    #+#             */
/*   Updated: 2021/12/14 00:00:42 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include<stdio.h>

int		ft_printf(const char *format, ...);
int		ft_print_format(char *format, va_list ap);
int		ft_print(char a, char b, va_list ptr);
int		ft_printchar(char c);
int		ft_number(long int n);
void	ft_putchar(char c);
int		ft_printnbr(int n);
int		ft_strlen(char *str);
int		ft_printstr(char *str);
int		ft_printnbru(unsigned int n);
void	ft_putcharu(char c);
int		ft_numberu(unsigned long int n);
void	ft_printhexa(unsigned int p, char *base, int *f);
void	ft_putstr(char *s);
void	ft_printptr(unsigned long int p, int *f);
void	ft_printhexaptr(unsigned long int p, char *base, int *f);

#endif
