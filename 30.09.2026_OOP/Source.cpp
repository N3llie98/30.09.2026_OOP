#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point() { x = 0; y = 0; }
	Point(int X, int Y) { x = X; y = Y; }
	void print() { cout << "X: " << x << "\nY: " << y; }

	void setX(int X) { x = X; }
	void setY(int Y) { y = Y; }

	int getX() { return x; }
	int getY() { return y; }
};

int main()
{

	return 0;
}