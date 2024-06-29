from distutils.core import setup, Extension

module1 = Extension("cpyadd1", sources=["func_test.cpp"])
setup(name = "cpyadd1", version="1.0", description="cpy add 1 python module", ext_modules=[module1])