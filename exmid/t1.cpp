#include<iostream>
using namespace std;

#define GALLON 4.5461
#define KILO 1.6093

int main(){
	float litperkilo,pettroleum,miles;
	float liter;
    float kilomater,perKilo;
    float fuelG;
	cout << "Input Pettroleum used : ";cin >> pettroleum;
	cout << "Input miles used : ";cin >> miles;
	fuelG = miles/pettroleum;
	cout << "(1) Fuel economy : " << fuelG <<  " Miles per gallon (MGP)" << endl;
	kilomater = miles*KILO;
	liter = pettroleum*GALLON;
	litperkilo = liter/kilomater;
	cout << "(2) The car will use " << litperkilo << " Liter per kilomater"<< endl;
	perKilo = kilomater/liter;
	cout << "(3) Fuel economy : " << perKilo <<  " kilometers per litter (km/L)" << endl;
	cout << kilomater << endl;
	cout << liter;
}