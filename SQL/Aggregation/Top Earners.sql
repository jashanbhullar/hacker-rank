/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/
SELECT (SALARY * MONTHS), COUNT(*) FROM EMPLOYEE GROUP BY 1 ORDER BY 1 DESC LIMIT 1;
