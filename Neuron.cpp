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

void Neuron::activate(const std::vector<int> input){
	weights.resize(input.size(),0);
	// call activation function and calc the error

}

} /* namespace nn */
