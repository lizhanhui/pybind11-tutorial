#include <pybind11/pybind11.h>

int add(int l, int r) { return l + r; }



PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
}