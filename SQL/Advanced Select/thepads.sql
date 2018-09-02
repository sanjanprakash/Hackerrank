SELECT concat(Name,'(',Substring(Occupation,1,1),')') AS Name
FROM occupations
ORDER BY Name;

SELECT concat('There are a total of ',count(occupation),' ',lower(occupation),'s.') AS total
FROM occupations
GROUP BY occupation
ORDER BY total;
