#include<iostream>
#include<set>
#include<vector>
// set = log n
using ll = long long;
using namespace std;
int main()
{
	//set<int> se;// {}
	//se.insert(2);//{2}
	//se.insert(3);//{2,3}
	//se.insert(1);//{1,2,3}
	//se.insert(2);//{1,2,3} không thể insert thêm giá trị 2 vì trùng trong dãy 
	//se.insert(0);//{0,1,2,3}
	//se.insert(4);//{0,1,2,3,4}
	//cout << se.size() << endl;
	//// xuất ra các phần tử của dãy 
	//for (int x : se)
	//{
	//	cout << x << ' ';
	//}
	//// xuat ra bang iterator
	
	// set tối ưu ở việc nó chỉ giữ lại những phần tử khác nhau
	// loại bỏ những phần tử khác nhau 
	// xuất ra dãy sẽ tự động theo thứ tự tăng dần 
	// tìm kiếm nhanh ologn
	int n;
	cin >> n;
	set<int> se;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
	// hàm trong set : find
	//kiểm tra sự tồn tại của một phần tử nào đó trong set 
	//hàm trả về iterator tới phần tử nếu nó tìm thấy;
	set<int> se;
	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		se.insert(a[i]);
	}
	auto it = se.find(3);
	if (it == se.end())// trỏ đến sau phần tử cuối 
	{
		cout << "Not found!" << endl;
	}
	else {
		cout << "Found!" << endl;
	}
	// hàm count để đếm số lần xuất hiện 
	cout << se.count(3) << endl;
	se.erase(3);
	//xóa phần tử 
	// nếu xóa mà không tồn tại trong set đó thì sẽ gây lỗi 
	// ví dụ như 1 2 3 4 5 xóa 6 sẽ gây lỗi runtime error 
	for (int x : se)
		cout << x << " ";

}