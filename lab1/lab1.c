#include <stdio.h>
#include <math.h>

double func(double x) { 
	double s = pow(x, 3) - 3 * pow(x, 2) + 9 * x - 8; 
	//double s = pow(x, 3) - 0.4 * pow(x, 2) + 3.2 * x - 1.5;
	return s; 
}

int main() {
	double a, b, c, e;
	int n = 0;
	int vv = 0;
	scanf_s("%lf %lf %lf", &a, &b, &e);
	printf("n\ta\t\tb\t\tx0\t\tf(x0)\n");
	while (fabs(a - b) > e){
		c = (a + b) / 2;
		printf("%d\t%lf\t%lf\t%lf\t%lf\n", n++, a, b, c, func(c));
		if ((func(c)*func(a)) > 0) {
			a = c;
		}
		else if ((func(c)*func(b)) > 0) {
			b = c;
		}
		int some;
	}
	return 0;
}
