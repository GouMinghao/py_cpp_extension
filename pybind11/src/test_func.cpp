#include <pybind11/pybind11.h>

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

PYBIND11_MODULE(pybind_add, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("add", &add, "A function that adds two numbers");
    py::class_<AddClass>(m, "AddClass")
        .def(py::init<const int &, const int &>())
        .def("add", &AddClass::add);
}