#include<iostream>

using namespace std;

int IsM(int i) {
	if (i % 3 == 0) {
		return i;
	}
	else if (i % 5 == 0) {
		return i;
	}
	else {
		return 0;
	}
}

int main() {
	int sum = 0;
	for (int i = 1; i < 1000; i++) {
		sum = IsM(i) + sum;
	}
	cout << sum;
	return 0;
}

/*
#include <stdio.h>
#include <math.h>

// Calculate the sum of all multiples of 3 or 5 bellow 1000

int main(int argc, char* argv[]) { 
	double mcp1(double n, double m);
	printf("--- %.1f\n",
		mcp1(3.0, 999.0) + mcp1(5.0, 999.0) - mcp1(15.0, 999.0));
	return 0;
}

double mcp1(double n, double m) {
	double floor(double x);
	double fl = floor(m / n);
	return n * fl * (fl + 1) / 2;
}
*/

