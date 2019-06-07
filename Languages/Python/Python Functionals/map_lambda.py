cube = lambda x: x*x*x # complete the lambda function 

def fibonacci(n):
    # return a list of fibonacci numbers
    arr = []
    if (n > 0) :
        if (n >= 2) :
            arr = [0,1]
            while (n > 2) :
                arr.append(arr[-1] + arr[-2])
                n -= 1
        else :
            arr = [0]
    return arr
if __name__ == '__main__':
