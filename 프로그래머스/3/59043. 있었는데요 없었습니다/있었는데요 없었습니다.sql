-- 코드를 입력하세요
SELECT a.animal_id, b.name
from animal_ins as a
join animal_outs as b on a.animal_id = b.animal_id
where b.datetime < a.datetime
order by a.datetime