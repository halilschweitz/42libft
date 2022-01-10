/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacikar <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:52:44 by hsacikar          #+#    #+#             */
/*   Updated: 2022/01/10 20:52:45 by hsacikar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    size_t i;
    char *c_s;

    if(!s || !f)
        return (NULL);
    c_s = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
    i = -1;
    if(c_s == NULL)
        return (NULL);
    while (s[++i] != '\0')
        c_s[i] = (*f)(i, s[i]);
    c_s[i] = '\0';
    return (c_s);
}
