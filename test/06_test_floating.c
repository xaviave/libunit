/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   06_test_floating.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 09:57:17 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 10:01:58 by nbettach    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tests.h"

int		test_floating(void)
{
	int		f;

	f = 0;
	if ((1 / f))
		return (0);
	else
		return (-1);
}
