#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

using namespace std;

class mahasiswa : public person {
private:
	string nrp;
	string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	vector<float> ips;

public:
	mahasiswa(int id, string nama, int dd, int mm, int yy,
					string nrp, string departemen, int tahunmasuk,int skslulus,int semesterke);

	void setNrp(string _nrp);
	string getNrp(){return nrp;};
	void setDepartemen(string _departemen);
	string getDepartemen(){return departemen;};
	void setTahunmasuk(int _tahunmasuk);
	int getTahunmasuk(){return tahunmasuk;};

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	vector<float> getAllIPS();

	void setIPK(float ipk);
	float getIPK();
};

#endif
