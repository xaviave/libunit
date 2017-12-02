/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   exec.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 11:22:42 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:37:05 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _EXEC_H
# define _EXEC_H

# include "../libft/libft.h"
# include <signal.h>
# include <sys/wait.h>

typedef struct			s_libunit
{
	char				*str;
	int					(*f)(void);
	struct s_libunit	*next;
}						t_libunit;

void					lst_add(char *str,int (*f)(void), t_libunit **lst);
int						fork_test(t_libunit **lst);

#endif
