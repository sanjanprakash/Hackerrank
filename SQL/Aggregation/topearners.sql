SELECT (months * salary) as earnings,count(*)
FROM employee
GROUP BY 1
ORDER BY earnings
DESC LIMIT 1;
