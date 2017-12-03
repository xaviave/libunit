/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   02_medium_strlen.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 15:47:33 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 18:16:20 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int			medium_strlen(void)
{
	char *test;

	test = NULL;
	test = (char *)ft_memset(test, 97, 500);
	if (strlen(test) == ft_strlen(test))
		return (0);
	else
		return (-1);
}
