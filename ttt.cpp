#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
map<string,int> map;
int temp[2] = { 2,5};
string weapon = "weapon2";

map["weapon1"] = 100;
map["weapon2"] = 120;

cout<<map[weapon]<<endl;


return 0;
}