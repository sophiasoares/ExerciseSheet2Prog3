//============================================================================
// Name        : Exercise2.1.cpp
// Author      : Sophia Soares Silva
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void calcSurfaceAndVolumeOfSphereRef(double, double&, double&);
void calcSurfaceAndVolumeOfSpherePtr(double, double*, double*);

int main() {
	double radius = 1.5;
	double surf1;
	double& surf2 = surf1;
	double surf3;
	double vol1;
	double& vol2 = vol1;
	double vol3;

	cout << "Using references: " << endl;
	calcSurfaceAndVolumeOfSphereRef(radius, surf2, vol2);

	cout << "\nUsing pointers: " << endl;
	calcSurfaceAndVolumeOfSpherePtr(radius, &surf3, &vol3);

	return 0;
}

void calcSurfaceAndVolumeOfSphereRef(double radius, double& surface, double& volume) {
	const double PI = 3.1415926536;
	surface = 4 * PI * radius * radius; //4pi r * r
	volume = (4/3) * PI * radius * radius * radius; //(4 / 3)pi r^3
	cout << "Surface: " << surface << endl;
	cout << "Volume: " << volume << endl;

}

void calcSurfaceAndVolumeOfSpherePtr(double radius, double* surface, double* volume) {
	const double PI = 3.1415926536;
	*surface = 4 * PI * radius * radius; //4pi r * r
	*volume = (4/3) * PI * radius * radius * radius; //(4 / 3)pi r^3
	cout << "Surface: " << *surface << endl;
	cout << "Volume: " << *volume << endl;
}

