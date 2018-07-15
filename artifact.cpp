#include <iostream>
#include <cstring>
#include "enumerations.hpp"
#include "artifact.hpp"

using namespace std;

Artifact::Artifact(int i, char *name, int crYear) : index(i), year(crYear){
	creator = new char[15];
	strcpy(creator, name);
	cout << "Creating an instance of artifact" << endl;
}

Artifact::~Artifact(){
	delete[] creator;
	cout << "Destroying an instance of artifact" << endl;
}

void Artifact::getInfo(){
	cout << "Artifact's creator: " << creator << endl;
	cout << "Year of creation: " << year << endl;
}

void Artifact::getIndex(){
	cout << "Artifact's index number: " << index << endl;
}

bool Artifact::evaluate(Movement m, Condition c) {
	return true;
}