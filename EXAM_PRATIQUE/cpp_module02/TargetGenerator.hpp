/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:22:42 by mal               #+#    #+#             */
/*   Updated: 2023/04/17 22:43:42 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        std::vector<ATarget *> _types;
    public:
        TargetGenerator(void);
        virtual ~TargetGenerator(void);

        void learnTargetType(ATarget *type);
        void forgetTargetType(std::string const &targetType);
        ATarget *createTarget(std::string const &target);
        
};

#endif