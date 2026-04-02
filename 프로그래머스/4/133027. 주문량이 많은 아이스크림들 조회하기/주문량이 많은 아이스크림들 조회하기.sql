-- 코드를 입력하세요
SELECT a.flavor
from (select flavor, sum(total_order) as c1
        from first_half
        group by flavor
     ) as a
join 
(
    select flavor, sum(total_order) as c2
    from july
    group by flavor
) as c on c.flavor = a.flavor
group by a.flavor
order by c1 + c2 desc
limit 3