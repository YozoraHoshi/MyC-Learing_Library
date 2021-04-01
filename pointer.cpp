#include <iostream>
#include <cstring>


int main() {
	using namespace std;
	// &表示地址 *表示指针 指针指向地址 *pointer表示获得地址储存的值 
	int noob = 17900;
	int* pointer = &noob;
	int p_noob = noob;

	cout << "pointer address is " << pointer << endl;
	cout << "pointer value is " << *pointer << endl;
	cout << &noob << endl;
	cout << noob << endl;
	cout << &p_noob << endl;
	cout << p_noob << endl;

	//枚举 
	enum spectrum { dd = 1, cl, ca, bb, cv };
	cout << dd << cl << ca << bb << cv << endl;

	int* noobs = new int[3];
	noobs[0] = 100700;
	noobs[dd] = 17900;
	noobs[cl] = 21400;

	//指针+1等于地址移动 
	cout << "noob dd have " << noobs[dd] << " hp." << endl;
	cout << "show noob dd's address :" << (int*)noobs[dd] << endl;
	noobs = noobs + dd;
	cout << "next match noob dd have " << noobs[dd] << " hp.lucky." << endl;
	cout << "show noob dd's address :" << (int*)noobs[dd] << endl;
	noobs = noobs - dd;
	cout << "this match noob dd have " << noobs[dd] << " hp.wtf is it?" << endl;
	cout << "show noob dd's address :" << (int*)noobs[dd] << endl;

	delete[] noobs;
	//cout << noobs[1];
	cout << endl;

	//strcpy
	char noobteam[20] = "shimakaze";
	char shima[20] = "shitmakaze";
	char* teammate ;
	teammate = new char[strlen(noobteam)+1];
	strncpy(teammate,noobteam,5);
	cout << teammate << endl;
	strncpy(teammate,noobteam,10);
	cout << teammate;
	delete teammate;
	
	return 0;
}
