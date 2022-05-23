/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:02:40 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/05/12 17:27:57 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t		i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	char	*str;

	str = NULL;
	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (NULL);
		*s1 = '\0';
	}
	if (s2 == NULL)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((sizeof(char)) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	ft_strlcpy(str, s1, i + 1);
	ft_strlcpy(str + ft_strlen(s1), s2, i + 1);
	free(s1);
	s1 = NULL;
	return (str);
}

char	*ft_strchr(char *s, int c)
{
	char	u;

	u = c;
	while (*s != '\0')
	{
		if (*s == u)
			return (s);
		s++;
	}
	if (u == 0)
		return (s);
	return (NULL);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str2;
	size_t	t;

	if (s == 0)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str2 = malloc(sizeof(char));
		str2[0] = '\0';
		return (str2);
	}
	if ((len + start) <= ft_strlen(s))
		t = len;
	else if ((len + start) > ft_strlen(s))
		t = (ft_strlen(s) - start);
	else
		t = 1;
	str2 = malloc(sizeof(char) * (t + 1));
	if (!str2)
		return (NULL);
	ft_strlcpy(str2, &s[start], t + 1);
	return (str2);
}
