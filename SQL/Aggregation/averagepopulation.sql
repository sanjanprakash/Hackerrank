select round (p.x, 0) as z from (select avg(population) as x from city) as p;
