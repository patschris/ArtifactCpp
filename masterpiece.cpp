#include <iostream>
#include "enumerations.hpp"
#include "artifact.hpp"
#include "masterpiece.hpp"
#include "prints.hpp"

using namespace std;

Masterpiece::Masterpiece(int index, char *name, int crYear, Movement mvmt, Condition cond):Artifact(index, name, crYear), movement(mvmt), condition(cond){
	cout << "Creating an instance of masterpiece" << endl;
}

Masterpiece::~Masterpiece(){
	cout << "Destroying an instance of masterpiece" << endl;
}

void Masterpiece::getInfo(){
	Artifact::getInfo();
	cout << "Masterpiece's movement: ";
	printMovement(movement);
	cout << endl;
	cout << "Masterpiece's condition: ";
	printCondition(condition);
	cout << endl;
}

Movement Masterpiece::getMove(){
	return movement;
}

Condition Masterpiece::getCond(){
	return condition;
}