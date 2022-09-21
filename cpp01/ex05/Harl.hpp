#include <string>

class Harl
{
		
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	// Constructor/Destructor
	 Harl(void);
	~ Harl(void);

	void complain(std::string level);

};
