#include "synapse.h"

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
	};
	
	Synapse(double w)
	{
		
	}
	
	~Synapse()
	{
		
	}
	
	void adjust(double d)
	{
		
	}
}