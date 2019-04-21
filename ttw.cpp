#include<iostream>
#include<string>
#include<map>
int main()
{
	std::multimap<std::string,float> student;
	std::multimap<std::string,float>::iterator it;

	student.insert(std::make_pair("Peter",4.0f));
	student.insert(std::make_pair("John",1.0f));
	student.insert(std::make_pair("sg",5.0f));
	student.insert(std::make_pair("Peter",1.0f));


	for(it = student.begin();it!= student.end();it++)
		std::cout<<it->second<<std::endl;
	return 0;
}