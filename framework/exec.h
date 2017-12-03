/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   exec.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 11:22:42 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 17:46:50 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _EXEC_H
# define _EXEC_H

# include "../libft/libft.h"
# include <signal.h>
# include <sys/wait.h>

# define RES "\033[0;m"
# define RED "\033[1;31m"
# define GRE "\033[1;32m"
# define BLU "\033[1;34m"
# define PIN "\033[1;35m"
# define YEL "\033[1;33m"

typedef struct			s_libunit
{
	char				*str;
	int					(*f)(void);
	struct s_libunit	*next;
}						t_libunit;

void					lst_add(char *str, int (*f)(void), t_libunit **lst);
int						fork_test(t_libunit **lst);

#endif
