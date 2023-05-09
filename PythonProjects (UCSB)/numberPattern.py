def count_down(count, sub) :
    if count == 0 :
        print(count)
    else :
        return(count_down(count - sub, sub))


def print_num_pattern(num, sub) :
    if num == 0 :
        print(num)
    else :
        print(num, end=' ')
        print_num_pattern(num-sub, sub)
        



if __name__ == '__main__' :
    num1 = int(input())
    num2 = int(input())
    print_num_pattern(num1, num2)
    print(count_down(num1, num2), end=' ')
