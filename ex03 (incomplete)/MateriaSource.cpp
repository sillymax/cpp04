/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 02:43:24 by ychng             #+#    #+#             */
/*   Updated: 2024/08/10 03:34:57 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

using std::cout;
using std::endl;

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		memory[i] = NULL;
	cout << "MateriaSource constructed" << endl;
}

MateriaSource::~MateriaSource()
{
	cout << "MateriaSource destructed" << endl;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	cout << "MateriaSource copied" << endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	cout << "MateriaSource assigned" << endl;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)	
	{
		if (memory[i] == NULL)
		{
			memory[i] = materia;
			cout << "Materia " << materia->getType() << " learned" << endl;
			break ;
		}
	}
}

