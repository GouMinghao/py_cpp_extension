import pybind_add

a = 2
b = 3
print("====\nBind a single function")
c1 = pybind_add.add(a, b)
print("{} + {} = {}".format(a, b, c1))

print("====\nBind a class")
adder = pybind_add.AddClass(a, b)
c2 = adder.add()
print("{} + {} = {}".format(a, b, c2))

print("====\nBind a ext lib")
c3 = pybind_add.ext_add(a, b)
print("{} + {} = {}".format(a, b, c3))
