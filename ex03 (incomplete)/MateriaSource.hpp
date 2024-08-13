/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 03:05:15 by ychng             #+#    #+#             */
/*   Updated: 2024/08/10 03:28:52 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef materiasource_hpp
# define materiasource_hpp

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& src);
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& src);
	void learnMateria(AMateria* material);
	AMateria* createMateria(const string& type);
private:
	AMateria* memory[4];
}

#endif