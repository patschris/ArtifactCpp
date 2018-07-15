#include <iostream>
#include "enumerations.hpp"

using namespace std;

void printMovement (Movement m){
	if (m == 0)
		cout << "Impressionism";
	else if (m == 1)
		cout << "Expressionism";
	else
		cout << "Naturalism";
}

void printCondition(Condition c){
	if (c == 0)
		cout << "Bad";
	else if (c == 1)
		cout << "Good";
	else
		cout << "Excellent";
}

void printTechnique(Technique t){
	if (t == 0)
		cout << "Oil";
	else if (t == 1)
		cout << "Aquarelle";
	else
		cout << "Tempera";
}

void printMaterial(Material m){
	if (m == 0)
		cout << "Iron";
	else if (m == 1)
		cout << "Stone";
	else
		cout << "Wood";
}