SELECT id, movie, description, rating
    FROM Cinema 
    WHERE description NOT IN ('boring') AND ID % 2 = 1 
    ORDER BY RATING DESC;