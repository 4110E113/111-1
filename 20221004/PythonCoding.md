# PythonCoding

- [python tutorial](https://www.w3schools.com/python/)
- [python tutorial](https://www.tutorialspoint.com/python/index.htm)

# 整數的各種運算 Python Operators    
- [參考](https://www.w3schools.com/python/python_numbers.asp) 
- [參考](https://zh.m.wikibooks.org/zh-tw/Python/%E8%BF%90%E7%AE%97%E7%AC%A6)

# Python Arithmetic Operators

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


```python
x = 5
y = 3
# ! is not
print(x != y)
```

# Python Logical Operators


```python
x = 3

print(not(x > 3 and x < 10))
```

# Python Identity Operators


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


```python
x = ["1", "0"]

print("1" not in x)
```

# Python Bitwise Operators

```python
# &  AND Sets each bit to 1 if both bits are 1
# |	 OR	Sets each bit to 1 if one of two bits is 1
# ^	 XOR Sets each bit to 1 if only one of two bits is 1
# ~  NOT Inverts all the bits
# << Zero fill left shift	Shift left by pushing zeros in from the right and let the leftmost bits fall off
# >> Signed right shift	Shift right by pushing copies of the leftmost bit in from the left, and let the rightmost bits fall off

```

# 字串str的各種運算 [參考](https://www.w3schools.com/python/python_strings.asp)

# Slicing

```python
x = "hey, 4110E113!"
print(x[:8])
```

# Modify Strings

```python
a = "hello, 4110e113!"
print(a.upper())
```

```python

x ="HELLO, 4110E113"
print(lower())

```python
a = "      Hello, 4110E113!         "
print(a.strip())
```

```python
#The replace() method replaces a string with another string
a = "Hello, 3000E113!"
print(a.replace("300", "411"))
```
# String Concatenation

```python
## To concatenate, or combine, two strings you can use the + operator
a = "hey"
b = "4110E113"
c = a + "\t" + b
print(c)
```

# String Format
```python
height = 100
x = "my height is {}"
print(x.format(height))
```

# Escape Characters
```python
txt = "i'm good\t maybe\nnice to meet u"
print(txt)
```

# Python built-in String methods [連結](https://www.w3schools.com/python/python_strings_methods.asp)

## capitalize()
```python
x = "hElLo, HeLlO"
x.capitalize()
```
## count()
```python
x = "Hello, 4110E113"
y = "l"
x.count(y)
```

# 列表list的各種運算  [參考](https://www.w3schools.com/python/python_lists.asp)

# Access List Items

```python
#Since lists are indexed, lists can have items with the same value
x = ["apple", "banana", "cherry", "apple", "cherry"]
print(x)
```

# Change List Items
```python
x = ["a", "b", "c"]
x[0:2] = "x", "y"
print(x)
```
# Add List Items
```python
x = [1, 2, 3]
x.insert(0,0)
print(x)
```
# Remove List Items
```python
x = ["1", "2", "3"]
del x[0]
print(x)
```
# Loop Lists
```python
txt = ["0", "1", "2"]
for x in txt:
  print(x)
  ```
# List Comprehension
```python
num1 = ["0422530", "12346271", "2456", "3345783", "4230462"]
num2 = []

for x in num1:
  if "0" in x:
    num2.append(x)

print(num2)
```
# Sort Lists
```python
num = [0, 1, 2, 3, 4]
num.sort()
print(num)
```
# Copy Lists
```python
num1 = ["0", "1", "2"]
num2 = num1.copy()
print(num2)
```
# Join Lists
```python
num1 = [4, 1, 1]
num2 = [0, "E", 1, 1, 3]

num1.extend(num2)
print(num1)
```
# Python built-in List methods [連結](https://www.w3schools.com/python/python_lists_methods.asp)

## .append()
```python
num = ['0', '1', '2']
num.append("3")
print(num)
```

# 字典dict的各種運算 [參考](https://www.w3schools.com/python/python_dictionaries.asp)


# Access Items
```python
student = {
  "ID": "4110E113",
  "name": "wea",
}
x = student["ID"]
print(x)
```
# Change Items
```python
student = {
  "ID": "4110E113",
  "name": "wea",
}
student["name"] = "wearan"
print(student)
```

# Add Items




# Remove Items




# Loop Dictionaries




# Copy Dictionaries




# Nested Dictionaries




# Dictionary Methods
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






