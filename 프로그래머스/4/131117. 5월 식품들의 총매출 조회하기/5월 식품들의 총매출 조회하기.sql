-- 코드를 입력하세요
SELECT p.product_id, product_name, price*(sum(amount)) as total_sales
from food_product as p
join
(
    select * 
    from food_order
    where produce_date like '2022-05%'
)
as o on p.product_id = o.product_id
group by p.product_id
order by total_sales desc, p.product_id