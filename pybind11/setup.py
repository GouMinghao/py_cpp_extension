from glob import glob
from setuptools import setup
from pybind11.setup_helpers import Pybind11Extension

ext_modules = [
    Pybind11Extension(
        "pybind_add",
        sorted(glob("src/*.cpp")),  # Sort source files for reproducibility
    ),
]

setup(
    name="pybind_add",
    version="1.0",
    description="cpy add 1 python module",
    ext_modules=ext_modules,
)
