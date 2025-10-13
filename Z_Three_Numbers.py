import sys
input = lambda: sys.stdin.readline().strip() 

def solve():
    k,s = map(int, input().split())
    count = 0

    for x in range (k+1):
        for y in range(k+1):
            z = s - (x + y)
            if(0<= z <= k): 
                count += 1
    
    print(count)

def main():
        solve()

if __name__ == "__main__":
    main()

