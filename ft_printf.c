/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revanite <revanite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:53:44 by revanite          #+#    #+#             */
/*   Updated: 2023/05/27 11:58:13 by revanite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int				count;
	va_list			list;

	count = 0;
	va_start(list, s);
	while (*s)
	{
		while (*s && *s != '%')
		{
			ft_putchar_fd(*s++, 1);
			count++;
		}
		if (*s == '%')
			handle_specifier(&s, &count, list);
	}
	va_end(list);
	return (count);
}

// int	main(void)
// {
// 	int	x;

// 	x = 42;
// 	ft_printf("%0#20.6p", &x);
// 	ft_printf("\n");
// 	printf("%0#20.6p", &x);
// 	return (0);
// }
