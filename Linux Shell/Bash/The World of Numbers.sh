read x
read y
a=`expr $x + $y`
echo "$a"
if [ $x -gt $y ]
then
 b=`expr $x - $y`
elif [ $x -lt $y ]
then
 b=`expr $x - $y`
else 
 echo "0"
fi
echo "$b"
c=`expr $x \* $y`
echo "$c"
d=`expr $x / $y`
echo "$d"
