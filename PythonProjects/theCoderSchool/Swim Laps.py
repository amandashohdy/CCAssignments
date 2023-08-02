import time
lapsToSwim = int(input("How many laps will you swim? "))
print()
start = time.time() 
while (lapsToSwim != 0):
  print(lapsToSwim, "left to swim")
  input()
  lapsToSwim -= 1
end = time.time()
print("Finished", "{:.2f}".format(end - start), "seconds")
