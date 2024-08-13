/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:44:24 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 18:31:10 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

using std::cout;
using std::endl;

Dog::Dog() : Animal("Dog")
{
	cout << "Dog constructed" << endl;
}

Dog::~Dog()
{
	cout << "Dog destructed" << endl;
}

Dog::Dog(const Dog& src) : Animal("Dog")
{
	(void)src;
	cout << "Dog copied" << endl;
}

Dog& Dog::operator=(const Dog& src)
{
	(void)src;
	cout << "Dog assigned" << endl;
	return *this;
}

void Dog::makeSound() const
{
	cout << "Woof" << endl;
}
