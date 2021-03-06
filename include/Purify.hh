#ifndef Purify_hh
#define Purify_hh 1

#include <iostream>
#include <cstdio>
#include <complex>
#include <cstring>
#include <valarray>
#include <vector>


using namespace std;

typedef complex<double> ComplexDouble;
typedef unsigned int uint;

#define FILE_VALIDATION_NUMBER_RL2 963258741
#define FILE_VALIDATION_NUMBER_OLD 38198464

#define EPS (1E-15)


int main(int argc, 
		 char ** argv
		 );

bool ValidateMatrixPurify(FILE * file);



#endif
