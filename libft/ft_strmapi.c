/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:45:39 by qduperon          #+#    #+#             */
/*   Updated: 2015/12/02 15:33:21 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	i = 0;
	if (str)
		ft_strcpy(str, s);
	while (*str)
	{
		f(i, *str);
		i++;
		str++;
	}
	return (str);
}
