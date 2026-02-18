// Mohammed Al-Sheikh
// Cookie.cpp

#include <iomanip>
#include "Clicker.h"

const int CookiesForNextClicker[] {  5,  6,   8,  11,  14, 18, 23, 30, 40, 50, 999999999 };
const int CookiesForNextGrandma[] { 50, 90, 120, 140, 150,                     999999999 };

Clicker::Clicker()
	: cookies(0),
	  clickers(0),
	  grandmas(0)
{
	// Nothing here...
}

void Clicker::ClickCookie()
{
	cookies += 1;
	cookies += clickers;
	cookies += (10 * grandmas);
}

void Clicker::BuyClicker()
{
	if (cookies >= CookiesForNextClicker[clickers])
	{
		cookies -= CookiesForNextClicker[clickers];
		clickers += 1;
	}
}

void Clicker::BuyGrandma()
{
	if (cookies >= CookiesForNextGrandma[grandmas])
	{
		cookies -= CookiesForNextGrandma[grandmas];
		grandmas += 1;
	}
}

bool Clicker::IsThisAWinningGame() const
{
	return (grandmas >= 3) && (clickers >= 5) && (cookies >= 250);
}

std::ostream& operator<<(std::ostream& ostr, const Clicker& rhs)
{
	ostr << std::endl;
	int next_click = 1 + rhs.clickers + (10 * rhs.grandmas);
	ostr << "COOKIES:  " << std::setw(5) << rhs.cookies << std::endl;
	ostr << "   -- Next click will get you " << next_click << " cookie(s)" << std::endl;
	ostr << "CLICKERS: " << std::setw(5) << rhs.clickers << std::endl;
	ostr << "   -- Can buy next clicker with " << CookiesForNextClicker[rhs.clickers] << " cookies" << std::endl;
	ostr << "GRANDMAS: " << std::setw(5) << rhs.grandmas << std::endl;
	ostr << "   -- Can buy next grandma with " << CookiesForNextGrandma[rhs.grandmas] << " cookies" << std::endl;
	return ostr << std::endl;
}
