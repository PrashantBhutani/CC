#! /usr/bin/python

def reverse(num):
    temp = 0
    while(num):
        temp = temp*10 + num%10
        num /=10
        
    return temp
    
def main_func():
    iterator = int(raw_input())
    while(iterator):
        rawline = raw_input().split(' ')
        num1 = int(rawline[0])
        num2 = int(rawline[1])
        print reverse(reverse(num1)+reverse(num2))
        iterator -= 1
        
if __name__ == '__main__':
    main_func()
