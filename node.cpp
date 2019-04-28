#include "node.h"
#include <iostream>

namespace perceptron
{
	
	Node::Node(double val) : value(val)
	{
		std::cout << "Creating a node with value: " << value << std::endl;
	}
	
	Node::~Node()
	{
		std::cout << "Deleting a node with value: " << value << stdd::endl;
	}
	
	double Node::getValue() const
	{
		return value;
	}
	
	void Node::setValue(double d)
	{
		value = d;
}