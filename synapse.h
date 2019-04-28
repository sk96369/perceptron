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
		Synapse(double w);
		~Synapse();
		void adjust(double d);
	};
}