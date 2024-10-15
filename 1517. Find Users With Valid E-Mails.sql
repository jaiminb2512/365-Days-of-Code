SELECT user_id, name, mail
FROM Users
WHERE RIGHT(mail, 13) = '@leetcode.com'
  AND LEFT(mail, LENGTH(mail) - 13) REGEXP '^[a-zA-Z][a-zA-Z0-9_.-]*$';
