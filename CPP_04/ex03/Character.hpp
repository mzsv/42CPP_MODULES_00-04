/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:12:13 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:49:29 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria*   _inventory[4];
        AMateria*   _trash[4];

    public:
        Character();
        Character(std::string const& name);
        Character(Character const& character);
        ~Character();
        Character& operator=(Character const& character);

        std::string const&  getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target);    
};

#endif
