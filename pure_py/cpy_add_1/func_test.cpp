#include <python3.8/Python.h>
// #include<Python.h>

static PyObject* CpyFuncAdd1(PyObject* self, PyObject* args)
{
    int input;
    if (!PyArg_ParseTuple(args, "i", &input))
    {
        return NULL;
    }
    return Py_BuildValue("i", input + 1);
}

static PyMethodDef Add1Methods[]
{
    {"add1", CpyFuncAdd1, METH_VARARGS, "Add 1 to the input."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef cpyadd1module = {
    PyModuleDef_HEAD_INIT,
    "cpyadd1",
    "cpy add 1 module",
    -1,
    Add1Methods
};

PyMODINIT_FUNC PyInit_cpyadd1(void) // pay attention to the name
{
    return PyModule_Create(&cpyadd1module);
}
