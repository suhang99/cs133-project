// Implementation of the
// Softmax activation funxtion

Softmax::Softmax() {}

Softmax::~Softmax() {}

void
Softmax::init() {
    m_type = Layer::Softmax;
}

void
Softmax::forward(std::vector<Eigen::MatrixXd> input) {
    m_in_size = input.size();
    m_input = input;
    m_row = m_input[0].rows();
    m_col = m_input[0].cols();

    for (int i = 0; i < m_in_size; ++i) {
        Eigen::MatrixXd result(m_row, m_col);
        result.array() = (m_input[i].rowwise() - m_input[i].colwise().maxCoeff()).array().exp();
        result.array().rowwise() /= result.colwise().sum();
        m_output.push_back(result);
    }
    m_out_size = m_output.size();
}