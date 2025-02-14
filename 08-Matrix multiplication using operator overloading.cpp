#include <iostream>
using namespace std;

class Matrix
{
	int a[2][2];
public:
	Matrix() {}
	Matrix(int first, int second, int third, int fourth)
	{
		a[0][0] = first;
		a[0][1] = second;
		a[1][0] = third;
		a[1][1] = fourth;
	}

	Matrix operator*(int x)        // B.operator*(6)
	{
		Matrix sum;
		sum.a[0][0] = a[0][0] * x;
		sum.a[0][1] = a[0][1] * x;
		sum.a[1][0] = a[1][0] * x;
		sum.a[1][1] = a[1][1] * x;
		return sum;
	}
	friend Matrix operator*(int, Matrix);
	void display()
	{
		cout << a[0][0] << " " << a[0][1] << endl;
		cout << a[1][0] << " " << a[1][1] << endl;
	}
};

Matrix operator*(int x, Matrix A)   // 5.operator*(A) 
{
	Matrix sum;
	sum.a[0][0] = A.a[0][0] * x;
	sum.a[0][1] = A.a[0][1] * x;
	sum.a[1][0] = A.a[1][0] * x;
	sum.a[1][1] = A.a[1][1] * x;
	return sum;
}

int main()
{
	Matrix A(1, 2, 3, 4);
	Matrix B(2, 3, 4, 5);
	Matrix C;
	C = 5*A;             // 5.operator*(A) 
	//C = B*6;            // B.operator*(6)
	cout << "A Matrix = " << endl;
	A.display();
    cout << "B Matrix = " << endl;
     B.display();
	cout << "C Matrix = " << endl;
	C.display();
	return 0;
}
