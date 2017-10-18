/*
 * Layer.cpp
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#include "Layer.hpp"

namespace nn {

Layer::Layer(unsigned int nNeurons) {
	numNeurons = nNeurons;
	neurons.resize(numNeurons);
}

Layer::~Layer() {
	// TODO Auto-generated destructor stub
}

void Layer::setInput(std::vector<float> in){
	input = in;
}

void Layer::write(){
	std::cout << "Input = [";
	for(const auto i:input){
		std::cout << i << ',';
	}
	std::cout << "]" << std::endl;
	std::cout << "Output = [";
	for(const auto i:output){
		std::cout << i << ',';
	}
	std::cout << "]" << std::endl;
	for(unsigned int i = 0; i < numNeurons; ++i){
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << "Neuron " << i << ":" << std::endl;
		neurons[i].write();
		std::cout << "--------------------------------------------------" << std::endl;
	}
}

std::vector<Neuron> Layer::getNeurons(){
	return neurons;
}

void Layer::initWeights(unsigned int numWeights, float weight){
	for(unsigned int i = 0; i < numNeurons; ++i){
		neurons[i].initWeights(numWeights, weight);
	}
}

} /* namespace nn */
