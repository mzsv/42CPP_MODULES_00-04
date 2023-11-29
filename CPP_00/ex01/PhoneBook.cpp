/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:56:57 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:12:22 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

void	PhoneBook::updateIndex()
{
	if (this->index < 7)
		this->index++;
	else
		this->index = 0;
}

std::string	PhoneBook::getInput(std::string msg)
{
	std::string input;

	while (input.empty()) {
		std::cout << msg;
		std::getline(std::cin, input);
	}
	return (input);
}

void	PhoneBook::addContact()
{
	Contact		contact;

	contact.setFirstName(getInput("Enter first name: "));
	contact.setLastName(getInput("Enter last name: "));
	contact.setNickname(getInput("Enter Nickname: "));
	contact.setPhoneNumber(getInput("Enter phone number: "));
	contact.setDarkestSecret(getInput("Enter your darkest secret: "));
	contact.setIndex(this->index);
	this->contacts[this->index] = contact;
	this->updateIndex();
}

void	PhoneBook::printContactField(std::string field)
{
	if (field.length() > 10)
	{
		std::cout << std::right << std::setw(9) << field.substr(0, 9) << ".|";
	}
	else
	{
		std::cout << std::right << std::setw(10) << field << "|";
	}
}

void	PhoneBook::searchContact() {
	int			i;
	int			contactIndex;
	std::string	tmp;

	for (i = 0; i < 8 && this->contacts[i].getIndex() == i; i++)
	{
		std::cout << std::right << std::setw(10) << this->contacts[i].getIndex() << "|";
		this->printContactField(this->contacts[i].getFirstName());
		this->printContactField(this->contacts[i].getLastName());
		this->printContactField(this->contacts[i].getNickname());
		std::cout << std::endl;
	}
	if (i == 0)
	{
		std::cout << "No contacts" << std::endl;
		return ;
	}
	std::istringstream	iss(this->getInput("Enter contact index: "));

	iss >> contactIndex;
	if (iss.fail() || iss.bad())
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (!(contactIndex >= 0 && contactIndex < i)) {
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	std::cout << "First name: " << this->contacts[contactIndex].getFirstName() << std::endl
		<< "Last name: " << this->contacts[contactIndex].getLastName() << std::endl
		<< "Nickname: " << this->contacts[contactIndex].getNickname() << std::endl
		<< "Phone number: " << this->contacts[contactIndex].getPhoneNumber() << std::endl
		<< "Darkest secret: " << this->contacts[contactIndex].getDarkestSecret() << std::endl;
}
