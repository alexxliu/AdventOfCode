import re

reg = r"mul\((\d{1,3}),(\d{1,3})\)"

f = open("2024/3_1_input.txt")
s = f.read()

all = re.findall(reg, s)

res = 0
for x, y in all:
    res += int(x) * int(y)

print(res)