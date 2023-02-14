/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:56:57 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 12:16:48 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //const Animal *j = new Dog();
    //const Animal *i = new Cat();
    //delete j; // should not create a leak
    //delete i;

    const Animal *dog = new Dog();
    const Animal *newDog(dog);
    const Animal *cat(dog);
    //const Animal *cat = new Cat();

    dog->makeSound();
    newDog->makeSound();
    cat->makeSound();
    
    //cat = dog;
    //cat->makeSound();

    //const Animal *animals[20];
    //for (int i = 0; i < 20; ++i)
    //{
    //    if (i < 10)
    //        animals[i] = dog;
    //    else
    //        animals[i] = cat;
    //}
    //for (int i = 0; i < 20; ++i)
    //    delete animals[i];
    return 0;
}