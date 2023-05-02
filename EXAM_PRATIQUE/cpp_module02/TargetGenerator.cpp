/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:26:53 by mal               #+#    #+#             */
/*   Updated: 2023/05/01 20:54:58 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void){}

TargetGenerator::~TargetGenerator(void){
	std::vector<ATarget*>::iterator ite = this->_types.end();
	for (std::vector<ATarget*>::iterator it = this->_types.begin(); it != ite; ++it)
		delete *it;
	this->_types.clear();
}

void TargetGenerator::learnTargetType(ATarget *type)
{
    if (type) {
		std::vector<ATarget*>::iterator ite = _types.end();
		for (std::vector<ATarget*>::iterator it = _types.begin(); it != ite; ++it)
		{	
			if ((*it)->getType() == type->getType())
				return ;
		}
		_types.push_back(type->clone());
	}
}

void TargetGenerator::forgetTargetType(std::string const &targetType)
{
    std::vector<ATarget*>::iterator ite = _types.end();
	for (std::vector<ATarget*>::iterator it = _types.begin(); it != ite; ++it) {
		if ((*it)->getType() == targetType) {
			delete *it;
			it = _types.erase(it);
		}
	}
}

ATarget *TargetGenerator::createTarget(std::string const &target)
{
    std::vector<ATarget*>::iterator ite = _types.end();
	for (std::vector<ATarget*>::iterator it = _types.begin(); it != ite; ++it) {
		if ((*it)->getType() == target) {
			return (*it);
		}
	}
	return (NULL);
}