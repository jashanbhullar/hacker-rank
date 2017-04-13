import math
AB=input()
BC=input()
AC=math.sqrt(pow(AB,2)+pow(BC,2))
MBC=float(math.degrees(math.asin(AB/AC)))
print(str(int(round(MBC,0)))+"°")
