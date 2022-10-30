# from sys import stdin, stdout

# def main():
#    n, k = [int(c) for c in input().split()]
#    cnt = 0
#    for _ in range(n):
#       t = int(stdin.readline())
#       if t % k == 0:
#          cnt += 1
#    stdout.write(str(cnt))

# if __name__ == "__main__":
#    main()


t = input()
while t:
    n = input()
    k = input()
    s = str(input())
    Ns = s[0:k+1]
    R_Ns = Ns[::-1]
    if(s[k+2:len(Ns)] == R_Ns):
        print("YES")
    else:
        print("NO")
    t-=1

