/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   10_test_error2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:17:04 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:48:07 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int		test_error2(void)
{
	if (atoi("  -Humm le caca c'est delicieux") 
			== ft_atoi("  -Humm le caca c'est delicieux"))
		return (0);
	else
		return (-1);
}
