// Abondoned body at an angle  a = arcsin(gT/2V), Cin user T and V.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double T, V, param, result;
    const double Pi = asin(1.0), g = 9.8;
	cout << "Enters numbers for T and V \n"; cin >> V >> T;
	cout << endl;

	if (1 < fabs(g * T / (2 * V)))
		cout << "Incorrect" << endl;
	else {
		param = asin(g * T / (2 * V));
		cout << "Angle = " << param * (90 / Pi) << endl;
	}
	system("PAUSE");
	return 0;

}

