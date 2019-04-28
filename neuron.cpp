#include "neuron.h"
#include <cmath>

namespace perceptron
{
	double Neuron::sigmoid(double d) const
	{
		return 1 / (1 + exp(-d));
	}
}