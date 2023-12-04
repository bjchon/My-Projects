#
# arch.py
#
# This script implements three Python classes for three different artificial
# neural network architectures: no hidden layer, one hidden layer, and two
# hidden layers. Note that this script requires the installation of the
# PyTorch (torch) Python package.
#
# This content is protected and may not be shared, uploaded, or distributed.
#
# PLACE ANY COMMENTS, INCLUDING ACKNOWLEDGMENTS, HERE.
# I worked on this lab assignment alone.
#
# ALSO, PROVIDE ANSWERS TO THE FOLLOWING TWO QUESTIONS.
#
# Which network architecture achieves the lowest training set error?
# The network architecture with no hidden layers achieves the lowest training set error.
#
# Which network architecture tends to exhibit the best testing set accuracy?
# The network architecture with 1 hidden layer tends to exhibit the best testing set accuracy.
#
# Bryant Chon 12/13/2022
#

# PyTorch - Deep Learning Models
import torch.nn as nn
import torch.nn.functional as F


# Number of input features ...
input_size = 4
# Number of output classes ...
output_size = 3


class AnnLinear(nn.Module):
    """Class describing a linear artificial neural network, with no hidden
    layers, with inputs directly projecting to outputs."""

    def __init__(self):
        super().__init__()
        # PLACE NETWORK ARCHITECTURE CODE HERE
        self.my_layer = nn.Linear(in_features=4, out_features=3)
        

    def forward(self, x):
        # PLACE YOUR FORWARD PASS CODE HERE
        my_layer_net = self.my_layer(x)
        my_layer_act = F.relu(my_layer_net)
        y_hat = my_layer_act 
        return y_hat


class AnnOneHid(nn.Module):
    """Class describing an artificial neural network with one hidden layer,
    using the rectified linear (ReLU) activation function."""

    def __init__(self):
        super().__init__()
        # PLACE NETWORK ARCHITECTURE CODE HERE
        self.my_layer = nn.Linear(in_features=4, out_features=3)

    def forward(self, x):
        # PLACE YOUR FORWARD PASS CODE HERE
        my_layer_net = self.my_layer(x)
        my_layer_act = F.relu(my_layer_net)
        y_hat = my_layer_act 
        return y_hat


class AnnTwoHid(nn.Module):
    """Class describing an artificial neural network with two hidden layers,
    using the rectified linear (ReLU) activation function."""

    def __init__(self):
        super().__init__()
        # PLACE NETWORK ARCHITECTURE CODE HERE
        self.my_layer = nn.Linear(in_features=4, out_features=3)
    
    def forward(self, x):
        # PLACE YOUR FORWARD PASS CODE HERE
        my_layer_net = self.my_layer(x)
        my_layer_act = F.relu(my_layer_net)
        y_hat = my_layer_act 
        return y_hat
