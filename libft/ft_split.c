/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjun-xi <gjun-xi@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:00:26 by gjun-xi           #+#    #+#             */
/*   Updated: 2025/12/20 20:00:27 by gjun-xi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_split(char **r, size_t l)
{
	while (l > 0)
		free(r[--l]);
	free(r);
	return (NULL);
}

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static char	*skipper(char const *s, char c)
{
	const char	*p;

	p = s;
	while (*p == c && *p != '\0')
	{
		p++;
	}
	return ((char *)p);
}

static size_t	counter(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**arr;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s != '\0' && i < count)
	{
		s = skipper(s, c);
		len = counter(s, c);
		arr[i] = malloc((len + 1) * sizeof(char));
		if (!arr[i])
			return (free_split(arr, i));
		ft_strlcpy(arr[i++], s, len + 1);
		s += len;
	}
	arr[i] = NULL;
	return (arr);
}
