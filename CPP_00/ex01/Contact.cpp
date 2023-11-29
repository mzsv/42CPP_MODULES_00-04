/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:02:34 by amenses-          #+#    #+#             */
/*   Updated: 2023/09/17 17:02:40 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->index = -1;
}

void		Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void 		Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void 		Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

void 		Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void 		Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

void 		Contact::setIndex(int index) {
	this->index = index;
}

std::string	Contact::getFirstName() {
	return (this->firstName);
}

std::string	Contact::getLastName() {
	return (this->lastName);
}

std::string	Contact::getNickname() {
	return (this->nickname);
}

std::string	Contact::getPhoneNumber() {
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret() {
	return (this->darkestSecret);
}

int			Contact::getIndex() {
	return (this->index);
}
