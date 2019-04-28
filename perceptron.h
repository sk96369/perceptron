#pragma once
#include <cstddef>
#include <vector>
#include "node.h"

namepace perceptron
{
	class Perceptron
	{
		const size_t size;
		std::vector<Node> inputs;
		
		public:
		Perceptron(size_t n, std::vector<Node>);
		Perceptron(size_t n, std::vector<double>);
		~Perceptron();
		
		size_t getSize() const;
		
	};
	
}