/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:23 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:38:50 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(Animal const& animal);
        virtual ~Animal();
        Animal& operator=(Animal const& animal);
        
        std::string getType() const;
        virtual void makeSound() const;
};

#endif
