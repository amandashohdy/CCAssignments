# Amanda Shohdy
# 12/5/2021

filename = input()
file = open(filename)
contents = file.read()


xlString = contents.split("\n")
largeString = []
for item in xlString :
    if len(item) > 0 :
        info = item.split("\t")
        largeString.append(info)


midterm1 = 0
midterm2 = 0
final = 0
for item in largeString :
    average = (int(item[2]) + int(item[3]) + int(item[4])) / 3

    if average >= 90 :
        item.append("A")
    elif average >= 80 :
        item.append("B")
    elif average >= 70 :
        item.append("C")
    elif average >= 60 :
        item.append("D")
    else :
        item.append("F")

    midterm1 += int(item[2])
    midterm2 += int(item[3])
    final += int(item[4])
    

midterm1 = midterm1 / len(largeString)
midterm2 = midterm2 / len(largeString)
final = final / len(largeString)


strings = []
for item in largeString :
    strings.append("\t".join(item))
strings = "\n".join(strings)


report = open("report.txt", "w+")
report.write(f"{strings}\n\n")
report.write(f"Averages: midterm1 {midterm1:.2f}, midterm2 {midterm2:.2f}, final {final:.2f}\n")
report.close()

