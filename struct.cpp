#include <iostream>
#include <string>
using namespace std;

struct myfunction {
    int num;
    string name;
    double price;
    char intro[100];
};

int main()
{
    myfunction tissue[5]{
    { 1,"tissue",5.12,"a normal tissue.U can buy everywhere." },
    { 2,"wet tissue",6.66,"wet tissue.very soft." },
    { 3,"iron tissue",16.66,"why we need ironmade tissue?" }
    };
    /* 

     cout << "input a loot name:______\b\b\b\b\b\b";
    cin >> cup.name;

    cout << "input loot price:______\b\b\b\b\b\b";
    cin >> cup.price;

    cout << "input loot introduction:______\b\b\b\b\b\b";
    cin >>  cup.intro;

     */

    cout << "your loot is " << tissue[1].name << "."<<endl;
    cout << "your loot price is " << tissue[1].price << "."<<endl;
    cout << tissue[1].intro <<endl ;
   
    myfunction cup{};
    cup = tissue[1];

    cout << "here is a new loot:" << tissue[0].name <<   tissue[2].name << endl;;
    cout << tissue[1].intro << endl;
    cout << tissue[2].intro << endl;
    cout << "you sell them all and get:гд" << tissue[0].price + tissue[1].price + tissue[2].price << ".";

    return 0;

}
