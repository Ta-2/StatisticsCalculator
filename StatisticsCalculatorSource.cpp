#include "StatisticsCalculator.hpp"

void StatisticsCalculator::AddData(double data){
	sum += data;
	square_sum += (data*data);
	size++;
}
double StatisticsCalculator::Sum(){ return sum; }
double StatisticsCalculator::Ave(){ return sum/size; }
double StatisticsCalculator::SquareAve(){ return square_sum/size; }
double StatisticsCalculator::Variance(){ return square_average - pow(average, 2.0); }
double StatisticsCalculator::StandardDeviation(){ return sqrt(variance); }
double StatisticsCalculator::Standardize(double data){ return (data - average)/standard_deviation; }
void StatisticsCalculator::AllCalcu(){
	average = Ave();
	square_average = SquareAve();
	variance = Variance();
	standard_deviation = StandardDeviation();
}
