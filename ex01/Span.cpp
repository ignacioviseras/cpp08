#include "Span.hpp"

Span::Span(unsigned int n) {
	_maxSize = n;
}
Span::Span(const Span &other) :_maxSize(other._maxSize), _num(other._num) {}
Span::~Span(){}
Span &Span::operator=(const Span &other) {
	if (this != &other) {
		_maxSize = other._maxSize;
		_num = other._num;
	}
	return *this;
}

void Span::addNum(int num){
	if (_num.size() >= _maxSize)
		throw std::out_of_range("is full");
	_num.push_back(num);
}

int Span::shortestSpan() const {
	if (_num.size()< 2)
		throw std::logic_error("no elemt dor span");
	std::vector<int> sorted = _num;
	std::sort(sorted.begin(), sorted.end());

	int min = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sorted.size(); ++i) {
		int dif = sorted[i] - sorted[i-1];
		if (dif < min)
			min = dif;
	}
	return min;
}

int Span::longestSpan() const {
	if (_num.size() < 2)
		throw std::logic_error("no element for span");
	
	int min = *std::min_element(_num.begin(), _num.end());
	int max = *std::max_element(_num.begin(), _num.end());
	return max-min;
}