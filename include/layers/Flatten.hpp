#ifndef CS133_LAYER_FLATTEN_HPP
#define CS133_LAYER_FLATTEN_HPP

class Flatten : public Layer {
public:
    Flatten();
    ~Flatten();
    void init(int cur_in_size,
              int cur_input_row,
              int cur_input_col,
              std::string name);
    void forward(std::vector<Eigen::MatrixXd> input);
};

#endif