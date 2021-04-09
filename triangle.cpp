#include <stdio.h>
#include <math.h>


int check(int a, int b, int c) {
	double d, e, f;
	d = pow(a, 2);
	e = pow(b, 2);
	f = pow(c, 2);
	if ((d + e == f) || (d + f == e) || (e + f == d)) {
		return 1;
	}
	return 0;
}
int print(int a, int b, int c) {
	printf("%d %d %d\n", a, b, c);
	return 0;
}
int main() {
	
	for (int a = 1; a < 101; a++) {
		for (int b = 1; b < 101; b++) {
			for (int c = 1; c < 101; c++) {
				if (check(a, b, c))
					print(a, b, c);

			}
			
		}
		
	}
}