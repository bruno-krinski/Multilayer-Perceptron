/*
 * Layer.hpp
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#ifndef LAYER_HPP_
#define LAYER_HPP_

#include<iostream>
#include<vector>
#include<string>
#include "Neuron.hpp"

namespace nn {

class Layer {

private:
	unsigned int numNeurons;
	std::vector<float> input;
	std::vector<float> output;
	std::vector<Neuron> neurons;

public:
	Layer(unsigned int nNeurons);
	virtual ~Layer();
	void setInput(std::vector<float> in);
	void activate();
	unsigned int size();
	void write();
	std::vector<Neuron> getNeurons();
	void initWeights(unsigned int numWeights, float weight);
};

} /* namespace nn */

#endif /* LAYER_HPP_ */
