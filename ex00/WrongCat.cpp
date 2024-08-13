/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:09:22 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 18:32:00 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

using std::cout;
using std::endl;

WrongCat::WrongCat() : WrongAnimal()
{
	cout << "WrongCat constructed" << endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructed" << endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal()
{
	(void)src;
	cout << "WrongCat copied" << endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	(void)src;
	cout << "WrongCat assigned" << endl;
	return *this;
}

void WrongCat::makeSound() const
{
	cout << "WrongCat sound" << endl;
}
