#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"

using namespace std;

mahasiswa::mahasiswa(int id, string nama, int dd, int mm, int yy, 
				string nrp, string departemen, int tahunmasuk,int skslulus,int semesterke)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk),skslulus(skslulus),semesterke(semesterke)
{
	//this->ipk = 0.0;
	//this->semesterke = 1;
	//this->skslulus = 0;

	this->ips = std::vector<float>(14,0);
}

void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

void mahasiswa::setIPS(int semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15) 
	{
		this->ips[semester-1] = ips;
		//this->hitungIPK();
	}

}

float mahasiswa::getIPS(int semester)
{
	if (semester < 15)
		return this->ips[semester-1];

	return -1.0;
}

std::vector<float> mahasiswa::getAllIPS()
{
	return this->ips;}

void mahasiswa::setNrp(string _nrp)//mengganti nrp ke nrp yang baru
{
	this->nrp = _nrp;
}

void mahasiswa::setTahunmasuk(int _tahunmasuk)
{
	this->tahunmasuk = _tahunmasuk;
}

void mahasiswa::setDepartemen(string _departemen)
{
	this->departemen = _departemen;
}
void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

void mahasiswa::setIPK(float ipk)//mengatur nilai ipk
{
	this->ipk = ipk;
}

float mahasiswa::getIPK()//mengambil nilai ipk
{
	return this->ipk;
}






