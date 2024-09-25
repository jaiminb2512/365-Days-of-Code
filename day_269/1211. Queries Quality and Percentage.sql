SELECT DISTINCT 
    query_name, 
    ROUND(AVG(rating / position) OVER (PARTITION BY query_name), 2) AS quality,
    ROUND(AVG(CASE WHEN rating < 3 THEN 1 ELSE 0 END) OVER (PARTITION BY query_name) * 100, 2) AS poor_query_percentage
    FROM queries
    WHERE query_name IS NOT NULL;