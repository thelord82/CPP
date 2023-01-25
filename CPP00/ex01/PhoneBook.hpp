/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:22:55 by malord            #+#    #+#             */
/*   Updated: 2023/01/24 12:14:40 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

 class PhoneBook {
 public:
	 PhoneBook(void);
	 ~PhoneBook(void);
	Contact	*getContact(int index);
 private:
     Contact _contacts[8];
 };
#endif