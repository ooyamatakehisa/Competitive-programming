sint = int(input())
cnt = 0
for i in range(1, sint + 1):
    istr = str(i)
    ieight = oct(i)
    if not ("7" in istr or "7" in ieight):
        cnt += 1
print(cnt)
