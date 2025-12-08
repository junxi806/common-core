/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjun-xi <gjun-xi@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 00:37:50 by gjun-xi           #+#    #+#             */
/*   Updated: 2025/12/09 00:47:16 by gjun-xi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*converter(int n, char *s, int end)
{
	if (n == 0)
	{
		s[end] = '0';
		return (s);
	}
	if (n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		return (converter(147483648, s, end));
	}
	if (n < 0)
	{
		s[0] = '-';
		return (converter(-n, s, end));
	}
	if ((n / 10) > 0)
	{
		s[end] = '0' + (n % 10);
		return (converter(n / 10, s, end - 1));
	}
	s[end] = '0' + (n % 10);
	return (s);
}

static size_t	int_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n / 10 > 0)
	{
		len++;
		n /= 10;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*res;

	len = int_len(n);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	converter(n, res, len - 1);
	res[len] = '\0';
	return (res);
}
