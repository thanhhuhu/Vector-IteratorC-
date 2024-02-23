#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
//push_back
// foreach : range base for loop C++ 11 tro len
int main()
{
	//vector<int> v; //{}

	////vector<int> v(3, 100);//100,100,100
	//// day phan tu tu cuoi cua day vector
	//v.push_back(3); //{3} {100,100,100,3}
	//v.push_back(2); //{3,2}
	//v.push_back(1); // {3,2,1}
	//cout << v.size() << endl;// so phan tu 

	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << ' ';
	//	cout << endl;
	//	// xuat cac phan tu trong day vector
	//}
	// 
	//cout << endl;
	//// xuat cac phan tu trong day vector tu cuoi len dau 
	//for (int i = v.size() - 1; i >= 0; i--)
	//{
	//	cout << v[i] << ' ';
	//	cout << endl;
	//}
	// 
	//for (int x : v)
	//{
	//	cout << x << ' ';
	//}
	//cout << endl;
	//// foreach : range base for loop C++ 11 tro len
	//int a[5] = {2,3,4,5,6};
	//for (int x : a)
	//{
	//	cout << x << ' ';
	//}
	// 
	//vector<int>::iterator it = v.begin();//chỏ đến đầu tiên của dãy 
	//++it;
	//it += 2;
	//cout << *it << endl;
	//--it;
	//cout << *it << endl;
	//it += 3;
	//cout << *it << endl;
	////* là toán tử giải tham chiếu 
	//cách khác để duyệt bằng iterator 

	/*vector<int> ::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
		// mỗi lần nhập thì sẽ chèn vào cuối 
	}
	////chèn số 100 vào vị trí thứ 2 của chuỗi 
	//v.insert(v.begin() + 2, 100);
	//// xóa phần tử ở vị trí nào đấy 
	//v.erase(v.begin() + 3);
	////xóa phần tử ở cuối
	//v.pop_back();
	////gán các phần tử trong vector với cùng một giá trị 
	//v.assign(5, 100);
	////thay đổi kích thước của vector 
	//v.resize(6);
	//for (int x : v)
	//{
	//	cout << x << ' ';
	//}
	
	auto it = v.begin();// thay cho vector<int> ::iterator : auto
	//auto x = 100;//int 
	//for (auto x : v)
	//{
	//	cout << x << ' ';
	//}
	auto y = '@';//char
}