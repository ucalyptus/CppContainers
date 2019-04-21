#include<iostream>
#include<set>
#include<string>
#include<iterator>

struct SortOrder{
	bool operator()(const std::string &first,const std::string &second){
	int length1  = first.length();
	int length2 = second.length();

	if(length1 == length2)
		return (first<second);

	return (length1<length2);

}
};
int main()

{
	


	std::set<std::string,SortOrder> names;

	names.insert("CodingMadeEasz");
	names.insert("CodingMadeEasy");

	typedef std::set<std::string>::iterator it;
	it iterator;

for (iterator  = names.begin();iterator != names.end();iterator++)
	std::cout<<*iterator<<std::endl;

	return 0;
}