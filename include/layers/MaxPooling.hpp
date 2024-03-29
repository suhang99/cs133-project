///@file MaxPooling.hpp
///@brief Interface of layer doing max pooling
#ifndef CS133_LAYER_MAXPOOLING_HPP
#define CS133_LAYER_MAXPOOLING_HPP

#include "../Layer.hpp"

///@brief Class of maxpooling class
///
/// This type of layer merge adjucent four data and
/// represent them by the largest one of them
class MaxPooling : public Layer {
public:
    MaxPooling();   ///< Constructor
    ~MaxPooling();  ///< Destructor
    void init(int cur_in_size,
              int cur_input_row,
              int cur_input_col,
              int non_arg1,
              int pool_row,
              int pool_col,
              int non_arg2,
              int non_arg3,
              std::string padding,
              std::string name);   ///< Initialize the layer with those arguments
    void forward(std::vector<Eigen::MatrixXd> input);  ///< Spread forward and get the response

private:
    int m_pool_row;   ///< Number of rows
    int m_pool_col;   ///< Number of columns
    std::string m_padding;   ///< Indicate whether it is needed to fill the data to certain size
};

#include "maxPooling.hpp"

#endif