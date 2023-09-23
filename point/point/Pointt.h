#include <iostream>
#include <cmath>
using namespace std;


class point{

private:
	float x;
	float y;
public:
	point();
	point(float, float);
	void settingx(float);
	void settingy(float);
	float gettingx();
	float gettingy();
	void output();
	float distance(point);
	~point();
};
