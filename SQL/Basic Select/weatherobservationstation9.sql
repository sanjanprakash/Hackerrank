select distinct a.city from (select left (city, 1) as one, city from station) as a where a.one not in ('A','E','I','O','U') order by a.city;
