import sys
import heapq

input = sys.stdin.read
def main():
    data = input().split()
    N, M, K = int(data[0]), int(data[1]), int(data[2])
    v = []
    pq = []
    Y = 0

    for i in range(N):
        tmp = int(data[3 + i])
        heapq.heappush(pq, -tmp)  

    while -pq[0] > K:
        temp = -heapq.heappop(pq)
        Y = (Y // 2) + temp
        v.append(Y)
        heapq.heappush(pq, -(temp - M))

    print(len(v))
    for value in v:
        print(value)

if __name__ == "__main__":
    main()
