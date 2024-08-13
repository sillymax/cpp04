/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 00:29:11 by ychng             #+#    #+#             */
/*   Updated: 2024/08/10 02:06:53 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>

using std::string;

class AMateria
{
public:
	AMateria();
	AMateria(const AMateria& src);
	~AMateria();
	AMateria& operator=(const AMateria& src);

	AMateria(const string& type);
	const string& getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	string type;
};

#endif