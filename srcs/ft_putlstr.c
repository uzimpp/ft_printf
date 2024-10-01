/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkullana <wkullana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:16:10 by wkullana          #+#    #+#             */
/*   Updated: 2024/10/01 01:01:59 by wkullana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlstr(char *s)
{
	int	n;

	n = 0;
	if (!s)
		return (ft_putlstr("(null)"));
	while (*s != '\0')
	{
		if (ft_putlchar(*s++) == -1)
			return (-1);
		n++;
	}
	return (n);
}
