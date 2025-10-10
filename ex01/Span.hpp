#pragma once
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
#include <iostream>

class Span {
	private:
		unsigned int _maxSize;
		std::vector<int> _num;
	public:
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNum(int n);
		int shortestSpan() const;
		int longestSpan() const;
		unsigned int size() const {
			return _num.size();
		}

		template <typename InputIterator>
		void addNum(InputIterator begin, InputIterator end){
			if (std::distance(begin, end) + _num.size() > _maxSize)
				throw std::out_of_range("is full :(");
			_num.insert(_num.end(), begin, end);
		}
};



// Develop a Span class that can store a maximum of N integers. N is an unsigned int
// variable and will be the only parameter passed to the constructor.
// This class will have a member function called addNumber() to add a single number
// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
// are already N elements stored should throw an exception.
// Next, implement two member functions: shortestSpan() and longestSpan()
// They will respectively find out the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.
// Of course, you will write your own tests, and they will be far more thorough than the
// ones below. Test your Span with at least 10,000 numbers. More would be even better.
// Should output:
// $> ./ex01
// 2
// 14
// $>
// Last but not least, it would be wonderful to fill your Span using a range of iterators.
// Making thousands of calls to addNumber() is so annoying. Implement a member function
// to add multiple numbers to your Span in a single call.
// If you don’t have a clue, study the Containers. Some member
// functions take a range of iterators in order to add a sequence of
// elements to the container.
//---------------------
// Desarrolle una clase Span que pueda almacenar un máximo de N enteros. N es un int sin signo
// variable y será el único parámetro pasado al constructor.
// Esta clase tendrá una función miembro llamada addNumber() para agregar un solo número
// al lapso. Se utilizará para rellenarlo. Cualquier intento de agregar un nuevo elemento si hay
// Ya hay N elementos almacenados que deberían generar una excepción.
// A continuación, implemente dos funciones miembro: shortSpan() y longSpan()
// Descubrirán respectivamente el tramo más corto o el tramo más largo (o la distancia, si
// que prefieras) entre todos los números almacenados, y devuélvelo. Si no hay números almacenados,
// o solo uno, no se puede encontrar ningún intervalo. Por lo tanto, lanza una excepción.
// Por supuesto, escribirás tus propias pruebas y serán mucho más exhaustivas que las
// los de abajo. Pruebe su Span con al menos 10.000 números. Más sería aún mejor.
// Debería generar:
// $> ./ex01
// 2
// 14
// $>
// Por último, pero no menos importante, sería maravilloso llenar su Span utilizando una variedad de iteradores.
// Hacer miles de llamadas a addNumber() es muy molesto. Implementar una función miembro
// para agregar varios números a tu Span en una sola llamada.
// Si no tienes ni idea, estudia los Contenedores. algún miembro
// Las funciones toman una variedad de iteradores para agregar una secuencia de
// elementos al contenedor.