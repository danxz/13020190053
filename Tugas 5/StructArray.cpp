#include <stdio.h>
#define n 3
struct body
{
	double p[3];
	double v[3];
	double a[3];
	double radius;
	double massa;
};

struct body bodies[n];

int main()
{
	int a, b;
	for(a = 0;a < n; a++)
	{
		for(b = 0;b < 3;b++)
		{
			bodies[a].p[b] = 0;
			bodies[a].v[b] = 0;
			bodies[a].a[b] = 0;
		}
		bodies[a].massa = 0;
		bodies[a].radius = 1.0;
	}
	return 0;
}
