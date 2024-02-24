#include<iostream>
#include<vector>
using ll = long long;
using namespace std;
int main()
{
	// <first, second> 
	// pair<int, char>
	//pair<int, int> p = make_pair(10, 20);
	// pair <int,int> p ={10,20};
	// c++11 tro len 
	// tạo thành phần thứ nhất là 10 , thành phần thứ 2 là 20
	/*pair <int, int > p1 = p;*/
	//cout << p.first << " " << p.second << endl;

	int n;
	cin >> n;
	pair<int, int > a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	vector<pair<int, int>> v;
	pair<int ,pair<int, int>> p;
	p.first = 10;
	p.second.first = 20;
	p.second.second = 30;//{10,{20,30} }
}