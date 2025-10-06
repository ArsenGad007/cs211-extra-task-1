#include "extra-task-1.h"
#include <iostream>
#include <assert.h>

using std::cout, std::endl;

int main()
{
	setlocale(0, "ru");

	cout << "Test seconds_difference:\n";
	assert(DBL_EPSILON > abs(seconds_difference(1800.0, 3600.0) - 1800.0));
	assert(DBL_EPSILON > abs(seconds_difference(3600.0, 1800.0) - -1800.0));
	assert(DBL_EPSILON > abs(seconds_difference(1800.0, 2160.0) - 360.0));
	assert(DBL_EPSILON > abs(seconds_difference(1800.0, 1800.0) - 0.0));

	system("pause");
}