/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:58:42 by ychng             #+#    #+#             */
/*   Updated: 2024/08/15 11:16:34 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

AMateria::AMateria()
{
    cout << "AMateria constructed" << endl;
}

AMateria::~AMateria()
{
    cout << "AMateria destructed" << endl;
}

AMateria::AMateria(const AMateria& src)
{
    (void)src;
    cout << "AMateria copied" << endl;
}

AMateria& AMateria::operator=(const AMateria& src)
{
    if (this != &src)
    {
        (void)src;
        cout << "AMateria assigned" << endl;
    }
    return *this;
}

AMateria::AMateria(const string& type)
{
    cout << "Type assigned" << endl;
    this->type = type;
}

const string& AMateria::getType() const
{
    return type;
}

// Non pure virtual method must have a default implementation to be overridden
void AMateria::use(ICharacter& target)
{}

