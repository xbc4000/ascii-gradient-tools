# read from stdin
w, h = map(int, raw_input().split())
palette = raw_input() #radial/linear
line = raw_input().split()
type = line[0]
data = line[1:]

if type == "radial":
    cx, cy, cr = map(int, data)
else:
    x1, y1, x2, y2 = map(int, data)

dist = lambda x1, y1, x2, y2: ((x1-x2)**2 + (y1-y2)**2)**0.5

for y in range(h):
    line = ""
    for x in range(w):
        if type == "radial":
            pos = int(len(palette)*(dist(x, y, cx, cy)/cr))
        else:
            d, d1, d2 = dist(x1, y1, x2, y2), dist(x, y, x1, y1), dist(x, y, x2, y2)
            a = (d1**2+d**2-d2**2)/(2*d) if d1 != 0 else 1
            pos = int(len(palette)*a/d)
        line += palette[max(0, min(len(palette)-1, pos))]
    print line