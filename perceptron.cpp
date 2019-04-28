#include <iostream>

namepace perceptron
{
	
	Perceptron::Perceptron(size_t n, std::vector<Node> i) : size(n), inputs(i)
	{
		std::cout << "Creating a new perceptron" << std::endl;
	}
	
	Perceptron::Perceptron(size_t n, std::vector<double> i) : size(n), inputs(new std::vector<Node>)
	{
		for(int index = 0;index < size;index++)
		{
			inputs.push_back(new Node(i[index]));
		}
	}
	
	Perceptron::~Perceptron()
	{
		std::cout << "Deleting the perceptron" << std::endl;
		while(!inputs.empty())
		{
			node.delete();
			Node node = inputs.pop_back();
		}
		std::cout << "Perceptron has been deleted" << std::endl;
	}
	
	size_t Perceptron::getSize() const
	{
		return size;
	}
	
}