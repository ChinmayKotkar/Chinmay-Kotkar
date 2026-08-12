print('The Following Operations can be performed : +,-,*,/ ')
a = float(input("Enter a Number 1: " ))
b = float(input("Enter a Number 2: " ))

while True:
  operator = input("Enter operator (+, -, *, /) or type exit to Exit: ")
  if operator == 'exit':
    break
  if operator == 'Exit':
    break
  if operator == "+":
    print('Sum is: ', a+b)
  elif operator == "-":
    print('Subtraction is : ', a-b)
  elif operator == "*":
    print('Multiplication is : ', a*b)
  elif operator == "/":
    print('Division is : ', a/b)
  else:
    print('Invalid operator')