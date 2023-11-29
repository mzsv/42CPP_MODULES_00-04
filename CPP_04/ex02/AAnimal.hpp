/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:23 by amenses-          #+#    #+#             */
/*   Updated: 2023/09/21 20:34:39 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(AAnimal const& animal);
        virtual ~AAnimal();
        AAnimal& operator=(AAnimal const& animal);
        
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif
