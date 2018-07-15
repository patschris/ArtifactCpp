#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cstring>
#include "enumerations.hpp"
#include "artifact.hpp"
#include "artifactHolder.hpp"
#include "masterpiece.hpp"
#include "painting.hpp"
#include "sculpture.hpp"

using namespace std;

/*
 * Constructor of class "ArtifactHolder"
 * Creates an array of pointers to artifacts
 * 
 */
ArtifactHolder::ArtifactHolder(int n, Movement m, Condition c){
	N = n;
	array = new Artifact*[N];
	mvmt = m;
	cond = c;
	srand(time(NULL));

	for (int i = 0; i < N; i++) {
 		/* 0:Painting, 1: Sculpture */
		int random = rand()%2;
		/* Random year of creation */
		int rYear = rand()%318+1700; 
		/* Creator's name */
		char *rName = new char[15];
		char *buffer = new char[5];
		strcpy(rName, "Creator");
		sprintf(buffer,"%d", i+1);
		strcat(rName, buffer);
		/* Random movement and condition */
		Movement rMove = (Movement)(rand()%3); /* 0:Impessionism, 1:Expressionism, 2:Naturalism */
		Condition rCond = (Condition)(rand()%3); /* 0:Bad, 1:Good, 2:Excellent */
		if (random) {
			/* Creating Painting with random dimension and technique */
			int length = rand()%100, width=rand()%100;
			Technique t = (Technique)(rand()%3); /* 0:Oil, 1:Aquarelle, 2:Tempera */
			array[i] = new Painting(i+1, rName, rYear, rMove, rCond, length, width, t);
		}
		else {
			/* Creating Sculpture with random colume and material */
			int volume = rand()%100;
			Material m = (Material)(rand()%3); /* 0: Iron, 2:Stone, 3:Wood */
			array[i] = new Sculpture(i+1, rName, rYear, rMove, rCond, volume, m);
		}
		delete[] rName;
		delete[] buffer;
	}
}

/*
 * Destructor of class "ArtifactHolder"
 * Deletes the array of Artifacts
 */
ArtifactHolder::~ArtifactHolder(){
	for (int i = 0; i < N; i++)
		delete array[i];
	delete[] array;
}

/*
 * Returns information about artifacts regardless their type (Paintings, Sculptures)
 */
void ArtifactHolder::auction() {
	cout << "-----------------------------------------------" << endl;
	for (int i = 0; i < N; i++){
		array[i]->getIndex();
		array[i]->getInfo();
		cout << "Evaluation: ";
		if (array[i]->evaluate(mvmt, cond)) 
			cout << "Approved" << endl;
		else 
			cout << "Not approved" << endl;
		cout << "-----------------------------------------------" << endl;
	}
}