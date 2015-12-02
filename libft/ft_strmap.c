/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:32:33 by qduperon          #+#    #+#             */
/*   Updated: 2015/12/02 15:35:14 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char *str;

	str = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str)
		ft_strcpy(str, s);
	while (*str)
	{
		f(*str);
		str++;
	}
	return (str);
}
