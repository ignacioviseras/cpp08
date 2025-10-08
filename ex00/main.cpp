#include "easyfind.hpp"

int main() {
	try {
		std::vector<int> v;
		for (int i = 0; i < 5; i++)
			v.push_back(i);
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "find with easyfind " << *it << std::endl;
		
		//this point throw error bc in vector only have numbers 0 to 5
		easyfind(v, 10);

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::list<int> lst;
	lst.push_back(6);
	lst.push_back(10);
	lst.push_back(16);
	lst.push_back(22);

	try	{
		std::list<int>::iterator it = easyfind(lst, 16);
		std::cout << "find in list with easyfind " << *it << std::endl;

	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	

}