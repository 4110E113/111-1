# PythonCoding

- [python tutorial](https://www.w3schools.com/python/)
- [python tutorial](https://www.tutorialspoint.com/python/index.htm)

# 整數的各種運算 Python Operators    
- .[參考](https://www.w3schools.com/python/python_numbers.asp) 
- .[參考](https://zh.m.wikibooks.org/zh-tw/Python/%E8%BF%90%E7%AE%97%E7%AC%A6)

# Python Arithmetic Operators
## Arithmetic operators are used with numeric values to perform common mathematical operations

```python
x = 8
y = 7

print(x / y)
```

```python
x = 4125252
y = 2

print(x // y)
```

```python
x = 4125152
y = 2

print(x % y)
```

```python
x = 2
y = 10

print(x ** y)
```

# Python Assignment Operators
## Assignment operators are used to assign values to variables 

```python
x = 5

x **= 3

print(x)
```

```python
x = 9

x//=3

print(x)
```

# Python Comparison Operators
## Comparison operators are used to compare two values

```python
x = 5
y = 3
# ! is not
print(x != y)
```

# Python Logical Operators
## Logical operators are used to combine conditional statements

```python
x = 3

print(not(x > 3 and x < 10))
```

# Python Identity Operators
## Identity operators are used to compare the objects, not if they are equal, but if they are actually the same object, with the same memory location

```python

x = ["0", "21"]
y = ["0", "21"]
z = x

print(x is z)

# returns True because x is not the same object as y, even if they have the same content   (why)
print(x is y)

print(x == y)
```

# Python Membership Operators
## Membership operators are used to test if a sequence is presented in an object

```python
x = ["1", "0"]

print("1" not in x)
```

# Python Bitwise Operators
## Bitwise operators are used to compare (binary) numbers
## UNDERSTANDE

```python
# &  AND Sets each bit to 1 if both bits are 1
# |	 OR	Sets each bit to 1 if one of two bits is 1
# ^	 XOR Sets each bit to 1 if only one of two bits is 1
# ~  NOT Inverts all the bits
# << Zero fill left shift	Shift left by pushing zeros in from the right and let the leftmost bits fall off
# >> Signed right shift	Shift right by pushing copies of the leftmost bit in from the left, and let the rightmost bits fall off

```
# unsorted

```python
x = 1.10
y = 1
z = -35.59

print(type(x))
print(type(y))
print(type(z))
```

```python
x = 35e3
y = 12E4

print(type(x))
print(type(y))
```

```python
x = 3+5j
print(type(x))
```

```python
x = 1    
y = 2.8  
z = 1j   
#convert from int to float:
a = float(x)

#convert from float to int:
b = int(y)

#convert from int to complex:
c = complex(x)

print(a)
print(b)
print(c)

print(type(a))
print(type(b))
print(type(c))
```

```python
x = 5
y = 8

print(x != y)

```

```python
x = 8

print(x > 6 and x < 9)
```
# 字串str的各種運算 [參考](https://www.w3schools.com/python/python_strings.asp)

# Slicing
## By leaving out the start index, the range will start at the first character

```python
x = "hey, 4110E113!"
print(x[:8])
```

# Modify Strings
## Python has a set of built-in methods that you can use on strings.


## unsorted

```python

```
```python
a = '''iashuhuhqbwbdsuhfuia
auqahfoancaos
aiwdishibguefuckauwdsbbuheua.'''
print(a)
```

```python
for x in "4110E113":
  print(x)
```

```python
a = "Hello, World!"
print(a[1])
```

```python
b = "Hello, World!"
print(b[2:])
```
 

# 列表list的各種運算  [參考](https://www.w3schools.com/python/python_lists.asp)
## unsorted
```python
x = ["apple", "banana", "cherry", "apple", "cherry"]
print(x)
```

```python
list = ["apple"]
print(list[:5])
```

```python
list = ["apple", "banana", "cherry"]
print(list[0])
```

```python
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = []

for x in fruits:
  if "c" in x:
    newlist.append(x)

print(newlist)
```

```python
fruits = ["kiwi", "banana", "cherry", "apple", "water"]

newlist = [x for x in fruits if "a" in x]

print(newlist)
```

# 字典dict的各種運算 [參考](https://www.w3schools.com/python/python_dictionaries.asp)
```python
dict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 2022
}
print(dict)
```

```python
thisdict = {
  "brand": "Ford",
  "model": "1001101",
  "year": 2022
}
thisdict["color"] = "blue"
print(thisdict)
```

```python
myfamily = {
  "me" : {
    "name" : "ran",
    "year" : 2003
  },
  "bro" : {
    "name" : "Tobi",
    "year" : 2001
  },
  "sis" : {
    "name" : "Emy",
    "year" : 1998
  }
}
print(myfamily)
```






