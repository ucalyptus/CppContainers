#include<iostream>
#include<string>
#include<set>
#include<unordered_set>
int main()
{
	std::unordered_multiset<int> numbers;
	std::unordered_multiset<int>::iterator it;

	numbers.insert(1);
	numbers.insert(14);
	numbers.insert(23);
	numbers.insert(14);


	for(it = numbers.begin();it!= numbers.end();it++)
		std::cout<<*it<<std::endl;
	return 0;
}