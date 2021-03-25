#ifndef scH
#define scH
#include <math.h>

class StatisticsCalculator{
private:
	double sum = 0.0, square_sum = 0.0;
	double average = 0.0, square_average = 0.0;
	double variance = 0.0, standard_deviation = 1.0; 
	int size = 0;
public:	
	double Sum();
	double Ave();
	double SquareAve();
	double Variance();
	double StandardDeviation();
	double Standardize(double);
	void AddData(double);
	void AllCalcu();
};
#endif