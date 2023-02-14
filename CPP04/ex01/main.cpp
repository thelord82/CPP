/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:56:57 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 16:46:42 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// TODO regler le main avec les tests corrects
// TODO adapter la classe Cat pour qu'elle soit comme la classe Dog
int main()
{
    // const Animal *j = new Dog();
    // const Animal *i = new Cat();
    // delete j; // should not create a leak
    // delete i;

    // const Animal *dog = new Dog();
    // const Animal *newDog(dog);
    // const Animal *cat(dog);
    const Dog *dog = new Dog();
    // const Animal *newDog(dog);
    Dog           chien;
    const Animal *newDog = new Dog(chien);
    // const Animal *cat = new Cat();
    // Animal dog;
    // Animal newDog(dog);

    dog->makeSound();
    newDog->makeSound();
    std::cout << "-----------------" << std::endl;
    delete dog;
    std::cout << "dog has been destroyed" << std::endl;
    delete newDog;
    std::cout << "newDog has been destroyed" << std::endl;
    // newDog->makeSound();
    // cat->makeSound();

    // cat = dog;
    // cat->makeSound();

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