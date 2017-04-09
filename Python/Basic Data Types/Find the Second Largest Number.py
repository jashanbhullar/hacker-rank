if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    print max(filter((lambda x: x != max(arr)), arr))
