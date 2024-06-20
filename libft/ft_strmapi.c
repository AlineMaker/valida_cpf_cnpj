/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialves <alialves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:10:42 by alialves          #+#    #+#             */
/*   Updated: 2023/11/05 20:17:50 by alialves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_str;
	int		len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	new_str[len] = '\0';
	i = 0;
	while (i < len)
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	return (new_str);
}
