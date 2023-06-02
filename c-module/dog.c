#include <Python.h>
#include <math.h>

static PyObject* mag(PyObject* self, PyObject* args) {
    double x;
    double y;
    if (!PyArg_ParseTuple(args, "dd", &x, &y)) {
        return NULL;
    }
    double result;
    result = sqrt(x * x + y * y);
    return PyFloat_FromDouble(result);
}

static PyMethodDef Methods[] = {
    {"mag", mag, METH_VARARGS, "magnitude calculation for x and y"},
    {NULL, NULL, 0, NULL},
};

static struct PyModuleDef moddef = {
    PyModuleDef_HEAD_INIT,
    "dog",
    "NULL",
    -1,
    Methods,
};

PyMODINIT_FUNC PyInit_dog(void) {
    return PyModule_Create(&moddef);
}