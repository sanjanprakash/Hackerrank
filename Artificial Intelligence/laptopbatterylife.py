import numpy as np

x,y = [],[]

with open("trainingdata.txt", "r") as filestream:
    for line in filestream :
	currentline = line.split(",")
	if (float(currentline[1]) < 8.0) :
	    	x.append(float(currentline[0]))
    		y.append(float(currentline[1]))

m,b = np.polyfit(x,y,1)
inp = float(raw_input())
if (2 * inp >= 8.0) :
    print "8.00"
else :
    print round(m*inp + b,2)
