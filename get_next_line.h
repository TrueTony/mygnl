/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksenaida <ksenaida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:45:44 by ksenaida          #+#    #+#             */
/*   Updated: 2019/10/12 14:11:10 by ksenaida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE  10

# include "fcntl.h"
# include "sys/types.h"
# include "sys/uio.h"
# include "stdlib.h"
# include "libft/libft.h"

int	get_next_line(const int fd, char **line);

#endif
