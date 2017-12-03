/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   00_error_launch.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 20:47:16 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 18:56:38 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tests.h"

int				error_launch(void)
{
	t_libunit	*lst;
	int			result_test;

	lst = NULL;
	lst_add("test_ok", &test_ok, &lst);
	lst_add("test_ko", &test_ko, &lst);
	lst_add("test_segf", &test_segf, &lst);
	lst_add("test_bus", &test_bus, &lst);
	lst_add("test_abort", &test_abort, &lst);
	lst_add("test_floating", &test_floating, &lst);
	lst_add("test_timeout", &test_timeout, &lst);
	result_test = fork_test(&lst);
	return (result_test);
}
