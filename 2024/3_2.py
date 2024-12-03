import re

do = r"do\(\)"
dont = r"don't\(\)"

reg = r"mul\((\d{1,3}),(\d{1,3})\)"

f = open("2024/inputs/3.txt")
s = f.read()

all = re.finditer(rf"{do}|{dont}|{reg}", s)

res = 0
enabled = True
for match in all:
    instruction = match.group()
    
    if re.match(do, instruction):
        enabled = True
    elif re.match(dont, instruction):
        enabled = False
    else:
        if enabled:
            x, y = map(int, re.match(reg, instruction).groups())
            res += x * y

print(res)