/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 02:17:33 by ychng             #+#    #+#             */
/*   Updated: 2024/08/10 02:34:44 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

using std::cout;
using std::endl;

Cure::Cure()
{
	cout << "Cure constructed" << endl;
}

Cure::Cure(const Cure& src)
{
	type = src.getType();
	cout << "Cure copied" << endl;
}

Cure::~Cure()
{
	cout << "Cure destructed" << endl;
}

Cure& Cure::operator=(const Cure& src)
{
	cout << "Cure assigned" << endl;
}

void Cure::setType(const string &type)
{
	this->type = type;
}

string Cure::getType() const
{
	return type;
}

Cure* Cure::clone() const
{
	return new Cure();
}

void use(ICharacter& target)
{
	cout << "Cure: \""
		 << "* heals " + target.getName() + "'s wounds *" << endl;
}