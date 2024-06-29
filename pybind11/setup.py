from glob import glob
from setuptools import setup
from pybind11.setup_helpers import Pybind11Extension

ext_modules = [
    Pybind11Extension(
        "pybind_add",
        sources=["src/bind11_add.cpp"],  # Sort source files for reproducibility
        include_dirs=["ext_module/include"],
        library_dirs=["ext_module/build"],
        libraries=["ext_adder"],
        runtime_library_dirs=["/home/gmh/Desktop/cpp_python/pybind11/ext_module/build"],
    ),
]

setup(
    name="pybind_add",
    version="1.0",
    description="cpy add 1 python module",
    ext_modules=ext_modules,
)
