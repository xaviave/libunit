/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   06_test_intmin.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:48:44 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 18:50:28 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int		test_intmin(void)
{
	if (atoi("-2147483648") == ft_atoi("-2147483648"))
		return (0);
	else
		return (-1);
}
