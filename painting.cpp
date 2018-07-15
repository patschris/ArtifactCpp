#include <iostream>
#include "enumerations.hpp"
#include "artifact.hpp"
#include "masterpiece.hpp"
#include "painting.hpp"
#include "prints.hpp"

using namespace std;

Painting::Painting(int index, char *name, int crYear, Movement mvmt, Condition cond, int l, int w, Technique t):Masterpiece(index, name, crYear, mvmt, cond), length(l), width(w), technique(t) {
	cout << "Creating an instance of painting" << endl;
}

Painting::~Painting(){
	cout << "Destroying an instance of painting" << endl;
}

void Painting::getInfo(){
	Masterpiece::getInfo();
	cout << "Painting's surface: " << length*width << endl;
	cout << "Painting's technique: ";
	printTechnique(technique);
	cout << endl;
}

bool Painting::evaluate(Movement desiredMovement, Condition desiredCondition = GOOD){
	if(desiredMovement == Masterpiece::getMove()){
		if (desiredCondition == Masterpiece::getCond() || ( desiredCondition == GOOD && Masterpiece::getCond() == EXCELLENT ) ) 
			return true;
	}
	return false;
}