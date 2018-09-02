select distinct a.city from (select right (city, 1) as one, city from station) as a where a.one = 'A' or a.one = 'E' or a.one = 'I' or a.one = 'O' or a.one = 'U' order by a.city;
