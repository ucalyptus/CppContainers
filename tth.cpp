#include<iostream>
#include<string>
#include<unordered_map>
#include<map>
int main()
{
	std::unordered_multimap<std::string,int> tempmap;
	std::unordered_multimap<std::string,int>::iterator it;


	tempmap.insert(std::make_pair("Peter",4));
	tempmap.insert(std::make_pair("Chris",0));
	tempmap.insert(std::make_pair("Chris",10));


	for(it = tempmap.begin();it!= tempmap.end();it++)
		std::cout<<it->second<<std::endl;


	return 0;
}