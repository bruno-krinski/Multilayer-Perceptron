/*
 * MLP.cpp
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#include "MLP.hpp"

namespace nn {

MLP::MLP(Data data, unsigned int nLayers, const std::vector<unsigned int>& nNeuronsEachLayer, unsigned int nEpochs, float mError, float iWeights) {
	numLayers = nLayers;
	numEpochs = nEpochs;
	maxError = mError;

	Layer firstLayer(nNeuronsEachLayer[0]);
	firstLayer.setInput(data.getFeatures());
	firstLayer.initWeights(data.getNumFeatures(),iWeights);
	layers.push_back(firstLayer);

	for(unsigned int i = 1; i < nNeuronsEachLayer.size(); ++i){
		Layer newLayer(nNeuronsEachLayer[i]);
		newLayer.initWeights(data.getNumFeatures(),iWeights);
		layers.push_back(newLayer);
	}
}

MLP::~MLP() {
	// TODO Auto-generated destructor stub
}

void MLP::write(){
	std::cout << "Number of Layers = " << numLayers << std::endl;
	std::cout << "Number of Epochs = " << numEpochs << std::endl;
	std::cout << "Maximum Error = " << maxError << std::endl;
	for(unsigned int i = 0; i < numLayers; ++i){
		std::cout << "==================================================" << std::endl;
		std::cout << "Layer " << i << ":" << std::endl;
		layers[i].write();
		std::cout << "==================================================" << std::endl;
	}
}

void MLP::train(){

}

} /* namespace nn */
