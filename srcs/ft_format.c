/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkullana <wkullana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:40:56 by wkullana          #+#    #+#             */
/*   Updated: 2024/09/29 15:17:27 by wkullana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_option(const char *s, va_list ap)
{
	int	n;

	n = 0;
	if (*(s + 1) == 'c')
		n += ft_lputchar(va_arg(ap, char));
	else if (*(s + 1) == 's')
	{
		ft_putstr(ap);
		n += ft_strlen(ap);
	}
	else if (*(s + 1) == 'p')
		return ;
	else if (*(s + 1) == 'd')
		return ;
	else if (*(s + 1) == 'i')
		return ;
	else if (*(s + 1) == 'u')
		return ;
	else if (*(s + 1) == 'x')
		n += 
	else if (*(s + 1) == 'X')
		
		return ;
	else if (*(s + 1) == '%')
		return ;
	return (n);
}

int	ft_format(const char *s, va_list ap)
{
	int	n;
	int	i;
	int	tmp;

	n = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '%')
		{
			tmp = ft_option((s + i), ap);
			if (tmp >= 0)
				n += tmp;
			else
				return (tmp);
		}
		else
		{
			ft_lputchar(*(s + i));
			n++;
		}
		i++;
	}
	return (n);
}
