#include <iostream>

#include "include/dosen.hpp"

using namespace std;

dosen::dosen(int id, string nama, int dd, int mm, int yy, string npp, string departemen, string pendidikan)
		: person(id, nama, dd, mm, yy), npp(npp), departemen(departemen), pendidikan(pendidikan)
{
}

void dosen::setPendidikan(string pendidikan)
{
	this->pendidikan = pendidikan;
}

string dosen::getPendidikan()
{
	return this->pendidikan;
}

void dosen::setNpp(string npp)//fungsi untuk mengubah npp sesuai parameter
{
	this->npp = npp;
}

string dosen::getNpp()
{
	return this->npp;
}

void dosen::setDepartemen(string departemen)
{
	this->departemen = departemen;
}
string dosen::getDepartemen()
{
	return this->departemen;
}