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

ArtifactHolder::ArtifactHolder(int n, Movement m, Condition c){
	N = n;
	array = new Artifact*[N];
	mvmt = m;
	cond = c;
	srand(time(NULL));
	int random, rYear;
	char *rName = new char[15];
	char *buffer = new char[5];
	for (int i = 0; i < N; i++){
		//painting or sculpture
		random = rand()%2;
		rYear = rand()%318+1700;
		//name
		memset(rName, 0, 15);
		memset(buffer, 0, 5);
		strcpy(rName, "Creator");
		sprintf(buffer,"%d", i+1);
		strcat(rName, buffer);
		//mvmt and condition
		Movement rMove = (Movement)(rand()%3);
		Condition rCond = (Condition)(rand()%3);
		if (random) {
			//create painting
			int length = rand()%100, width=rand()%100;
			Technique t = (Technique)(rand()%3);
			array[i] = new Painting(i+1, rName, rYear, rMove, rCond, length, width, t);
		}
		else {
			//create sculpture
			int volume = rand()%100;
			Material m = (Material)(rand()%3);
			array[i] = new Sculpture(i+1, rName, rYear, rMove, rCond, volume, m);
		}
	}
	delete[] rName;
	delete[] buffer;
}

ArtifactHolder::~ArtifactHolder(){
	for (int i = 0; i < N; i++){
		delete array[i];
	}
	delete[] array;
}

void ArtifactHolder::auction() {
	cout << "-----------------------------------------------" << endl;
	for (int i = 0; i < N; i++){
		array[i]->getIndex();
		array[i]->getInfo();
		cout << "Evaluation: ";
		if (array[i]->evaluate(mvmt, cond)) cout << "Approved" << endl;
		else cout << "Not approved" << endl;
		cout << "-----------------------------------------------" << endl;
	}
}