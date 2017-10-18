/*
 * Neuron.h
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#ifndef NEURON_H_
#define NEURON_H

#include<vector>

namespace nn {

class Neuron {

private:
	int output;
	int error;
	std::vector<int> weights;
	void activate(const std::vector<int> input);

public:
	Neuron();
	virtual ~Neuron();

};

} /* namespace nn */

#endif /* NEURON_H_ */
