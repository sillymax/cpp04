/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:08:50 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 23:23:25 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const short numAnimals = 10;
	Animal* animals[numAnimals];

	for (int i = 0; i < numAnimals; i++)
	{
		if (i < numAnimals / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < numAnimals; i++)
	{
		cout << animals[i]->getType() << endl;
		animals[i]->makeSound();
	}

	for (int i = 0; i < numAnimals; i++)
		delete animals[i];
	

	Cat cat1;
	Cat cat2 = cat1;

	cout << cat1.getBrain() << endl;
	cout << cat2.getBrain() << endl;
	return 0;
}

