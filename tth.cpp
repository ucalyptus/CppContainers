#include<iostream>
#include<string>
#include<set>
int main()
{
	std::set<int> set;
	std::set<int>::iterator it;
	set.insert(1);
	set.insert(1);
	set.insert(1);

	for(it = set.begin(); it!=set.end(); it++)
	std::cout<<*it<<std::endl;



	return 0;
}