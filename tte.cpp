#include<iostream>
#include<string>
#include<iterator>
#include<list>
int main()
{
	
	std::list<std::string> names;
	std::list<std::string>::iterator it;

	names.push_back("Peter");
	names.push_back("CidnMadeee");
	names.push_back("Peter");
	names.sort();
	names.unique();
	for(it = names.begin();it!=names.end();it++)
		std::cout<< *it<<std::endl;


	return 0;
}