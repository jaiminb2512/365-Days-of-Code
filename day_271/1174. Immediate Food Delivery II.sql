SELECT ROUND(SUM(IF(ct.o_date = ct.d_date,1,0))*100/(SELECT COUNT(DISTINCT(customer_id)) FROM Delivery)
,2) AS immediate_percentage
    FROM
    (

    SELECT customer_id, MIN(order_date) AS o_date , MIN(customer_pref_delivery_date) AS d_date FROM Delivery 
    GROUP BY customer_id
    ORDER BY customer_id

    ) AS ct