template <typename T>
class Matrix2D {

private:
    int rows_;
    int cols_;
    std::unique_ptr<T[]> data_;

public:
    Matrix2D(int y, int x) : rows_(y), cols_(x), data_(std::make_unique<T[]>(x * y)) {}

    T& at(int i, int j) {
        assert(i < rows_ && j < cols_ && i >= 0 && j >= 0);
        return data_[i * cols_ + j];
    }

    int rows() const { return rows_; }
    int cols() const { return cols_; }
};