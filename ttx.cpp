#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<iterator>

int main()
{
	std::vector<std::string>names;
	std::vector<std::string>::iterator iterator;



	

	names.push_back("CMhsd");
	names.push_back("CMEEE");

	for (iterator = names.begin();iterator!= names.end();iterator++)
		std::cout<<*iterator<<std::endl;
	std::cin.get();
	return 0;
}