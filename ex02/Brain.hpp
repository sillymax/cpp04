/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:23:52 by ychng             #+#    #+#             */
/*   Updated: 2024/08/09 23:14:44 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

using std::string;

class Brain
{
public:
	Brain();
	Brain(const Brain& src);
	~Brain();

	Brain& operator=(const Brain& src);
private:
	string ideas[100];
};

#endif