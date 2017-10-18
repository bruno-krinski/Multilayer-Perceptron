/*
 * Data.cpp
 *
 *  Created on: 18 de out de 2017
 *      Author: brunoak94
 */

#include "Data.hpp"

namespace nn {

Data::Data(unsigned int nFeatures, unsigned int nSamples, std::string p) {
	path = p;
	numFeatures = nFeatures;
	numSamples = nSamples;
	dataSize = numFeatures * numSamples;
}

Data::~Data() {
	// TODO Auto-generated destructor stub
}

int Data::size(){
	return dataSize;
}

std::vector<float> Data::getFeatures(){
	return features;
}

void Data::read(){
	std::string line;
	std::string buffer;
	std::ifstream f(path);
	std::cout << path << std::endl;
	if(f.is_open()){
		while(std::getline(f,line)){
			std::cout << line << std::endl;
			std::stringstream ss(line);
			std::vector<std::string> tokens;
			while(ss >> buffer){
				tokens.push_back(buffer);
			}
			for(unsigned int i = 0; i < tokens.size()-1; ++i){
				features.push_back(std::stoi(tokens[i]));
			}
			float label = std::stoi(tokens[tokens.size()-1]);
			labels.push_back(label);
		}
	} else {
		std::cout << "Could not open data file!!!" << std::endl;
		std::exit(0);
	}
}

void Data::write(){
	for(unsigned int i = 0; i < numSamples; ++i){
		std::cout <<  labels[i] << "[";
		for(unsigned int j = 0; j < numFeatures-1; ++j){
			std::cout << features[i*numFeatures + j] << ",";
		}
		std::cout << features[i*numFeatures + numFeatures - 1] << "]" << std::endl;
	}
}

unsigned int Data::getNumFeatures(){
	return numFeatures;
}

} /* namespace nn */
