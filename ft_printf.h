/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revanite <revanite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:18:40 by revanite          #+#    #+#             */
/*   Updated: 2023/05/30 09:16:13 by revanite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

typedef struct s_spec
{
	unsigned char	left_justify;
	unsigned char	zero_pad;
	unsigned long	precision;
	unsigned long	field;
	unsigned char	hash;
	unsigned char	space;
	unsigned char	plus;
	unsigned char	length;
	unsigned char	specifier;
	unsigned char	dot;
}	t_spec;

int		ft_printf(const char *s, ...);
void	ft_printf_c(t_spec *spec, int *count, va_list list);
void	ft_printf_s(t_spec *spec, int *count, va_list list);
void	sign(t_spec *spec, int *c, va_list l, char *(*f)(long long));
void	usgn(t_spec *spec, int *c, va_list l, char *(*f)(unsigned long long));
void	pntr(t_spec *spec, int *c, va_list l, char *(*f)(unsigned long long));
void	handle_specifier(const char **s, int *count, va_list list);
void	null_spec(t_spec *spec);
void	print_specifier(t_spec *spec, int *count, va_list list);
void	putchar_counter(char c, int *counter);
void	print_prefix(t_spec *s, int *c);
void	print_field(t_spec *s, int *c, long long *f);
void	zeroes(t_spec *spec, int *c, unsigned long len);
void	hash(t_spec *spec, int *c, unsigned long len, unsigned long long d);
void	ft_putnstr(const char *s, size_t n);
void	prcnt(t_spec *spec, int *count);

#endif	//	FT_PRINTF_H