from collections import Counter
if __name__ == "__main__":
    k = int(input())
    arr = list(map(int,input().split()))
    res = list(Counter(arr).items())
    ky = list(Counter(arr).keys())
    vals = list(Counter(arr).values())
    inde=vals.index(1)
    print(ky[inde])