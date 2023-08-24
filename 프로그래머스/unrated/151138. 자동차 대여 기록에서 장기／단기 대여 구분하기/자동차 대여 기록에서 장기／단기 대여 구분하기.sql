SELECT 
    history_id,car_id,
    to_char(start_date,'YYYY-MM-DD') start_date ,
    to_char(end_date ,'YYYY-MM-DD') end_date ,
    (
    CASE
        WHEN to_number(to_char(end_date - start_date + 1)) >= 30 THEN '장기 대여'
        ELSE '단기 대여'
    END
    )AS RENT_TYPE
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY 
WHERE to_char(start_date, 'YYYY-MM') = '2022-09'
ORDER BY history_id desc