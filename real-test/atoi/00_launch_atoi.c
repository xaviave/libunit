/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   00_launch_atoi.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 14:43:15 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 18:35:23 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int		launch_atoi(void)
{
	t_libunit	*lst;
	int			result_test;

	lst = NULL;
	ft_putendl("\n----------------------------------------------------------");
	ft_putstr("                         ATOI \n\n");
	lst_add("test_basic1", &test_basic1, &lst);
	lst_add("test_basic2", &test_basic2, &lst);
	lst_add("test_basic3", &test_basic3, &lst);
	lst_add("test_basic4", &test_basic4, &lst);
	lst_add("test_intmax", &test_intmax, &lst);
	lst_add("test_intmin", &test_intmin, &lst);
	lst_add("test_space1", &test_space1, &lst);
	lst_add("test_space2", &test_space2, &lst);
	lst_add("test_error1", &test_error1, &lst);
	lst_add("test_error2", &test_error2, &lst);
	lst_add("test_void", &test_void, &lst);
	result_test = fork_test(&lst);
	return (result_test);
}
