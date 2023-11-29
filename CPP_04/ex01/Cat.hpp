/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:09:03 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:42:09 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain*  brain;

    public:
        Cat();
        Cat(Cat const& cat);
        virtual ~Cat();
        Cat&    operator=(Cat const& cat);

        void    makeSound() const;    
};

#endif
