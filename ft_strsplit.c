/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 20:19:35 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 21:01:11 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		nwords(char const *s, char c)
{
	int count;
	int new;

	new = 0;
	count = 0;
	while (*s)
	{
		if (*s == c && new == 1)
			new = 0;
		if (*s != c && new == 0)
		{
			count++;
			new = 1;
		}
		s++;
	}
	return (count);
}

static int		ft_wordlen(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			words;
	int			i;

	if (s == NULL || c == 0)
		return (NULL);
	words = nwords((const char *)s, c);
	i = 0;
	tab = (char **)malloc(sizeof(*tab) * (words) + 1);
	if (tab == NULL)
		return (NULL);
	while (words--)
	{
		while (*s && *s == c)
			s++;
		tab[i] = ft_strsub((const char *)s, 0, ft_wordlen((const char *)s, c));
		if (tab[i] == NULL)
			return (NULL);
		s += ft_wordlen(s, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
