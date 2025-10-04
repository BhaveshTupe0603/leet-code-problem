-- Last updated: 10/4/2025, 5:45:59 PM
SELECT email AS Email
FROM Person
GROUP BY email
HAVING COUNT(*) > 1;
