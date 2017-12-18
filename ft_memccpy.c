/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/13 21:05:25 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/13 22:22:49 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*pdst;
	const unsigned char		*psrc;
	size_t					i;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		pdst[i] = psrc[i];
		if (psrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
