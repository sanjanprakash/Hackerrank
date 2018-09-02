select x.q, floor(x.p) from (select avg(ci.population) as p, co.continent as q from country co join city ci on co.code = ci.countrycode group by co.continent) as x;
