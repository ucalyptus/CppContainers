#include<iostream>
#include<map>
#include<string>
int main()
{
	
	std::map<std::string,int> map;
	std::pair<int,int> test;
	test.first = 10;
	test.second = 20;
	std::cout<<test.first<<" "<<test.second << std::endl;
	
	//std::make_pair(10,20)

return 0;
}