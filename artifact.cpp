#include <iostream>
#include <cstring>
#include "enumerations.hpp"
#include "artifact.hpp"

using namespace std;

/*
 * Constructor of class "Artifact"
 */
Artifact::Artifact(int i, char *name, int crYear) : index(i), year(crYear){
	creator = new char[15];
	strcpy(creator, name);
	cout << "Creating an instance of artifact" << endl;
}

/*
 * Destructor of class "Artifact"
 */
Artifact::~Artifact(){
	delete[] creator;
	cout << "Destroying an instance of artifact" << endl;
}

/*
 * Returns information about the artifact's creator and the year of creation
 */
void Artifact::getInfo(){
	cout << "Artifact's creator: " << creator << endl;
	cout << "Year of creation: " << year << endl;
}

/*
 * Returns artifact's index
 */
void Artifact::getIndex(){
	cout << "Artifact's index number: " << index << endl;
}

/*
 * Returns artifact's evaluation
 */
bool Artifact::evaluate(Movement m, Condition c) {
	return true;
}