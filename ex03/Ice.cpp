/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:13:31 by ychng             #+#    #+#             */
/*   Updated: 2024/08/15 11:19:26 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Ice::Ice()
{
    cout << "Ice constructed" << endl;
}

Ice::~Ice()
{
    cout << "Ice destructed" << endl;
}

Ice::Ice(const Ice& src)
{
    (void)src;
    cout << "Ice copied" << endl;
}

Ice& Ice::operator=(const Ice& src)
{
    if (this != &src)
    {
        (void)src;
        cout << "Ice assigned" << endl;
    }
    return *this;
}
