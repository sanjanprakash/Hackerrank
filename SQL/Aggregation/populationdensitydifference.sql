select p.x - q.y from (select max(population) as x from city) as p, (select min(population) as y from city) as q;
