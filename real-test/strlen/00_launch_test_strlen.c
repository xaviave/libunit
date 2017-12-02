/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   00_launch_test_strlen.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 13:31:17 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 18:36:17 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int				launch_strlen(void)
{
	t_libunit	*lst;
	int			result_test;

	lst = NULL;
	ft_putendl("\n----------------------------------------------------------");
	ft_putstr("                        STRLEN\n\n");
	lst_add("basic test", &basic_strlen, &lst);
	lst_add("medium test", &medium_strlen, &lst);
	lst_add("hard test", &hard_strlen, &lst);
	lst_add("void test", &void_strlen, &lst);
	result_test = fork_test(&lst);
	return (result_test);
}
