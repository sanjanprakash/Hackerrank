select round(x.p,2), round(x.q,2) from (select sum(lat_n) as p, sum(long_w) as q from station) as x;
