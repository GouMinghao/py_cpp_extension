cd cpy_add_1
rm -rf build
python setup.py build
mv build/lib*/*.so ../py_script
rm -rf build
