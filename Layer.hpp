/*
 * Layer.hpp
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#ifndef LAYER_HPP_
#define LAYER_HPP_

#include<vector>
#include "Neuron.hpp"

namespace nn {

class Layer {

private:
	std::vector<int> input;
	std::vector<int> output;
	std::vector<Neuron> neurons;

public:
	Layer();
	virtual ~Layer();
};

} /* namespace nn */

#endif /* LAYER_HPP_ */
