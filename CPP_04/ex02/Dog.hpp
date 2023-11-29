/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:50 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:46:11 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain*  brain;

    public:
        Dog();
        Dog(Dog const& dog);
        virtual ~Dog();
        Dog&    operator=(Dog const& dog);

        void    makeSound() const;
};

#endif
