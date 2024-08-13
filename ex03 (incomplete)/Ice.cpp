/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 01:35:06 by ychng             #+#    #+#             */
/*   Updated: 2024/08/10 02:22:52 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

using std::cout;
using std::endl;

Ice::Ice()
{
	type = "ice";
	cout << "Ice constructed" << endl;
}

Ice::~Ice()
{
	cout << "Ice destructed" << endl;
}

Ice::Ice(const Ice& src)
{
	type = src.getType();
	cout << "Ice copied" << endl;
}

Ice& Ice::operator=(const Ice& src)
{
	cout << "Ice assigned" << endl;
	return *this;
}

string Ice::getType() const
{
	return type;
}

void Ice::setType(string type)
{
	this->type = type;
}

Ice* Ice::clone() const
{
	return new Ice;
}

void Ice::use(ICharacter& target)
{
	cout << "Ice: \""
		 << "* shoots an ice bolt at " + target.getName() + " *\"" << endl;
}