rm -rf build
cd ext_module
rm -rf build
mkdir build
cd build
cmake ..
make
cd ../..
python setup.py build
mv build/lib*/*.so ./
mv ext_module/build/libext_adder.so ./
rm -rf build
cd ext_module
rm -rf build