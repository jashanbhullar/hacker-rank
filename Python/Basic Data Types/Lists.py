if __name__ == '__main__':
    N = int(raw_input())
    l = list()
    for i in range(N):
        cmd = raw_input().split()
        if cmd[0] =="insert":
            l.insert(int(cmd[1]),int(cmd[2]))
        elif cmd[0] =="remove":
            l.remove(int(cmd[1]))
        elif cmd[0] =="print":
            print(l)
        elif cmd[0] == "append":
            l.append(int(cmd[1]))
        elif cmd[0] == "sort":
            l.sort()
        elif cmd[0] == "pop":
            l.pop(-1)
        elif cmd[0] == "reverse":
            l.reverse()
        else:
            print("no valid option")
