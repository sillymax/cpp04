/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:58:15 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 18:28:32 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& src);

	void makeSound() const;
};

#endif