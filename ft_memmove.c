/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 14:45:07 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 21:00:52 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pdst;
	unsigned char		*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (psrc < pdst)
	{
		psrc += len - 1;
		pdst += len - 1;
		while (len--)
			*pdst-- = *psrc--;
	}
	else
	{
		while (len--)
			*pdst++ = *psrc++;
	}
	return (dst);
}
