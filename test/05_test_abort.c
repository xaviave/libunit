/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   05_test_abort.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 09:51:10 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 09:56:49 by nbettach    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tests.h"

int		test_abort(void)
{
	if ((1))
	{
		abort();
		return (0);
	}
	else
		return (-1);
}
