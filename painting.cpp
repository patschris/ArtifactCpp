#include <iostream>
#include "enumerations.hpp"
#include "artifact.hpp"
#include "masterpiece.hpp"
#include "painting.hpp"
#include "prints.hpp"

using namespace std;

/*
 * Constructor of class "Painting"
 */
Painting::Painting(int index, char *name, int crYear, Movement mvmt, Condition cond, int l, int w, Technique t):Masterpiece(index, name, crYear, mvmt, cond), length(l), width(w), technique(t) {
	cout << "Creating an instance of painting" << endl;
}

/*
 * Destructor of class "Painting"
 */
Painting::~Painting() {
	cout << "Destroying an instance of painting" << endl;
}

/*
 * Returns information about the painting's dimensions and technique
 */
void Painting::getInfo() {
	Masterpiece::getInfo();
	cout << "Painting's surface: " << length*width << endl << "Painting's technique: ";
	printTechnique(technique);
	cout << endl;
}

/*
 * Painting's evaluation based on program arguments for desired movement and condition
 */
bool Painting::evaluate(Movement desiredMovement, Condition desiredCondition = GOOD) {
	if(desiredMovement == Masterpiece::getMove()) {
		if (desiredCondition == Masterpiece::getCond() || ( desiredCondition == GOOD && Masterpiece::getCond() == EXCELLENT ) ) 
			return true;
	}
	return false;
}