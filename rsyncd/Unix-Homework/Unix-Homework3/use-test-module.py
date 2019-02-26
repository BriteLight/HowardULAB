import test__name__main__ as test
from sys import argv

if len(argv) !=3:
    raise Exception("usage: Take two integers, <int>  <int>")
try:
    r, t = int(argv[1]), int(argv[2])
except ValueError:
    raise Exception("Enter two integers")
print(test.multi(r,t))
