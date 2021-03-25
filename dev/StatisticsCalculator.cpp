#include <iostream>
#include <math.h>
using namespace std;

class StatisticsCalculator{
	private:
	double sum = 0.0, square_sum = 0.0;
	double average = 0.0, square_average = 0.0;
	double variance = 0.0, standard_deviation = 1.0;
	int size = 0;
	public:
	void AddData(double data){
	sum += data;
	square_sum += (data*data);
	size++;
	}
	double Sum(){ return sum; }
	double Ave(){ return sum/size; }
	double SquareAve(){ return square_sum/size; }
	double Variance(){ return square_average - pow(average, 2.0); }
	double StandardDeviation(){ return sqrt(variance); }
	double Standardize(double data){ return (data - average)/standard_deviation; }
	void AllCalcu(){
		average = Ave();
		square_average = SquareAve();
		variance = Variance();
		standard_deviation = StandardDeviation();
	}
};

int main(){
	double datas[] = {0, 1, 2, 3, 4, 5 , 6, 7, 8, 9 ,10};
	StatisticsCalculator sc;

	for(auto data: datas)sc.AddData(data);
	sc.AllCalcu();
	cout << "sum" << endl;
	cout << sc.Sum() << endl;
	cout << "average" << endl;
	cout << sc.Ave() << endl;
	cout << "square_average" << endl;
	cout << sc.SquareAve() << endl;
	cout << "variance" << endl;
	cout << sc.Variance() << endl;
	cout << "standard_deviation" << endl;
	cout << sc.StandardDeviation() << endl;
	cout << "standardized datas" << endl;
	for(auto data: datas)cout << "data: " << sc.Standardize(data) << endl;
	
	return 0;
}