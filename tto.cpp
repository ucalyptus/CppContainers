#include<iostream>
#include<stack>
int main()
{

std::stack <int> stack;
stack.push(1);
stack.push(2);
stack.push(3);
std::cout<<stack.top()<<std::endl;
stack.pop();
std::cout<< stack.top()<<std::endl;
return 0;


 }