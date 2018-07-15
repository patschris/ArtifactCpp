#include <iostream>
#include "enumerations.hpp"
#include "prints.hpp"
#include "artifact.hpp"
#include "masterpiece.hpp"
#include "sculpture.hpp"

using namespace std;

/*
 * Constructor of class "Sculpture"
 */
Sculpture::Sculpture(int index, char *name, int crYear, Movement mvmt, Condition cond, int v, Material m):Masterpiece(index, name, crYear, mvmt, cond), volume(v), material(m){
	cout << "Creating an instance of sculpture" << endl;
}

/*
 * Destructor of class "Sculpture"
 */
Sculpture::~Sculpture(){
	cout << "Destroying an instance of sculpture" << endl;
}


/*
 * Returns information about the sculpture's volume and material
 */
void Sculpture::getInfo(){
	Masterpiece::getInfo();
	cout << "Sculpture's volume: " << volume << endl << "Sculpture's material: ";
	printMaterial(material);
	cout << endl;
}

/*
 * Sculpture's evaluation based on program arguments for desired movement and condition
 */
bool Sculpture::evaluate(Movement desiredMovement, Condition desiredCondition = EXCELLENT) {
	if(desiredMovement == Masterpiece::getMove() && desiredCondition == Masterpiece::getCond()) 
		return true;
	return false;
}