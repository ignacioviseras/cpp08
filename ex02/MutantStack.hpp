#pragma once
#include <stack>
#include <deque>
#include <iostream>

//std::deque its a container, it use fifo interface 
// and it can access the 2 extremes of the container

// std::stack its a adapter of containers only 
// u can pop push and access but only in the top node
template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;
		MutantStack(): std::stack<T, Container>() {}
		MutantStack(const MutantStack &other): std::stack<T, Container>(other) {}
		~MutantStack() {}

		MutantStack &operator=(const MutantStack &other) {
			if (this != &other) {
				std::stack<T, Container>::operator=(other);
			}
			return (*this);
		}
		
		iterator begin() {
			return (this->c.begin());
		}
		const_iterator begin() const{
			return (this->c.begin());
		}
		reverse_iterator rbegin() {
			return (this->c.rbegin());
		}
		const_reverse_iterator rbegin() const{
			return (this->c.rbegin());
		}

		iterator end() {
			return (this->c.end());
		}
		const_iterator end() const{
			return (this->c.end());
		}
		reverse_iterator rend() {
			return (this->c.rend());
		}
		const_reverse_iterator rend() const{
			return (this->c.rend());
		}
};


// Now, it’s time to move on to more serious things. Let’s develop something weird.
// The std::stack container is very nice. Unfortunately, it is one of the only STL Containers that is NOT iterable. That’s too bad.
// But why would we accept this? Especially if we can take the liberty of butchering the
// original stack to create missing features.
// To repair this injustice, you have to make the std::stack container iterable.
// Write a MutantStack class. It will be implemented in terms of a std::stack.
// It will offer all its member functions, plus an additional feature: iterators.
// Of course, you will write and turn in your own tests to ensure everything works as
// expected.

// If you run it a first time with your MutantStack, and a second time replacing the
// MutantStack with, for example, a std::list, the two outputs should be the same. Of
// course, when testing another container, update the code below with the corresponding
// member functions (push() can become push_back()).

// ------------------

// Ahora es el momento de pasar a cosas más serias. Desarrollamos algo extraño.
// El contenedor std::stack es muy bonito. Desafortunadamente, es uno de los únicos contenedores STL que NO es iterable. Eso es una lástima.
// Pero ¿por qué aceptaríamos esto? Especialmente si podemos tomarnos la libertad de masacrar a los
// pila original para crear funciones faltantes.
// Para reparar esta injusticia, debes hacer que el contenedor std::stack sea iterable.
// Escribe una clase MutantStack. Se implementará en términos de std::stack.
// Ofrecerá todas sus funciones miembro, además de una característica adicional: iteradores.
// Por supuesto, escribirá y entregará sus propias pruebas para asegurarse de que todo funcione como
// esperado.

// Si lo ejecuta por primera vez con su MutantStack y una segunda vez reemplazando el
// MutantStack con, por ejemplo, un std::list, las dos salidas deberían ser iguales. De
// Por supuesto, cuando pruebe otro contenedor, actualice el código siguiente con el correspondiente
// funciones miembro (push() puede convertirse en push_back()).
