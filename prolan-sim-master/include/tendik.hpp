#ifndef __TENDIK_HPP__
#define __TENDIK_HPP__

#include <iostream>
#include "include/person.hpp"

using namespace std;

class tendik : public person {
private:
	string npp;
	string unit;

public:
	tendik(int id, string nama, int dd, int mm, int yy, std::string npp, std::string unit);

	void setNPP(string _npp);
	void setUnit(string unit);
	string getUnit();	
	string getNPP();	
};

#endif
