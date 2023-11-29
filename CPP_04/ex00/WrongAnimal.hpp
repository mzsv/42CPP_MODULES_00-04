/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:11:13 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:39:35 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const& animal);
        ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const& animal);
        
        std::string getType() const;
        void makeSound() const;
};

#endif
