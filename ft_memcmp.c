/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 14:33:34 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 20:03:29 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*ps1;
	unsigned char		*ps2;
	size_t				i;

	if (s1 == s2 || n == 0)
		return (0);
	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (n--)
	{
		if (ps1[i] != ps2[i])
			break ;
		if (n)
			i++;
	}
	return (ps1[i] - ps2[i]);
}
