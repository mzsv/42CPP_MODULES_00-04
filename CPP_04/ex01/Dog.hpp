/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:50 by amenses-          #+#    #+#             */
/*   Updated: 2023/10/02 19:46:51 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
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
