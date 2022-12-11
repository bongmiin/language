#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << showbase;

	//타이틀을 출력한다
	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa" << endl;

	//하나의 수를 십진수, 8진수, 16진수 형태로 한 줄에 출력한다
	for (int i = 0; i < 50; i += 5) {
		cout << setw(8) << setfill('.') << dec << i;
		cout << setw(10) << setfill('.') << oct << i;
		cout << setw(10) << setfill('.') << hex << i << endl;
	}
}