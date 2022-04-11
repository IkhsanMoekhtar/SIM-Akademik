#ifndef __DOSEN_HPP__
#define __DOSEN_HPP__

#include <iostream>
#include "include/person.hpp"

using namespace std;

class dosen : public person 
{
private:
	string npp;
	string departemen;
	string pendidikan;

public:
	dosen(int id, string nama, int dd, int mm, int yy, string npp, string departemen, string pendidikan);


	void setPendidikan(string pendidikan);
	string getPendidikan();
	

	void setNpp(string npp);
	string getNpp();
	
	void setDepartemen(string departemen);
	string getDepartemen();
	
	
};

#endif 
