/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strclr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 16:21:03 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 16:24:18 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	while (s != NULL && *s)
	{
		*s = '\0';
		s++;
	}
}
