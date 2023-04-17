/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:20:02 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 10:02:52 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        Warlock(void);
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &rhs);
    public:
        Warlock(const std::string &name, const std::string &title);
        virtual ~Warlock(void);

        const std::string &getName(void) const;
        const std::string &getTitle(void) const; 
        void setTitle(const std::string &title);
        void introduce(void) const;
};
#endif