//===========================================================================
// parameters.h
//===========================================================================
// @author: Davendra Seunarine Maharaj
// @brief: Declaration of the Hyperparameters for the GraphMetNetwork class
// @date: 11/16/2024
//===========================================================================



/** Model Hyperparameters */
#define MAX_NODES 2048 
#define NUM_FEAT 8      // each particle has 8 features 
#define CONT_DIM 6      // 6 continuous features
#define CAT_DIM 2       // 2 categorical features
#define HIDDEN_DIM 32   // size of hidden layers
#define OUTPUT_DIM 1

#define PDGS_SIZE 7
#define MAX_EDGES 4096
#define CONV_DEPTH 2

#define epsilon 0.00001
#define deltaR  0.4