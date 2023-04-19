/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:23:41 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 12:10:11 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(void)
{
    //std::cout << "Default Warlock constructor called" << std::endl;
}

//Warlock::Warlock(const Warlock &copy) : _name(copy._name), _title(copy._title)
//{
//    *this = copy;
//}

//Warlock &Warlock::operator=(const Warlock &rhs)
//{
//    if (this != &rhs)
//    {
//        this->_name = rhs._name;
//        this->_title = rhs._title;
//    }
//    return (*this);
//}

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    //std::cout << "Parameter Warlock constructor called" << std::endl;
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
    //std::cout << "Default Warlock destructor called" << std::endl;
    std::cout << _name << ": My job here is done!" << std::endl;
    //for (std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); ++it)
    //{
    //    delete *it;
    //}
    //this->_spells.clear();
}

const std::string &Warlock::getName(void) const
{
    return (this->_name);
}

const std::string &Warlock::getTitle(void) const
{
    return (this->_title);
}

void Warlock::setTitle(const std::string &title)
{
    this->_title = title;
}

void Warlock::introduce(void) const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    for (std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); ++it)
    {
        if ((*it) == spell)
            return ;
    }
    _spells.push_back(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
    for (std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); ++it)
    {
        if ((*it)->getName() == spellName)
        {
            it = _spells.erase(it);
            return;
        }
    }
}

void Warlock::launchSpell(const std::string spellName, const ATarget &target)
{
    for (std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); ++it)
    {
        if ((*it)->getName() == spellName)
        {
            (*it)->launch(target);
            return;
        }
    }
}