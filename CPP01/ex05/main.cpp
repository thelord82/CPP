/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:35:34 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:55:48 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl complaining;

    complaining.complain("DEBUG");
    complaining.complain("AUTRE");
    complaining.complain("INFO");
    complaining.complain("POUEL");
    complaining.complain("WARNING");
    complaining.complain("BLEUET");
    complaining.complain("ERROR");
    complaining.complain("FUCK");
    return (0);
}