#include<iostream>
#include<vector>
using namespace std;

int square(int x) { return x * x; }

int main()
{
	// 기본 타입 선언에 auto 활용
	auto c = 'a';
	auto pi = 3.14;
	auto ten = 10;
	auto* p = &ten;
	cout << c << " " << pi << " " << ten << " " << *p << endl;

	// 함수의 리턴 타입으로 추론
	auto ret = square(3); 
	cout << *p << " " << ret << endl;

	vector<int> v = { 1, 2, 3, 4, 5 };
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;

	// 템플릿에 auto를 사용하여 간소화
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
}