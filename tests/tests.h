/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nbettach <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 10:12:57 by nbettach     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 12:15:23 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../framework/exec.h"

int		error_launch(void);
int		test_ok(void);
int		test_ko(void);
int		test_segf(void);
int		test_bus(void);
int		test_abort(void);
int		test_floating(void);
int		test_timeout(void);

#endif
