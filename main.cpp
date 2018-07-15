#include <iostream>
#include <cstdlib>
#include "validation.hpp"
#include "enumerations.hpp"
#include "artifact.hpp"
#include "artifactHolder.hpp"

using namespace std;

int main (int argc, char **argv) {
	/* Should give exactly four arguments */
	if (argc != 4) {
		cout << "Should give exactly 3 arguments (./artifact <N> <mvmt> <cond>)" << endl;
		cout << "<N> : The amount of artifacts" << endl;
		cout << "<mvmt> : The movement of the artifacts (0:Impessionism, 1:Expressionism, 2:Naturalism)" << endl;
		cout << "<cond> : The condition of the artifacts (0:Bad, 1:Good, 2:Excellent)" << endl;
		return -1;
	}
	/* These four arguments should be unsigned integers */
	for (int i = 1; i < argc; i++) {
		if( !validate(argv[i])){
			cout << "Invalid arguments" << endl;
			return -1;
		}
	}
	/* The arguments <mvmt> and <cond> should be between 0 and 2 */
	int N = atoi(argv[1]);
	if (atoi(argv[2])>2 || atoi(argv[3])>2) {
		cout << "Arguments out of range" << endl;
		return -1;
	}
	Movement mvmt = (Movement)(atoi(argv[2]));
	Condition cond = (Condition)(atoi(argv[3]));
	/* Auction returns information about the artifacts */
	ArtifactHolder holder(N, mvmt, cond);
	holder.auction();
	return 0;
}