/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   08_test_space2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:12:26 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:47:51 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int		test_space2(void)
{
	if (atoi("  -707") == ft_atoi("   -707"))
		return (0);
	else
		return (-1);
}
