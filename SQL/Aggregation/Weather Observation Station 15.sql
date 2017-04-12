/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/
SELECT ROUND(LONG_W,4) FROM STATION WHERE LAT_N = (SELECT MAX(LAT_N) FROM STATION WHERE LAT_N < 137.2345);
