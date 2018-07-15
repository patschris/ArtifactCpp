#include <cstring>
#include <cctype>

/*
 * Argumenents should be unsigned integers
 */
bool validate (char *a) {
	for (unsigned int i = 0; i < strlen(a); i++){
		if(!isdigit(a[i])){
			return false;
		}
	}
	return true;
}