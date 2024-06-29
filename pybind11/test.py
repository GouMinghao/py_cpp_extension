import pybind_add

a = 2
b = 3
c = pybind_add.add(a, b)
print(a, b, c)

adder = pybind_add.AddClass(5, 2)
print(adder.add())
