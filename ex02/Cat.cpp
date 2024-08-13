/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:44:33 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 23:16:16 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	cout << "Cat constructed" << endl;
}

Cat::~Cat()
{
	delete brain;
	cout << "Cat destructed" << endl;
}

Cat::Cat(const Cat& src) : Animal("Cat")
{
	brain = new Brain(*src.brain);
	cout << "Cat copied" << endl;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src)
	{
		delete brain;
		brain = new Brain(*src.brain);
	}
	cout << "Cat assigned" << endl;
	return *this;
}

void Cat::makeSound() const
{
	cout << "Meow" << endl;
}

Brain* Cat::getBrain() const
{
	return brain;
}