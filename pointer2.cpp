#include <iostream>
#include <vector>
#include <array>

using namespace std;

struct years {
	int year;
	string chinese;
};

int main() {
	//�ṹ 
	years y1, y2, y3;
	y1.year = 2022;
	y1.chinese = "������";
	

	years* pointer = &y2;
	pointer->year = 6655;
	(*pointer).chinese = "quin";

	cout << "y1=" << y1.year << " at " << &y1.year << endl;
	cout << "y1 is " << y1.chinese << endl;
	cout << "y2=" << y2.year << " at " << &y2.year << endl;
	cout << "y2 is " << y2.chinese << endl;

	//ָ������,������Ķ���ָ�� 
	years* pointers[3] = { &y1,&y2,&y3 };
	cout << pointers[0]->year <<endl;

	//ָ��ָ������ ������
	years** point_to_pointers_a = pointers;
	cout << point_to_pointers_a[0]->year << endl;
	cout << (*(point_to_pointers_a+1))->year;

	//auto�Զ�ѡ������ c++11���� 
	auto point_to_pointers_b = pointers;
	cout << point_to_pointers_b[0]->year << endl;
	cout << (*(point_to_pointers_b + 1))->year;

	//vector,array
	//vector<int> vt(2) = { 1,2 }; ����ʹ��

	vector<int> vt(2);
	vt[1] = 1;
	vt[0] = 2;

	cout << vt[1] << vt[0] << endl;

	array <int, 2> ar1 = { 3,4 };
	array <int, 2> ar2 ;
	ar2 = ar1;
	cout << ar1[1] << ar1[0] << endl;
	cout << ar2[1] << ar2[0] << endl;

	return 0;
}
