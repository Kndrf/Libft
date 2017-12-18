/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/13 22:02:46 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/13 22:26:24 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ps;
	size_t				i;

	i = 0;
	ps = (unsigned char *)s;
	while (n--)
	{
		if (ps[i] == (unsigned char)c)
			return (ps + i);
		i++;
	}
	return (NULL);
}
