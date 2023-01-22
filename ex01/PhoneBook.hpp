/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:22:55 by malord            #+#    #+#             */
/*   Updated: 2023/01/22 14:06:41 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>

 class PhoneBook {
 public:
     PhoneBook(void);
     ~PhoneBook(void);
 //private:
 //    Contact _contacts[8];
 };
 
 class Contact {
 public:
     std::string getFirstName(void) const;
     std::string getLastName(void) const;
     std::string getNickname(void) const;
     std::string getPhoneNumber(void) const;
     std::string getSecret(void) const;   
 private:
     std::string _firstName;
     std::string _lastName;
     std::string _nickname;
     std::string _phoneNumber;
     std::string _darkestSecret;
     Contact(void);
     ~Contact(void);
 };
#endif