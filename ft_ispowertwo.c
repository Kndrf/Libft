/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ispowertwo.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 22:11:18 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 22:24:22 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ispowertwo(unsigned int x)
{
	while (((x % 2) == 0) && x > 1)
		x /= 2;
	return (x == 1);
}
