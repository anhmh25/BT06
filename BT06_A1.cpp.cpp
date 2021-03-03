#include<iostream>
using namespace std;

void f(int a[]) {
	cout << &a << endl;
	cout << &a[0] << endl;
}

int main() {
	int A[3] = { 25,3,2002 };
	cout << &A << endl << &A[0] << endl;
	f(A);
}
//Trong ham main thì ket qua dia chi cua bien mang va phan tu dau tien trong mang giong nhau con trong ham thi khac nhau//
