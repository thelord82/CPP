/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:17:54 by malord            #+#    #+#             */
/*   Updated: 2023/03/09 15:31:15 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Tests from the subject
    const Animal *meta = new Animal();
    const Animal *j    = new Dog();
    const Animal *i    = new Cat();

    std::cout << "j is a " << j->getType() << " " << std::endl;
    std::cout << "i is a " << i->getType() << " " << std::endl;
    std::cout << "Cat makes ";
    i->makeSound(); // will output the cat sound!
    std::cout << "Dog makes ";
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl << "-------------------" << std::endl << std::endl;

    // Wrong classes tests

    const WrongAnimal *lucien  = new WrongAnimal();
    const WrongAnimal *gontran = new WrongCat();

    std::cout << "lucien is a " << lucien->getType() << std::endl;
    std::cout << "gontran is a " << gontran->getType() << std::endl;
    std::cout << "Lucien makes ";
    lucien->makeSound();
    std::cout << "Gontran makes ";
    gontran->makeSound();
    delete lucien;
    delete gontran;

    std::cout << std::endl << "-------------------" << std::endl << std::endl;

    // Other tests with no heap allocation
    Animal unknown;
    Dog    fido;
    Cat    bouleDePouel;

    std::cout << "unknown is a " << unknown.getType() << std::endl;
    std::cout << "fido is a " << fido.getType() << std::endl;
    std::cout << "bouleDePouel is a " << bouleDePouel.getType() << std::endl;

    std::cout << "unknown makes ";
    unknown.makeSound();
    std::cout << "fido makes ";
    fido.makeSound();
    std::cout << "bouleDePouel makes ";
    bouleDePouel.makeSound();

    return (0);
}