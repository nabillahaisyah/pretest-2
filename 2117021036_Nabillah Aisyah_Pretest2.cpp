#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	/* Nama  : Nabillah Aisyah
	   Kelas : D
	   NPM   : 2117051036
	*/
	
	// Deklarasi Variabel
	
	double beratbadan;
	double tinggibadan;
	double tinggi2;
	
	//input//
	
	cout<<"Silakan Isi Data di bawah ini!"<<endl;
	cout<<"Berat Badan\t\t:";
	cin>>beratbadan;
	cout<<"Tinggi Badan\t\t:";
	cin>>tinggibadan;
	
	//output//
	
	cout<<endl;
	cout<<"Berikut hasil BMI Anda!"<<endl;
	tinggi2 = tinggibadan*tinggibadan;
	cout<<"BMI (Body Mass Index)\t:"<<beratbadan/tinggi2<<endl;
	
	return 0;
}
