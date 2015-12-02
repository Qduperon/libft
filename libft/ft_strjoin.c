/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:55:00 by qduperon          #+#    #+#             */
/*   Updated: 2015/12/02 15:51:04 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	while (str)
	{
		ft_strcpy(str, s1);
		while (s1)
		{
			s1++;
			str++;
		}
		ft_strcpy(str, s2);
		while (s2)
		{
			s2++;
			str++;
		}
	}
	*str = '\0';
	return (str);
}
