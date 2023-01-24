/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:39:24 by mal               #+#    #+#             */
/*   Updated: 2023/01/24 10:39:21 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>
# include <string>
# include "PhoneBook.hpp"

 class Contact {
 public:
	 Contact(void);
	 ~Contact(void);
	 std::string	getFirstName(void) const;
	 std::string	getLastName(void) const;
	 std::string	getNickname(void) const;
	 std::string	getPhoneNumber(void) const;
	 std::string	getSecret(void) const;
	 void			setFirstName(void);
	 void			setLastName(void);
	 void			setNickname(void);
	 void			setPhone(void);
	 void			setSecret(void);
	 void			setNewContact(void);
 private:
	 std::string    _firstName;
	 std::string    _lastName;
	 std::string    _nickname;
	 std::string    _phoneNumber;
	 std::string    _darkestSecret;
	 //int            _count;
 };
#endif