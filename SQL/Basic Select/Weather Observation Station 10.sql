/*
* Contributer : github.com/shikhar-07
* Email : shikharanandg@gmail.com
*/
SELECT DISTINCT CITY 
FROM STATION 
WHERE NOT (CITY LIKE '%a' OR CITY LIKE '%e' OR CITY LIKE '%i' OR CITY LIKE '%o' OR CITY LIKE '%u'); 
