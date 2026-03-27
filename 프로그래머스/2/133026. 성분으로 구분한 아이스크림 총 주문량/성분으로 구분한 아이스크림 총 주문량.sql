-- 코드를 입력하세요
SELECT info.ingredient_type, sum(total_order) as total_order
from first_half as half
right outer join icecream_info as info on info.flavor = half.flavor
group by info.ingredient_type
order by total_order