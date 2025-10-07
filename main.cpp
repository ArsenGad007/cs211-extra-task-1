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

	cout << "Test hours_difference:\n";
	assert(DBL_EPSILON > abs(hours_difference(1800.0, 3600.0) - 0.5));
	assert(DBL_EPSILON > abs(hours_difference(3600.0, 1800.0) - -0.5));
	assert(DBL_EPSILON > abs(hours_difference(1800.0, 2160.0) - 0.1));
	assert(DBL_EPSILON > abs(hours_difference(1800.0, 1800.0) - 0.0));

	cout << "Test to_float_hours:\n";
	assert(DBL_EPSILON > abs(to_float_hours(0, 15, 0) - 0.25));
	assert(DBL_EPSILON > abs(to_float_hours(2, 45, 9) - 2.7525));
	assert(DBL_EPSILON > abs(to_float_hours(1, 0, 36) - 1.01));

	system("pause");
}