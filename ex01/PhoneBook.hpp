/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:22:55 by malord            #+#    #+#             */
/*   Updated: 2023/01/19 15:39:24 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <iomanip>
# include <string>

 class PhoneBook {
 public:
     Contact contacts[8];
     PhoneBook(void);
     ~PhoneBook(void);
 };
 
 class Contact {
 public:
     std::string first_name;
     std::string last_name;
     std::string nickname;
     std::string phone_number;
     std::string darkest_secret;
     Contact(void);
     ~Contact(void);
 };
#endif