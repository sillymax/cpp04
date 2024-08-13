/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 02:00:54 by ychng             #+#    #+#             */
/*   Updated: 2024/08/10 02:12:33 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

using std::cout;
using std::endl;

AMateria::AMateria()
{
	cout << "AMateria constructed" << endl;
}

AMateria::AMateria(const AMateria& src)
{
	type = src.getType();
	cout << "AMateria copied" << endl;
}

AMateria::~AMateria()
{
	cout << "AMateria destructed" << endl;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	cout << "AMateria assigned" << endl;
	return *this;
}

AMateria::AMateria(const string& type) : type(type)
{
	cout << "AMateria with " + type + " constructed" << endl;
}

const string& AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	cout << "AMateria used on " + target.getName() << endl;
}
