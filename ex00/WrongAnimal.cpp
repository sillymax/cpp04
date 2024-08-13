/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:02:35 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 18:28:14 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal()
{
	cout << "WrongAnimal constructed" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructed" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	(void)src;
	cout << "WrongAnimal coped" << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	(void)src;
	cout << "WrongAnimal assigned" << endl;
	return *this;
}

void WrongAnimal::makeSound() const
{
	cout << "WrongAnimal sound"	 << endl;
}
