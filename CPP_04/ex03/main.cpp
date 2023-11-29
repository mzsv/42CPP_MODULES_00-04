/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:56:06 by amenses-          #+#    #+#             */
/*   Updated: 2023/10/02 20:21:04 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();

        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");
        AMateria*   tmp;

        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    std::cout << "---------------------" << std::endl;
    {
        MateriaSource   src;
        AMateria*       a = new Ice();
        AMateria*       b = new Cure();
        AMateria*       c = new Ice();
        AMateria*       d = new Cure();
        AMateria*       e = new Ice();

        src.learnMateria(a); 
        src.learnMateria(b);
        src.learnMateria(c);
        src.learnMateria(d);
        src.learnMateria(e);

        MateriaSource cpy;

        cpy = src;
        std::cout << "cpy materia 0: " << cpy.getMateria(0)->getType() << std::endl;
        std::cout << "cpy materia 1: " << cpy.getMateria(1)->getType() << std::endl;

        MateriaSource cpy2(src);

        std::cout << "cpy2 materia 0: " << cpy2.getMateria(0)->getType() << std::endl;
        std::cout << "cpy2 materia 1: " << cpy2.getMateria(1)->getType() << std::endl;
        delete e;
    }
    std::cout << "---------------------" << std::endl;
    {
        Character   me = Character("me");
        Character   cpy = Character("cpy");
        AMateria*   a = new Ice();
        AMateria*   b = new Cure();
        AMateria*   c = new Ice();
        AMateria*   d = new Cure();
        AMateria*   e = new Ice();

        me.equip(a);
        me.equip(b);
        me.equip(c);
        me.equip(d);
        me.equip(e);
        cpy = me;
        std::cout << "cpy name: " << cpy.getName() << std::endl;

        Character   cpy2(me);

        std::cout << "cpy2 name: " << cpy2.getName() << std::endl;
        cpy.use(0, cpy);
        me.use(1, cpy);
        cpy.use(2, cpy);
        me.use(3, cpy);
        me.unequip(0);
        me.unequip(1);
        me.unequip(2);
        me.unequip(3);
        me.unequip(4);
        me.use(0, cpy);
        delete e;
    }
    std::cout << "---------------------" << std::endl;
    {
        Ice    a;
        Ice    b(a);
        Ice    c;

        c = a;
        std::cout << "a type: " << a.getType() << std::endl;
        std::cout << "b type: " << b.getType() << std::endl;
        std::cout << "c type: " << c.getType() << std::endl;  
    }
    std::cout << "---------------------" << std::endl;
    {
        Cure    a;
        Cure    b(a);
        Cure    c;

        c = a;
        std::cout << "a type: " << a.getType() << std::endl;
        std::cout << "b type: " << b.getType() << std::endl;
        std::cout << "c type: " << c.getType() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    {
        AMateria*   a = new Ice();
        AMateria*   b(a);
        AMateria*   c;
        AMateria*   d = a->clone();

        c = a;
        std::cout << "a type: " << a->getType() << std::endl;
        std::cout << "b type: " << b->getType() << std::endl;
        std::cout << "c type: " << c->getType() << std::endl;
        std::cout << "d type: " << d->getType() << std::endl;
        delete a;
        delete d;
    }
    return 0;
}
