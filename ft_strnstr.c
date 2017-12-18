/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 18:45:30 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 20:02:02 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t ls2;

	if (*s2 == '\0')
		return ((char *)s1);
	ls2 = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= ls2)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, ls2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
