/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:02:45 by amenses-          #+#    #+#             */
/*   Updated: 2023/09/17 17:02:48 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
		int			index;
	public:
		Contact();
		void		setFirstName(std::string firstName);
		void 		setLastName(std::string lastName);
		void 		setNickname(std::string nickName);
		void 		setPhoneNumber(std::string phoneNumber);
		void 		setDarkestSecret(std::string darkestSecret);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
		void 		setIndex(int index);
		int			getIndex();
};

#endif