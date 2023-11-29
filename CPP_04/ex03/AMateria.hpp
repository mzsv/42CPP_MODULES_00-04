/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:10:18 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:48:01 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
        
    public:
        AMateria();
        AMateria(std::string const& type);
        AMateria(AMateria const& materia);
        virtual ~AMateria();
        AMateria& operator=(AMateria const& materia);

        std::string const& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
