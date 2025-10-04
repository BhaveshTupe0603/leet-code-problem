-- Last updated: 10/4/2025, 5:46:03 PM
SELECT 
  p.firstName, 
  p.lastName, 
  a.city, 
  a.state
FROM Person p
LEFT JOIN Address a
USING (personId);
