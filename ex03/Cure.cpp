/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:21:08 by ychng             #+#    #+#             */
/*   Updated: 2024/08/15 11:23:04 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Cure::Cure()
{
    cout << "Cure constructed" << endl;
}

Cure::~Cure()
{
    cout << "Cure destructed" << endl;
}

Cure::Cure(const Cure& src)
{
    (void)src;
    cout << "Cure copied" << endl;
}

Cure& Cure::operator=(const Cure& src)
{
    if (this != &src)
    {
        (void)src;
        cout << "Cure assigned" << endl;
    }
    return *this;
}