/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_contact.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 22:15:50 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 03:55:34 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

# include "phonebook.hpp"

class	Contact
{
	private:
		std::string Cfirst_name;
		std::string Clast_name;
		std::string Cnickname;
		std::string Clogin;
		std::string Cadress;
		std::string Cemail;
		std::string Cphone;
		std::string Cbirthday;
		std::string Cfav_meal;
		std::string Cunderwear_color;
		std::string Cdark_secret;

	public:
		Contact();
		void	get_atribut(std::string at);
		void	putlist(int index);
		void	display_all();
};


#endif