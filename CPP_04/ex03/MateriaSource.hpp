/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:27:58 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:51:27 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*   _materia[4];

    public:
        MateriaSource();
        MateriaSource(MateriaSource const& obj);
        ~MateriaSource();
        MateriaSource& operator=(MateriaSource const& obj);

        AMateria*   getMateria(int idx) const;
        void        learnMateria(AMateria*);
        AMateria*   createMateria(std::string const& type);
};

#endif
