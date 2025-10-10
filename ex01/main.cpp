#include "Span.hpp"

int main()
{
	try {

		Span sp = Span(5);
		sp.addNum(6);
		sp.addNum(3);
		sp.addNum(17);
		sp.addNum(9);
		sp.addNum(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

	try {
		unsigned int n = 12345;
		Span s(n);
		std::vector<int> value;

		for(unsigned int i = 0; i < n; i++)
			value.push_back(rand());
		s.addNum(value.begin(), value.end());
		std::cout << "min span " << s.shortestSpan() << std::endl;
		std::cout << "max span " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	

	return 0;
}