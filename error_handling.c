/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:21:47 by vsergio           #+#    #+#             */
/*   Updated: 2022/07/22 09:23:24 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_msg(char *msg, int errorstatus)
{
	perror(msg);
	exit(errorstatus);
}

void	error_msg_errno(char *msg, int errorstatus, int iderrno)
{
	errno = iderrno;
	perror(msg);
	exit(errorstatus);
}

void	check_argc(int argc)
{
	if (argc < 5)
		error_msg_errno("ERROR", 22, 22);
}
