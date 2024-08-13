#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <string.h>

using std::string;

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& src);
	~Ice();

	Ice& operator=(const Ice& src);

	string getType() const;
	void setType(string type);

	Ice* clone() const;
	void use(ICharacter& target);
	
};

#endif