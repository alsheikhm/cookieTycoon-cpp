// Mohammed Al-Sheikh
// Cookie.h

#ifndef CLICKER_H
#define CLICKER_H

#include <ostream>

class Clicker
{
public:
	Clicker();

	void ClickCookie();
	void BuyClicker();
	void BuyGrandma();

	bool IsThisAWinningGame() const;
	
	friend std::ostream& operator << (std::ostream& ostr, const Clicker& rhs);

private:
	int cookies;
	int clickers;
	int grandmas;
};

#endif
