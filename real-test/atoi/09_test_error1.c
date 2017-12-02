/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   09_test_error1.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:15:20 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:48:00 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int		test_error1(void)
{
	if (atoi("Humm le caca c'est delicieux") 
			== ft_atoi("Humm le caca c'est delicieux"))
		return (0);
	else
		return (-1);
}
