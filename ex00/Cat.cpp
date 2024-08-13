/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:44:33 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 18:31:00 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Cat::Cat() : Animal("Cat")
{
	cout << "Cat constructed" << endl;
}

Cat::~Cat()
{
	cout << "Cat destructed" << endl;
}

Cat::Cat(const Cat& src) : Animal("Cat")
{
	(void)src;
	cout << "Cat copied" << endl;
}

Cat& Cat::operator=(const Cat& src)
{
	(void)src;
	cout << "Cat assigned" << endl;
	return *this;
}

void Cat::makeSound() const
{
	cout << "Meow" << endl;
}
