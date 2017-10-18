/*
 * MLP.h
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#ifndef MLP_HPP_
#define MLP_HPP_

#include<vector>
#include "Layer.hpp"

namespace nn {

class MLP {

private:
	std::vector<Layer> layers;

public:
	MLP();
	virtual ~MLP();
};

} /* namespace nn */

#endif /* MLP_HPP_ */
