/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:44:24 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 20:07:45 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

using std::cout;
using std::endl;

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	cout << "Dog constructed" << endl;
}

Dog::~Dog()
{
	delete brain;
	cout << "Dog destructed" << endl;
}

Dog::Dog(const Dog& src) : Animal("Dog")
{
	brain = new Brain(*src.brain);
	cout << "Dog copied" << endl;
}

Dog& Dog::operator=(const Dog& src)
{
	if (this != &src)
	{
		delete brain;
		brain = new Brain(*src.brain);
	}
	cout << "Dog assigned" << endl;
	return *this;
}

void Dog::makeSound() const
{
	cout << "Woof" << endl;
}
