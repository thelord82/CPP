/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:56:57 by malord            #+#    #+#             */
/*   Updated: 2023/02/15 15:14:20 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Dog *dog1 = new Dog();
    const Cat *cat1 = new Cat();

    for (int i = 0; i < 100; ++i) // fills dog and cat brain with ideas
    {
        dog1->getBrain()->setIdea("idea" + std::to_string(i), i);
        cat1->getBrain()->setIdea("idea" + std::to_string(i), i);
        std::cout << "idea = " << dog1->getBrain()->getIdea(i) << std::endl;
    }

    Animal *animals[20];
    for (int i = 0; i < 20; ++i) // Calls copy constructor to fill array of animals with deep copies of each
    {
        if (i < 10)
            animals[i] = new Dog(*dog1);
        else
            animals[i] = new Cat(*cat1);
    }
    delete dog1;
    delete cat1;
    Dog copyDog = *(Dog *)animals[3]; // Calls copy constructor again from the array
    Cat copyCat = *(Cat *)animals[14];

    for (int i = 0; i < 20; ++i) // Frees all animals
        delete animals[i];

    // Prints the ideas of the deep copy to proof it works even if the original was deleted
    for (int i = 0; i < 100; ++i)
    {
        std::cout << "copyDogIdea = " << copyDog.getBrain()->getIdea(i) << std::endl;
        std::cout << "copyCatIdea = " << copyCat.getBrain()->getIdea(i) << std::endl;
    }
    return 0;
}