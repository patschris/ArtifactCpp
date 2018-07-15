#include <iostream>
#include "enumerations.hpp"
#include "artifact.hpp"
#include "masterpiece.hpp"
#include "prints.hpp"

using namespace std;

/*
 * Constructor of class "Masterpiece"
 */
Masterpiece::Masterpiece(int index, char *name, int crYear, Movement mvmt, Condition cond):Artifact(index, name, crYear), movement(mvmt), condition(cond){
	cout << "Creating an instance of masterpiece" << endl;
}

/*
 * Destructor of class "Masterpiece"
 */
Masterpiece::~Masterpiece(){
	cout << "Destroying an instance of masterpiece" << endl;
}

/*
 * Returns information about the masterpiece's creator, the year of creation, the movement and the condition
 */
void Masterpiece::getInfo(){
	Artifact::getInfo();
	cout << "Masterpiece's movement: ";
	printMovement(movement);
	cout << endl << "Masterpiece's condition: ";
	printCondition(condition);
	cout << endl;
}

/*
 * Returns Masterpiece's movement
 */
Movement Masterpiece::getMove(){
	return movement;
}

/*
 * Returns Masterpiece's condition
 */
Condition Masterpiece::getCond(){
	return condition;
}