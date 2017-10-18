all:
	g++ main.cpp MLP.cpp MLP.hpp Neuron.cpp Neuron.hpp Layer.cpp Layer.hpp Data.cpp Data.hpp `pkg-config --cflags --libs opencv` -std=c++11 -o main
