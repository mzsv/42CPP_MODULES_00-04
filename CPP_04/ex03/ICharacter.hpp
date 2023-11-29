/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:28:54 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:50:14 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

class AMateria;

class ICharacter {
    public:
        virtual ~ICharacter() {}

        virtual std::string const& getName() const = 0;
        virtual void equip(AMateria*) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif
