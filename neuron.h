#pragma once
namespace perceptron
{
	class Neuron : public Node
	{
		double sigmoid(double d) const;
	};
}