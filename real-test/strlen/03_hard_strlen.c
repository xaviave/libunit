/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   03_hard_strlen.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 15:55:08 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:46:08 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int			hard_strlen(void)
{
	char	*test;
	int		i;

	i = 20;
	test = NULL;
	test = (char *)ft_memset(test, 97, 50000);
	if (strlen(test) == ft_strlen(test))
		return (0);
	else
		return (-1);
}
