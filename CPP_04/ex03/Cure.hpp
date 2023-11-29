/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:10:42 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:49:48 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const& cure);
        ~Cure();
        Cure& operator=(Cure const& cure);
        
        virtual AMateria*   clone() const;
        void                use(ICharacter& target);
};

#endif
