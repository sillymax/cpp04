/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:26:19 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 23:14:37 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

using std::cout;
using std::endl;

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "Idea"; 
	cout << "Brain constructed" << endl;
}

Brain::~Brain()
{
	cout << "Brain destructed" << endl;
}

Brain::Brain(const Brain& src)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	cout << "Brain copied" << endl;
}

Brain& Brain::operator=(const Brain& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	}
	cout << "Brain assigned" << endl;
	return *this;
}
