#include<iostream>
#include<queue>
#include<string>

int main()
{
	
	std::queue<int> queue;
	queue.push(1);
	queue.push(2);
	queue.push(3);

	std::cout << queue.front() <<std::endl;
	queue.pop();
	std::cout << queue.front() <<std::endl;

return 0;
}