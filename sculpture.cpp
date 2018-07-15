#include <iostream>
#include "enumerations.hpp"
#include "prints.hpp"
#include "artifact.hpp"
#include "masterpiece.hpp"
#include "sculpture.hpp"

using namespace std;

Sculpture::Sculpture(int index, char *name, int crYear, Movement mvmt, Condition cond, int v, Material m):Masterpiece(index, name, crYear, mvmt, cond), volume(v), material(m){
	cout << "Creating an instance of sculpture" << endl;
}

Sculpture::~Sculpture(){
	cout << "Destroying an instance of sculpture" << endl;
}

void Sculpture::getInfo(){
	Masterpiece::getInfo();
	cout << "Sculpture's volume: " << volume << endl;
	cout << "Sculpture's material: ";
	printMaterial(material);
	cout << endl;
}

bool Sculpture::evaluate(Movement desiredMovement, Condition desiredCondition = EXCELLENT){
	if(desiredMovement == Masterpiece::getMove() && desiredCondition == Masterpiece::getCond()) 
		return true;
	return false;
}
