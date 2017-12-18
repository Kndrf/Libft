/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 18:49:37 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 18:55:14 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tronc;
	size_t			i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
		tronc = NULL;
	tronc = (char *)malloc(sizeof(char) * (len + 1));
	if (tronc == NULL)
		return (NULL);
	i = 0;
	if (s != NULL)
	{
		while (i < len && s[start])
		{
			tronc[i] = s[start];
			start++;
			i++;
		}
		tronc[i] = '\0';
		return (tronc);
	}
	return ((char *)s);
}
