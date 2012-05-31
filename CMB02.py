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
        num = int(raw_input()) + 1
        while(num < 99999):
            temp = reverse(num)
            if temp == num:
                print num
                break
            else:
                num += 1

        iterator -= 1
        
if __name__ == '__main__':
    main_func()
