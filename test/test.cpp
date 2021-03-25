#include "StatisticsCalculator.hpp"
#include <iostream>
using namespace std;

int main(){
        double datas[] = {0, 1, 2, 3, 4, 5 , 6, 7, 8, 9 ,10};
        StatisticsCalculator sc;

        for(int data: datas)sc.AddData(data);
        sc.AllCalcu();
        cout << "sum: ";
        cout << sc.Sum() << endl;
        cout << "average: ";
        cout << sc.Ave() << endl;
        cout << "square_average: ";
        cout << sc.SquareAve() << endl;
        cout << "variance: ";
        cout << sc.Variance() << endl;
        cout << "standard_deviation: ";
        cout << sc.StandardDeviation() << endl;
        cout << "standardized datas: ";
        for(int data: datas)cout << "data: " << sc.Standardize((double)data) << endl;

        return 0;
}
