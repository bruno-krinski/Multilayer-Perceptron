/*
 * Neuron.h
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#ifndef NEURON_H_
#define NEURON_H_

#include<iostream>
#include<vector>

namespace nn {

class Neuron {

private:
	float output;
	float error;
	std::vector<float> weights;

public:
	Neuron();
	virtual ~Neuron();
	void activate(const std::vector<float> input);
	void write();
	void initWeights(unsigned int numWeights, float weight);
};

} /* namespace nn */

#endif /* NEURON_H_ */
