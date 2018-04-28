def is_magicnum(num):
    i = 0
    ans = 0
    sum_left , sum_right = num[i], sum(num[i+1:])
    if sum_left == sum_right:
        ans += 1
    length = len(num)
    while i + 1 < length:
        i += 1
        sum_left += num[i]
        sum_right -= num[i]
        if sum_left == sum_right:
            ans += 1
    print(ans)
        

input_number  = 454003622
num = list(map(int, str(input_number)))
is_magicnum(num)