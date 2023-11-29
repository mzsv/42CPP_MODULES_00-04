/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:05:02 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:12:35 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

class PhoneBook {
	private:
		Contact	contacts[8];
		int		index;

		std::string	getInput(std::string msg);
		void		updateIndex();
		void		printContactField(std::string field);

	public:
		PhoneBook();
		void		addContact();
		void		searchContact();
};

#endif
