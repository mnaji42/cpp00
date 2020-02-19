/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 00:07:20 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 04:13:53 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_contact.hpp"

Contact::Contact()
{
}

void	Contact::get_atribut(std::string at)
{
	std::string buff;

	std::cout << "\033[32m" << at << "\033[0m" << " : ";
	std::getline(std::cin, buff);
	if (at == "first name")
		Contact::Cfirst_name = buff;
	else if (at == "last name")
		Contact::Clast_name = buff;
	else if (at == "nickname")
		Contact::Cnickname = buff;
	else if (at == "login")
		Contact::Clogin = buff;
	else if (at == "adress")
		Contact::Clast_name = buff;
	else if (at == "email")
		Contact::Cemail = buff;
	else if (at == "phone")
		Contact::Cphone = buff;
	else if (at == "birthday")
		Contact::Cbirthday = buff;
	else if (at == "favorite meal")
		Contact::Cfav_meal = buff;
	else if (at == "underwear color")
		Contact::Cunderwear_color = buff;
	else if (at == "dark secret")
		Contact::Cdark_secret = buff;
}

void	Contact::display_all()
{
	std::cout << "\n\x1B[93m" << "First name : " << "\033[0m" << Contact::Cfirst_name << std::endl;
	std::cout << "\x1B[93m" << "Last name : " << "\033[0m" << Contact::Clast_name << std::endl;
	std::cout << "\x1B[93m" << "Nickname : " << "\033[0m" << Contact::Cnickname << std::endl;
	std::cout << "\x1B[93m" << "Login : " << "\033[0m" << Contact::Clogin << std::endl;
	std::cout << "\x1B[93m" << "Adress : " << "\033[0m" << Contact::Cadress << std::endl;
	std::cout << "\x1B[93m" << "Email : " << "\033[0m" << Contact::Cemail << std::endl;
	std::cout << "\x1B[93m" << "Phone : " << "\033[0m" << Contact::Cphone << std::endl;
	std::cout << "\x1B[93m" << "Birthday : " << "\033[0m" << Contact::Cbirthday << std::endl;
	std::cout << "\x1B[93m" << "Favorite meal : " << "\033[0m" << Contact::Cfav_meal << std::endl;
	std::cout << "\x1B[93m" << "Underwear color : " << "\033[0m" << Contact::Cunderwear_color << std::endl;
	std::cout << "\x1B[93m" << "Dark secret : " << "\033[0m" << Contact::Cdark_secret << std::endl;
}

void	Contact::putlist(int index)
{
	int		i = 0;

	std::cout << "|" << std::setw(10) << index << "|";
	if (Contact::Cfirst_name.length() <= 10)
		std::cout << std::setw(10) << Contact::Cfirst_name << "|";
	else
	{
		while (i < 9)
			std::cout << Contact::Cfirst_name[i++];
		std::cout << "." << "|";
		i = 0;
	}
	if (Contact::Clast_name.length() <= 10)
		std::cout << std::setw(10) << Contact::Clast_name << "|";
	else
	{
		while (i < 9)
			std::cout << Contact::Clast_name[i++];
		std::cout << "." << "|";
		i = 0;
	}
	if (Contact::Cnickname.length() <= 10)
		std::cout << std::setw(10) << Contact::Cnickname << "|" << std::endl;
	else
	{
		while (i < 9)
			std::cout << Contact::Cnickname[i++];
		std::cout << "." << "|" << std::endl;
	}
}