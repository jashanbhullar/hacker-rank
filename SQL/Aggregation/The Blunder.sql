/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/
SELECT CEIL(AVG(Salary) - AVG(REPLACE(SALARY, '0', ''))) FROM EMPLOYEES;
