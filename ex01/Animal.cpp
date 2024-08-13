/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:22:56 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 18:27:14 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

using std::cout;
using std::endl;

Animal::Animal()
{
	cout << "Animal constructed" << endl;
}

Animal::Animal(const string& type)
{
	setType(type);
	cout << "Animal constructed" << endl;
}

Animal::~Animal()
{
	cout << "Animal destructed" << endl;
}

Animal::Animal(const Animal& src)
{
	cout << "Animal copied" << endl;
	setType(src.type);
}

Animal& Animal::operator=(const Animal& src)
{
	cout << "Animal assigned" << endl;
	setType(src.type);
	return *this;
}

void Animal::setType(const string& type)
{
	this->type = type;
	cout << "Set type " + type << endl;
}

string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	cout << "Animal" << endl;
}
