#include<iostream>
#include<math.h>

using namespace std;
//想用那个开那个
const bool Use99table = false;
const bool UseCalculate_int = false;
const bool UseCalculate_double = false;
const bool UsePyramid = true;

void calculate(int& b, int& c)
{
	int delta = b * b - 4 * c;
	if (delta == 0) {
		cout <<"p=q=" << (double)(-b / 2) << endl;
	}
	else if (delta > 0) {
		double p = (-(double)b - sqrt((double)delta)) / 2.0;
		double q = (-(double)b + sqrt((double)delta)) / 2.0;
		cout <<"p=" << p << "," <<"q=" << q << endl;
	}
	else cout << "NO" << endl;
}

int main()
{
	if (UseCalculate_double) {
		int K;
		cout << "输入测试用例数目:";
		cin >> K;
		while (K--) {
			cout << "分别输入n,e,d:" << endl;
			int N, E, D;
			cin >> N >> E >> D;
			int tmp = E * D - N - 2;
			calculate(tmp, N);
		}
	}

	if (UseCalculate_int) {
		int k;
		cout << "输入测试用例数目:";
		cin >> k;
		while (k--) {
			long long int n, e, d;
			cout << "分别输入n,e,d:" << endl;
			cin >> n >> e >> d;
			long long int b = e * d - n - 2;
			long long int del = b * b - 4 * n;
			if (del < 0) {
				cout << "NO" << endl;
			}
			else if (del == 0) {
				cout << "p=q=" << -b / 2 << endl;
			}
			else {
				cout << "p=" << static_cast<int>((-b - sqrt(del)) / 2) << endl;
				cout << "q=" << static_cast<int>((-b + sqrt(del)) / 2) << endl;
			}
		}
	}

	if (Use99table) {
		int u = 0;
		while (u++ < 9) {
			int v = 0;
			while (v++ < u) {
				cout << u << "*" << v << "=" << u * v << "\t";
			}
			cout << endl;
		}
	}

	if (UsePyramid) {
		int m;
		cout << "请输入金字塔行数n：" << endl;
		cin >> m; int j = 1;
		cout << "您的n行金字塔如下：" << endl;
		for (int i = 0; j < (m + 1); j++)
		{
			for (i = 0; i < m - j; i++)
			{
				cout << " ";
			}
			for (i = 0; i < 2 * j - 1; i++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	return 0;
}

