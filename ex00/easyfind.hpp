#pragma once

# include <algorithm>
# include <stdexcept>
# include <iostream>
# include <vector>
# include <list>


template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("value dont found");
	return it;
}



// A first easy exercise is the way to start off on the right foot.
// Write a function template easyfind that accepts a type T. It takes two parameters:
// the first one is of type T, and the second one is an integer.
// Assuming T is a container of integers, this function has to find the first occurrence
// of the second parameter in the first parameter.
// If no occurrence is found, you can either throw an exception or return an error value
// of your choice. If you need some inspiration, analyze how standard containers behave.
// Of course, implement and turn in your own tests to ensure everything works as expected.
// You don’t have to handle associative containers.
//-----------------
// Un primer ejercicio sencillo es la manera de empezar con el pie derecho.
// Escriba una plantilla de función easyfind que acepte un tipo T. Se necesitan dos parámetros:
// el primero es de tipo T y el segundo es un número entero.
// Suponiendo que T es un contenedor de números enteros, esta función tiene que encontrar la primera aparición
// del segundo parámetro en el primer parámetro.
// Si no se encuentra ninguna ocurrencia, puede generar una excepción o devolver un valor de error
// de tu elección. Si necesitas algo de inspiración, analiza cómo se comportan los contenedores estándar.
// Por supuesto, implemente y entregue sus propias pruebas para asegurarse de que todo funcione como se espera.
// No es necesario que maneje contenedores asociativos.