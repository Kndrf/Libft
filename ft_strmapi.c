/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 17:52:48 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 17:58:07 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int					i;
	unsigned int		j;
	char				*map;

	j = 0;
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	map = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (map == NULL)
		return (NULL);
	while (s[i])
	{
		map[i] = f(j, s[i]);
		i++;
		j++;
	}
	map[i] = '\0';
	return (map);
}
