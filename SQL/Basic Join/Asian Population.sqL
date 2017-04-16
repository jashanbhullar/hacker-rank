/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/
SELECT SUM(CITY.POPULATION) FROM CITY, COUNTRY WHERE CITY.COUNTRYCODE = COUNTRY.CODE AND COUNTRY.CONTINENT = 'Asia';
