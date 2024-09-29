/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkullana <wkullana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:16:10 by wkullana          #+#    #+#             */
/*   Updated: 2024/09/29 15:32:08 by wkullana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putcharlen(char s)
{
	write(1, &s, 1);
	return (1);
}

int	ft_putstrlen(char *s)
{
	int	n;

	n = 0;
	while (s != '\0')
	{
		n += ft_putcharlen(s);
		s++;
	}
	return (n);
}

int	ft_putnbrbaselen(unsigned int num, char *base)
{
	int	n;
	int	len;

	n = 0;
	len = ft_strlen(base);
	while (num > len)
	{
		n += ft_putcharlen(base[num % len]);
		num /= len;
	}
	return (n);
}
