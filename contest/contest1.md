# NOIP模拟赛



## 时间 ：1s  空间 512M

## 都开启O2优化



## 平衡串



#### 题意

天赋与勤奋一定是分开的么？天才少年经常思考类似的问题，终于，他想明白了，勤奋本身就是一种天赋。

为了将自己的天赋发挥到极致，他决定先发明一些有关字符串的定义。

假设有两个字符串$S,T$

两个字符串的相似度：满足　$S[i] = T[j]$ 的$(i,j)$的数量

某个字符串的不稳定度为相邻字符不同的对数

现在天才少年想让你构造$N$个字符串满足每个字符串的不稳定度之和等于所有字符串两两之间的相似度之和



#### 输入格式

输入一个整数$N$ ($1 \le N \le 100$)



#### 输出格式

输出$N$行,每行一个字符串,如果有多个满足要求的答案,随意输出一种即可,每行结尾不要输出多余空格.



#### 样例输入１

```cpp
4
```



#### 样例输出１

```php+HTML
hello
little
polar
bear
```



#### 样例输入2

```
5
```



#### 样例输出２

```
abbbbbbbbbbbbczaaaaaao
c
zz
c
xxxyyyzvvv
```



#### 数据范围
