-- 코드를 입력하세요
SELECT a.board_id, a.writer_id, title, a.price,
case
when status = 'SALE' then '판매중'
when status = 'RESERVED' then '예약중'
when status = 'DONE' then '거래완료'
end as status
from used_goods_board as a
where created_date = '2022-10-05' 
order by board_id desc
