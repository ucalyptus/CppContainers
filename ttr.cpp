
#include<iostream>
#include<string>
#include<iterator>
#include<array>
int main()
{
	std::array<int, 3> temp = {0,2,3};
	for(int i =0;i<temp.size();i++)
		std::cout<<temp[i]<<std::endl;

	// std::array<int,3>::iterator it;
	// for(it = temp.begin();it!=temp.end();it++)
	//     std::cout<< *it << std::endl;



	return 0;
}