/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 16:58:09 by gbadi             #+#    #+#             */
/*   Updated: 2015/05/28 20:18:45 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H

# include		 <termcap.h>
# include		 <unistd.h>
# include		 <stdlib.h>
# include		 "libft/libft.h"

typedef struct	s_env
{
	
}				t_env;

int				term_clear(void);
int				term_read(t_env *e, void (*fn)(t_env *, char*));

#endif
