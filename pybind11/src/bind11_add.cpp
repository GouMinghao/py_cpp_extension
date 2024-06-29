#include <pybind11/pybind11.h>
#include "ext_adder.h"

namespace py = pybind11;

class AddClass
{
private:
    int i;
    int j;
public:
    AddClass(int i, int j){
        this -> i = i;
        this -> j = j;
    }
    int add()
    {
        return this -> i + this -> j;
    }
};

int add(int i, int j)
{
    return i + j;
}

int ext_add(int i, int j)
{
    ExtAdder ext_adder(i, j);
    return ext_adder.apply_add();
}

PYBIND11_MODULE(pybind_add, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("add", &add, "A function that adds two numbers");
    m.def("ext_add", &ext_add, "A ext add function");
    py::class_<AddClass>(m, "AddClass")
        .def(py::init<const int &, const int &>())
        .def("add", &AddClass::add);
}