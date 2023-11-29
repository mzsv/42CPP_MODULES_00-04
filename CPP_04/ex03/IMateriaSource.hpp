/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:11:34 by amenses-          #+#    #+#             */
/*   Updated: 2023/09/26 01:29:49 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {
    public:
        virtual ~IMateriaSource() {}

        virtual void        learnMateria(AMateria*) = 0;
        virtual AMateria*   createMateria(std::string const& type) = 0;   
};

#endif
