#include <iostream>
#include <cstdlib>
#include "validation.hpp"
#include "enumerations.hpp"
#include "artifact.hpp"
#include "artifactHolder.hpp"

using namespace std;


int main (int argc, char **argv) {
	
	if (argc != 4){
		cout << "Should give exactly 4 arguments" << endl;
		return -1;
	}
	for (int i = 1; i < argc; i++){
		if( !validate(argv[i])){
			cout << "Invalid arguments" << endl;
			return -1;
		}
	}
	int N = atoi(argv[1]);
	if (atoi(argv[2])>2 || atoi(argv[3])>2) {
		cout << "Invalid arguments" << endl;
		return -1;
	}
	Movement mvmt = (Movement)(atoi(argv[2]));
	Condition cond = (Condition)(atoi(argv[3]));
	ArtifactHolder Holder(N, mvmt, cond);
	Holder.auction();
	return 0;
}