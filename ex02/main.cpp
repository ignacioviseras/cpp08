#include "MutantStack.hpp"

int main() {
	//test subject
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: ";
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: ";
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;

	//reverse iteration
	std::cout << "Reverse iteration" << std::endl;
	for (MutantStack<int>::reverse_iterator revIt = mstack.rbegin(); revIt != mstack.rend(); ++revIt) {
		std::cout << *revIt << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "use string" << std::endl;
	MutantStack<std::string> strStack;
	strStack.push("paco");
	strStack.push("pepe");
	strStack.push("juan");
	for (MutantStack<std::string>::iterator it = strStack.begin(); it != strStack.end(); ++it)
		std::cout << *it << std::endl;

	return 0;
}