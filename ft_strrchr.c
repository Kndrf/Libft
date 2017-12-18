/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 18:48:05 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 18:49:16 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char *revs;

	revs = (char *)s + ft_strlen(s);
	while (*revs != c)
	{
		if (revs == s)
			return (NULL);
		revs--;
	}
	return (revs);
}
