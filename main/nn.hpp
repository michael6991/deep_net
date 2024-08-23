#ifndef __FULLY_CONNECTED_NETWORK_H__
#define __FULLY_CONNECTED_NETWORK_H__
#pragma once

#include "layer.hpp"


using namespace std;


class FullyConnectedNetwork 
{
    private:
        // uint32_t depth = 0;      // Network depth
        vector<Layer *> layers;     // input layer & hidden layers & output layer
        // Layer * in = nullptr;    // convinience pointer to input layer
        // Layer * out = nullptr;   // convinience pointer to output layer


    public:
        // Constructor with initialization list
        FullyConnectedNetwork()
        {

        }

        // Copy constructor declaration
        FullyConnectedNetwork(const FullyConnectedNetwork &other);
        

        // Destructor (cleaup routine)

        // Forward propagation through a typical deep neural network
        int forward_propagation(vector<float> x, vector<float> y);

        float loss();

        // add fully connected layer with a given number of mlps
        Layer * add_layer(uint32_t n, bool init_random, uint32_t layer_num,  string layer_name);
};


#endif /* __FULLY_CONNECTED_NETWORK_H__ */