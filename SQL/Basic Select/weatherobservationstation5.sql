select * from (select city, LENGTH(city) as x from station order by x desc limit 1) as a;
select * from (select city, LENGTH(city) as x from station order by x asc limit 1) as a;
