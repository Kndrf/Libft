/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 22:13:51 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 22:19:32 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t size)
{
	char	*backup;

	if (!size && ptr)
	{
		backup = (char *)malloc(1);
		if (backup == NULL)
			return (NULL);
		ft_memdel(ptr);
		return (backup);
	}
	if (!(backup = (char *)malloc(size)))
		return (NULL);
	if (ptr)
	{
		ft_memcpy(backup, ptr, size);
		ft_memdel(ptr);
	}
	return (backup);
}
