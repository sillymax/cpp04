/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:44:36 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 03:28:54 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

using std::string;

// Abstract
class Animal
{
public:
	Animal(); // Default constructor
	explicit Animal(const string& type);
	Animal(const Animal& src); // Copy constructor
	virtual ~Animal(); // Destructor

	Animal& operator=(const Animal& src); // Copy assignement

	string getType() const;
	void setType(const string& type);

	virtual void makeSound() const;
protected:
	string type;
};

#endif