#pragma once
#include "node.h"
#inlucd <vector>

namespace perceptron
{
	class Synapse
	{
		double weight;
		Node * input;
		Node * output;
		
		public:
		Synapse(double w, Node * i, Node * o);
		~Synapse();
		void adjust(double d);
	};
}