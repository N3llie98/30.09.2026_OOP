#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point() { x = 0; y = 0; }
	Point(int X, int Y) { x = X; y = Y; }

	void print()const { cout << "const X: " << x << "\nconst Y: " << y << endl << endl; } //const method works for both const and non-const objects, but non-const objects will prioritise the non-cost version of the method if it's available
	void print() { cout << "X: " << x << "\nY: " << y << endl << endl; } //перегрузка функцій for const + non-const objects

	void setX(int X) { x = X; }
	void setY(int Y) { y = Y; }

	int getX()const { return x; } //method is now constant and CANNOT change values of fields, only read them
	int getY()const { return y; }
};

int main()
{
	Point p1(2, 5);
	cout << p1.getX() << endl; //NON-const objects can use both const and non-const methods
	p1.print();

	const Point p2(10, 20); //const objects can ONLY use const methods
	cout << p2.getX() << endl;
	p2.print();
	return 0;
}