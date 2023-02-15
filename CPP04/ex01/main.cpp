/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:56:57 by malord            #+#    #+#             */
/*   Updated: 2023/02/15 11:28:48 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// TODO regler le main avec les tests corrects
// TODO adapter la classe Cat pour qu'elle soit comme la classe Dog
int main()
{
    // const Animal *dog = new Dog();
    // const Animal *newDog(dog);
    // const Animal *cat(dog);

    Dog *dog1 = new Dog();
    std::string idea = "idea";

    for (int i = 0; i < 100; ++i)
        dog1->getBrain()->setIdea(idea + std::to_string(i), i);
    for (int i = 0; i < 100; ++i)
        std::cout << "idea = " << dog1->getBrain()->getIdea(i) << std::endl;
    Dog dog2(*dog1);
    delete dog1;
    for (int i = 0; i < 100; ++i)
        std::cout << "dog 2 idea = " << dog2.getBrain()->getIdea(i) << std::endl;
    
    //dog1->getBrain()->setIdea("salut", 0);
    //Dog dog2(*dog1);
    //delete dog1;
    //std::cout << "dog2 idea = " << dog2.getBrain()->getIdea(0) << std::endl;

    
    //const Dog *dog = new Dog();
    //dog->getBrain()->setIdea("bonjour", 0);
    //std::cout << "idea = " << dog->getBrain()->getIdea(0) << std::endl;
    //Dog secondDog(*dog);
    //delete dog;
    //std::cout << "copy idea = " << secondDog.getBrain()->getIdea(0) << std::endl;
    //Dog newDog = *(Dog *)dog;
    //secondDog.setIdea("bonjour", 0);
    //std::cout <<  "idea = " << secondDog.getIdea(0) << std::endl;

    
    //const Animal *cat = new Cat();
    //Animal dog;
    //Animal newDog(dog);
    // const Animal *newDog(dog);
    // const Animal *cat = new Cat();
    // Animal dog;
    // Animal newDog(dog);

    //dog->makeSound();
    //std::cout << "-----------------" << std::endl;
    //delete dog;
    //std::cout << "dog has been destroyed" << std::endl;
    //newDog.makeSound();
    //delete newDog;
    //std::cout << "newDog has been destroyed" << std::endl;
    //newDog->makeSound();
    //cat->makeSound();
    
    //cat = dog;
    //cat->makeSound();

    // const Animal *animals[20];
    // for (int i = 0; i < 20; ++i)
    //{
    //     if (i < 10)
    //         animals[i] = dog;
    //     else
    //         animals[i] = cat;
    // }
    // for (int i = 0; i < 20; ++i)
    //     delete animals[i];
    return 0;
}