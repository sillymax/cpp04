/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:56:52 by ychng             #+#    #+#             */
/*   Updated: 2024/08/15 11:17:38 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

using std::string;

class AMateria
{
public:
    AMateria();
    virtual ~AMateria();
    AMateria(const AMateria& src);
    AMateria& operator=(const AMateria& src);

    AMateria(const string& type);
    const string& getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
private:
    string type;
    
};

#endif