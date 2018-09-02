def Rotate(start_x,start_y,direction) :
    turns = 0
    if (start_x > 0) :
        if (start_y > 0) :
            turns = 2
        else :
            turns = 3
    else :
        if (start_y > 0) :
            turns = 1

    shift = 4 - turns
    direction = (direction + shift) % 4
    return [turns,direction]

def Rerotate(grid,turns,n) :
    for i in range(turns) :
        grid = list(reversed(zip(*grid)))
    for i in range(0,n) :
        for j in range(0,n) :
            print grid[i][j],
        print

def Path(x,y,n,d) :
    [turns,new_d] = Rotate(x,y,d)
    grid = [[0] * n for _ in xrange(n)]
    count = 1
    
    if (new_d == 0) :
        for i in range(0,n) :
            if (i % 2 == 0) :
                for j in range(0,n) :
                    grid[i][j] = count
                    count += 1
            else :
                for j in range(n - 1,-1,-1) :
                    grid[i][j] = count
                    count += 1
    elif (new_d == 1) :
        for i in range(0,n) :
            grid[0][i] = count
            count += 1
        for j in range(n - 1,-1,-1) :
            if ((n - j) % 2 == 1) :
                for i in range(1,n) :
                    grid[i][j] = count
                    count += 1
            else :
                for i in range(n - 1,0,-1) :
                    grid[i][j] = count
                    count += 1
    elif (new_d == 2) :
        for i in range(0,n) :
            grid[i][0] = count
            count += 1
        for i in range(n - 1,-1,-1) :
            if ((n - i) % 2 == 1) :
                for j in range(1,n) :
                    grid[i][j] = count
                    count += 1
            else :
                for j in range(n - 1,0,-1) :
                    grid[i][j] = count
                    count += 1
    else :
        for j in range(0,n) :
            if (j % 2 == 0) :
                for i in range(0,n) :
                    grid[i][j] = count
                    count += 1
            else :
                for i in range(n - 1,-1,-1) :
                    grid[i][j] = count
                    count += 1
                    
    returns = (4 - turns) % 4
    Rerotate(grid,returns,n)

n = int(raw_input())
d = raw_input()
x,y = map(int,raw_input().split())
if (d == 'n'):
    d = 0
elif (d == 'e') :
    d = 1
elif (d == 's') :
    d = 2
else :
    d = 3
ans = Path(x,y,n,d)
