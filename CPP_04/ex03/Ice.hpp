/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:10:30 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:50:06 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const& ice);
        ~Ice();
        Ice& operator=(Ice const& ice);
        
        virtual AMateria*   clone() const;
        void                use(ICharacter& target);
};

#endif
