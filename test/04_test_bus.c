/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   04_test_bus.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 09:43:06 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 09:50:57 by nbettach    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tests.h"

int		test_bus(void)
{
	char *str;

	str = "I'm gonna to bus error";
	if ((str[0] = '7'))
		return (0);
	else
		return (-1);
}
