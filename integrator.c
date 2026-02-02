/* YOU MUST MODIFY THIS FILE */
// Read "hw3.h" to learn about the two data types: `Range` and `RangeAnswer`

#include "hw3.h"

double integrate1(Range rng)
{
  
	/* Fill in for Part 1 */
	// calculate the numerical integration of the function func
	// based on the three attributes (`lowerlimit`, `upperlimit`, and `intervals`) of the type `Range`.
	// the return value of function `integrate1` should be the numerical integration (return type is double) 
	int i;				// index of loop below
	double sum = 0.0;	// takes sum of all the intervals based on estimate provided in README.md
	double stepSize = (rng.upperlimit - rng.lowerlimit) / rng.intervals;

	for (i = 0; i < rng.intervals; i++) {
		// to be used in the function to calulate the function value 
		double x = rng.lowerlimit + i * stepSize;
		sum += func(x);
	}
	
	return stepSize * sum;
}

void integrate2(RangeAnswer * rngans)
{
	/* Fill in for Part 2 */
	// run `integrate1` function
	// take the return value from `integrate1` function 
	// and assign it to attribute `answer` of the type `RangeAnswer
	Range rng = {
		rngans -> rng.upperlimit = rngans -> rng.upperlimit,
		rngans -> rng.lowerlimit = rngans -> rng.lowerlimit,
		rngans -> rng.intervals = rngans -> rng.intervals
	};

	rngans -> answer = integrate1(rng);
}
