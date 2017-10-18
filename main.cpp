//============================================================================
// Name        : Multylayer.cpp
// Author      : Bruno Alexandre Krinski
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MLP.hpp"
#include "Data.hpp"


int main() {

	nn::Data data(4,4, "src/dados.txt");
	data.read();
	data.write();

	std::vector<unsigned int> numNeurons;
	numNeurons.push_back(5);
	numNeurons.push_back(10);
	numNeurons.push_back(4);

	nn::MLP mlp(data, 3, numNeurons, 50, 10, 0.5);
	mlp.write();
	return 0;
}
