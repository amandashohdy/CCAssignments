def triangle(n) :
  if (n==1) :
    print("*")
  else :
    for i in range(n) :
      print("*", end="")
    print()
    return triangle(n-1)

triangle(4)
