a=0
while [ $a -lt 100 ]
do 
    if [ `expr $a % 2` != 0 ]
    then
        echo $a
    fi
	a=`expr $a + 1`
done
