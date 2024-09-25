/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazilino <mazilino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:36:08 by mazilino          #+#    #+#             */
/*   Updated: 2024/03/21 19:33:36 by mazilino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

void	ft_putstr(char *str);

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 1
#endif

typedef unsigned char	t_bool;

t_bool	ft_is_even(int nbr);

#ifndef EVEN
#define EVEN(nbr) (nbr % 2 == 0)
#endif

#ifndef EVEN_MSG
#define EVEN_MSG "I have an even number of arguments. \n"
#endif

#ifndef ODD_MSG
#define ODD_MSG "I have an odd number of arguments. \n"
#endif

#endif
