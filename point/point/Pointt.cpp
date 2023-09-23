#include "Pointt.h"
#include "pointt.h"
using namespace std;


point::point()
{
	x = 0;
	y = 0;
};
point::point(float xcoor, float ycoor)
{
	x = xcoor;
	y = ycoor;
};
void point::settingx(float xcoor)
{
	x = xcoor;
};
void point::settingy(float ycoor)
{
	y = ycoor;
};
float point::gettingx()
{
	return x;
};
float point::gettingy()
{
	return y;
};
void point::output()
{
	cout << x << " , " << y << endl;
};
float point::distance(point num2)
{
	float distance;
	distance = pow((pow(x, 2) - pow(num2.x, 2)) + (pow(y, 2) - pow(num2.y, 2)), 0.5);
	return distance;
};
point::~point() {
}

point center(point*& C, int n)
{
	float sumx = 0; float sumy = 0; point center;
	for (int i = 0; i < n; i++)
	{
		sumx += C[i].gettingx();
		sumy += C[i].gettingy();
	}
	center.settingx(sumx / n);
	center.settingy(sumy / n);
	return center;
}

void closest(point*& A, int sizeA, point*& B, int sizeB, point p)
{
	float distance1, distance2;
	distance1 = pow((pow(p.gettingx() - center(A, sizeA).gettingx(), 2)) + (pow(p.gettingy() - center(A, sizeA).gettingy(), 2)), 0.5);
	distance2 = pow((pow(p.gettingx() - center(B, sizeB).gettingx(), 2)) + (pow(p.gettingy() - center(B, sizeB).gettingy(), 2)), 0.5);
	if (distance1 > distance2)
		cout << "Point is in cluster A" << endl;
	if (distance1 < distance2)
		cout << "Point is in cluster B" << endl;
	if (distance1 == distance2)
		cout << "Equal distances" << endl;
}

int main()
{
	point* A; point* B; point* P; int n1, n2;
	cout << "Size of Cluster A: ";
	cin >> n1;
	A = new point[n1];
	cout << "Size of cluster B: ";
	cin >> n2;
	B = new point[n2];
	srand(time(0));
	for (int i = 0; i < n1; i++)
	{
		A[i].settingx(rand() % 19 + 71);
		A[i].settingy(rand() % 19 + 71);
	}
	for (int i = 0; i < n2; i++)
	{
		B[i].settingx(rand() % 19 + 21);
		B[i].settingy(rand() % 19 + 21);
	}
	P = new point[20];
	for (int i = 0; i < 20; i++)
	{
		P[i].settingx(rand() % 94 + 6);
		P[i].settingy(rand() % 94 + 6);
		cout << "point " << i + 1 << ": ";  closest(A, n1, B, n2, P[i]);
	}