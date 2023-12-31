/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revanite <revanite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:41:02 by revanite          #+#    #+#             */
/*   Updated: 2023/05/30 07:53:16 by revanite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	ft_printf_c(t_spec *spec, int *count, va_list list)
{
	char	c;

	c = (char)va_arg(list, int);
	if (!(spec->left_justify))
	{
		while ((spec->field)-- > 1)
		{
			ft_putchar_fd(' ', 1);
			(*count)++;
		}
		ft_putchar_fd(c, 1);
	}
	else
	{
		ft_putchar_fd(c, 1);
		while ((spec->field)-- > 1)
		{
			ft_putchar_fd(' ', 1);
			(*count)++;
		}
	}
	(*count)++;
}
