#include<iostream>
#include<queue>
#include<string>

int main()
{
	std::priority_queue<int> queue;
	queue.push(19);
	queue.push(60);
	queue.push(5);
	queue.push(10);
	for(int i = 0;i<3;i++){
		std::cout<<queue.top()<<std::endl;
		queue.pop();

	}

	return 0;
}