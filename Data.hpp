/*
 * Data.hpp
 *
 *  Created on: 18 de out de 2017
 *  Author: Bruno Alexandre Krinski
 */

#ifndef DATA_HPP_
#define DATA_HPP_

#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>

namespace nn {

class Data {

private:
	unsigned int numFeatures;
	unsigned int numSamples;
	unsigned int dataSize;
	std::string path;
	std::vector<float> features;
	std::vector<float> labels;

public:
	Data(unsigned int nFeatures, unsigned int nSamples,std::string p);
	virtual ~Data();
	void read();
	void write();
	std::vector<float> getFeatures();
	int size();
	unsigned int getNumFeatures();
};

} /* namespace nn */

#endif /* DATA_HPP_ */
