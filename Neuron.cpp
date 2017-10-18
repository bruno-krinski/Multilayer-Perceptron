/*
 * Neuron.cpp
 *
 *  Created on: 18 de out de 2017
 *      Author: brunoak94
 */

#include "Neuron.hpp"

namespace nn {

Neuron::Neuron() {
	error = 0;
	output = 0;
}

Neuron::~Neuron() {

}

void setWeights(){

}

void Neuron::activate(const std::vector<float> input){
	weights.resize(input.size(),0);
	// call activation function and calc the error

}

void Neuron::write(){
	std::cout << "Output = " << output << std::endl;
	std::cout << "Error = " << error << std::endl;
	std::cout << "Weights = [";
	for(auto i:weights){
		std::cout << i << ',';
	}
	std::cout << "]" << std::endl;
}

void Neuron::initWeights(unsigned int numWeights, float weight){
	weights.resize(numWeights, weight);
}

} /* namespace nn */
