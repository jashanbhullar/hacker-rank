read x
read y
read z
if [ $x = $y ] && [ $y = $z ] && [ $x = $z ]
then 
echo "EQUILATERAL"
elif [ $x = $y ] || [ $y = $z ] || [ $x = $z ] 
then 
echo "ISOSCELES"
elif [ $x != $y ] && [ $x != $z ] && [ $y != $z ]
then
echo "SCALENE"
fi
