/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:05:25 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:45:47 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(Brain const & brain);
        ~Brain();
        Brain&              operator=(Brain const& brain);

        std::string const&  getIdea(int i) const;
        void                setIdea(int i, std::string const& idea);
};

#endif
