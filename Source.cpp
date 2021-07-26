//Cipher Block Chaining by Alex Peplinski Uploaded on 7/26/2021 Source.cpp
//Needs to be built and the data to be encrypted must be supplied as arguments when the .exe is run.
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cout << "CBC!\n";
	int a = 0;
	int b = 0;
	int m = 0;
	int xi = 0;
	int x2 = 0;
	int x3 = 0;
	int x4 = 0;
	int iv = 0;
	int yi = 0;
	int y2 = 0;
	int y3 = 0;
	int y4 = 0;
	int si = 0;
	int s2 = 0;
	int s3 = 0;
	int s4 = 0;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	m = atoi(argv[3]);
	xi = atoi(argv[4]);
	x2 = atoi(argv[5]);
	x3 = atoi(argv[6]);
	x4 = atoi(argv[7]);
	iv = atoi(argv[8]);
	cout << "x = S  N  O  W" << "\n";
	cout << "    18 13 14 22" << "\n";
	cout << "key = (a = " << a << ", b = " << b << ")" << "\n";
	yi = (a * (xi ^ iv) + b) % m;
	cout << " y0 = a (X0 ^ iv)  + b Mod 26" << "\n";
	cout << "  = " << a << "(" << xi << "^" << iv << ") + " << b << " mod " << m << "\n";
	cout << " y0 = " << yi << "\n";
	y2 = (a * (x2 ^ yi) + b) % m;
	cout << "yi = " << y2 << "\n";
	y3 = (a * (x3 ^ y2) + b) % m;
	cout << "yi = " << y3 << "\n";
	y4 = (a * (x4 ^ y3) + b) % m;
	cout << "yi = " << y4 << "\n";
}
