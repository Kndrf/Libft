/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/13 21:50:43 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/13 22:18:48 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*pdst;
	unsigned const char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n--)
		pdst[n] = psrc[n];
	return (dst);
}
