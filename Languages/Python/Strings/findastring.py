Str, key, count = raw_input(), raw_input(), 0
for c in range(len(Str)):
    if Str[c:c + len(key)] == key:
        count += 1
print count
