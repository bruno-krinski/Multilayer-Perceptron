/*
 * MLP.h
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#ifndef MLP_HPP_
#define MLP_HPP_

#include<iostream>
#include<vector>
#include "Layer.hpp"
#include "Data.hpp"

namespace nn {

class MLP {

private:
	unsigned int numLayers;
	unsigned int numEpochs;
	unsigned int maxError;
	std::vector<Layer> layers;

public:
	MLP(Data data,unsigned int nLayers, const std::vector<unsigned int>& nNeuronsEachLayer, unsigned int nEpochs, float mError, float iWeights);
	virtual ~MLP();
	void train();
	void write();
};

} /* namespace nn */

#endif /* MLP_HPP_ */
