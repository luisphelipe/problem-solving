box = [x for x in input().split()]
for i in range(len(box[0])):
    for q in range(len(box)-2, -1, -1):
        index = q
        while box[index][i] == "#" and box[index+1][i] == ".":
            b1 = "."
            b2 = "#"
            
            if len(box[index]) > 1 and i > 0:
                b1 = box[index][:i] + b1
                b2 = box[index+1][:i] + b2 

            if len(box[index]) > 1 and i < len(box[index])-1:
                b1 = b1 + box[index][i+1:]
                b2 = b2 + box[index+1][i+1:]

            box[index] = b1
            box[index+1] = b2

            index += 1
            if index == len(box)-1: break
             
print(box)
