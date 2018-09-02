n = int (raw_input ())
x = list (map (int, raw_input ().split (" ")))
final = list (set (x))
final.sort ()
print final [len (final) - 2]
