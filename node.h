#pragma once
namespace perceptron
{
	class Node
	{
		double value;
		
		
		public:
		Node(double val);
		~Node();
		
		double getValue() const;
		void setValue(double d);
	};
}