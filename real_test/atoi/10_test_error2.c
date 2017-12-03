/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   10_test_error2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:49:22 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 18:50:18 by xamartin    ###    #+. /#+    ###.fr     */
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
