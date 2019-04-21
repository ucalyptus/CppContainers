#include<iostream>
#include<string>
#include<typeinfo>
#include<map>
int main()
{


	std::map<std::string,float> student;
	

	student["Peter"] = 4.0f;
	student["Chris"] = 1.0f;
	student["John"]  = 2.0f;

for(auto it = student.begin();it!= student.end();it++)
	std::cout<<it->first<<std::endl;



	

}
