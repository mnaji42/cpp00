/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 00:07:23 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/19 04:12:28 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static int	check_buff(std::string buff)
{
	if (buff == "SEARCH" || buff == "ADD")
		return (1);
	if (buff == "EXIT")
		exit (1);
	std::cout << "\n\x1B[31m" << "Wrong commande, please enter :" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "ADD" << "\033[0m" << " : for add a new contact" << std::endl;
	std::cout << "\033[32m" << "SEARCH" << "\033[0m" << " : to search a contact" << std::endl;
	std::cout << "\033[32m" << "EXIT" << "\033[0m" << " : to quit the programme" << std::endl;
	return (0);
}

static void	add_contact(Contact *c, int &i)
{
	if (i == 8)
		std::cout << "\n\x1B[31m"  << "Sorry, your memory if full. You can't add a new contact" << "\033[0m\n" << std::endl;
	else
	{
		std::cout << "\x1B[93m" << "\nPlease enter the next informations : " << "\033[0m" << std::endl;
		c[i].get_atribut("first name");
		c[i].get_atribut("last name");
		c[i].get_atribut("nickname");
		c[i].get_atribut("login");
		c[i].get_atribut("adress");
		c[i].get_atribut("email");
		c[i].get_atribut("phone");
		c[i].get_atribut("birthday");
		c[i].get_atribut("favorite meal");
		c[i].get_atribut("underwear color");
		c[i].get_atribut("dark secret");
		std::cout << "\n\x1B[93m" << "A new contact have added with succes !" << "\033[0m\n" << std::endl;
		i++;
	}
}

static void empty_buffer()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

static int	get_correct_index(int index_max)
{
	std::string temp;
	int			index;
	
	while(1)
    {
        std::cin >> temp;
        if(std::cin.eof() || std::cin.bad())
        {
            std::cout << "ERROR : cout" << std::endl;
            if(std::cin.eof())
                break;
            empty_buffer();
            continue;
        }
        else if(std::cin.fail())
        {
            std::cout << "ERROR : cout" << std::endl;
            empty_buffer();
            continue;
        }
        empty_buffer();
        std::istringstream stream(temp);
        stream >> index;
        if(stream.fail() || !stream.eof())
            std::cout << "\x1B[31m" << "Please write a number" << "\033[0m" << " : ";
		else if (index < 0 || index > index_max)
			std::cout << "\x1B[31m" << "Please choose a number between 0 and " << index_max << "\033[0m" << " : ";
        else
            break;
    }
	return (index);
}

static void	search_contact(Contact *c, int i)
{
	int		j = 0;

	if (i == 0)
		std::cout << "\n\x1B[31m" << "You have no contact in your phonebook" << "\033[0m" <<  std::endl;
	else
	{
		std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
		while (j < i)
		{
			std::cout << "---------------------------------------------" << std::endl;
			c[j].putlist(j);
			j++;
		}
		std::cout << "\n---------------------------------------------" << std::endl;
		std::cout << "\033[32m" << "Select an index" << "\033[0m" << " : ";
		i = get_correct_index(j - 1);
		c[i].display_all();
	}
}

int			main()
{
	Contact		c[8];
	std::string buff;
	int			i = 0;
	
	while (1)
	{
		std::cout << "\n\033[3;104;30m" << "Enter a commande" << "\033[0m" << " : ";
		std::getline(std::cin, buff);
		if (check_buff(buff))
		{
			if (buff == "ADD")
				add_contact(c, i);
			else
				search_contact(c, i);
		}
	}
	return (0);
}