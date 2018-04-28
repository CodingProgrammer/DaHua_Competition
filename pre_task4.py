from itertools import product
T = 1
n = 2
stock_price = [10, 11]
stock_num = [1, 2]
temp_result = []
result = set()
for i in range(n):
    temp_result.append([stock_price[i]*j for j in range(stock_num[i] + 1)])
for each in product(*temp_result):
    result.add(sum(each))
print(len(result))
print(result)