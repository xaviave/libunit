/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   03_test_segf.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 09:41:07 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 12:18:31 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tests.h"

int		test_segf(void)
{
	char *str;

	str = NULL;
	if ((str[5] = '5'))
		return (0);
	else
		return (-1);
}