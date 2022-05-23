/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:21:38 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/05/12 16:20:00 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	main()
{
	int	fd;
	char *str;

	fd = open("test2.txt", O_RDONLY);
	//if (fd == -1)
	//	return (1);
	//else
	//{
		str = get_next_line(fd);
		printf("%s", str);
		if (str)
			free(str);
		str = get_next_line(fd);
		printf("%s", str);
		if (str)
			free(str);
//		str = get_next_line(fd);
//		printf("%s", str);
//		str = get_next_line(fd);
//		printf("%s", str);
//		str = get_next_line(fd);
//		printf("%s", str);
//	}
	close(fd);
	return (0);
}
