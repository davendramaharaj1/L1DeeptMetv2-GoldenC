# L1DeepMetv2-GoldenC: A C++ and Python-Compatible Implementation of the L1DeepMETv2 Model for MET Regression
This repository provides a C++ implementation of the L1DeepMETv2 [L1DeepMETv2](https://github.com/DeepMETv2/L1DeepMETv2/tree/3f6ea5777704cfe7ed64f847f9be8735594484cc) model, originally developed in PyTorch as part of the DeepMETv2 project. The L1DeepMETv2 model leverages Edge Convolutional Networks (EdgeConv) to regress MET (Missing Transverse Energy) from L1Puppi candidates in particle physics data. In addition to a high-performance C++ implementation, this "Golden C" version offers Python bindings, allowing seamless integration of the C++ model as a Python module.

Key features of this repository include:

- A C++ implementation faithfully replicating the structure and performance of the original L1DeepMETv2 PyTorch model.
- Python bindings that enable users to interact with the C++ model directly in Python, preserving the familiar interface and usage from the original PyTorch codebase.
- Efficient model inference, suitable for both C++ and Python environments, especially where Python's performance limitations might be a concern.

## Setup
- use ```git clone --recurse-submodules``` to clone this repository
- Change the activation function from sigmoid to relu in L1DeepMETv2/model/net.py by toggling the comments for lines 29 and 30
- Create a conda environment and install pybind11 ``` conda create -n "myenv"``` followed by ```pip install pybind11```
- Follow the instructions in the README in L1DeepMETv2 to produce a dataset in L1DeepMETv2/data_ttbar in the conda environment
- Run thew following build command to create the CPython Binding: ```g++ -O3 -Wall -shared -std=c++17 -fPIC `python3 -m pybind11 --includes` binding.cpp GraphMetNetwork.cpp -o graphmetnetwork`python3-config --extension-suffix```

## Development
- Use the evaluate.ipynb notebook as a tutorial to load both the Pytorch and C++ Binding models in a python notebook environment. 
- This tutorial uses a random test data point from the test dataloader to run inference on both the pytorch and c++ model.
