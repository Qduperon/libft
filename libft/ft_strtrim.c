/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:38:46 by qduperon          #+#    #+#             */
/*   Updated: 2015/12/02 15:48:13 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	while (*s)
	{
		if (*s != ' ' && *s != '\t' && *s != '\n')
		{
			str[i] = *s;
			i++;
		}
		s++;
	}
	return (str);
}
