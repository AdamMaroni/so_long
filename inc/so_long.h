/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaroni <amaroni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:40:45 by amaroni           #+#    #+#             */
/*   Updated: 2022/01/05 20:47:25 by amaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"
# include "mlx.h"
# include "mlx_int.h"

char	**ft_fd_to_array(int fd);
void	ft_free_array(char **array);
int		ft_is_closed_rectangle(char	**line_array);
int		ft_is_map_correct(int fd_map);
int		str2line(char **str, char **line, char *character);
int		get_next_line(int fd, char **line);
#endif
