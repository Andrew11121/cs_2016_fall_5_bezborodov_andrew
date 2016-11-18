curl http://www.rbc.ru/ -o "rbc1.txt"
grep -A 1 "news-feed__item__title" rbc1.txt >  Dry1.txt
sed /span*/d  Dry1.txt > Last_News.txt
#sed s/--/  Dry2.txt > Last_News.txt
#sed /???????/d Dry2.txt > Last_News.txt 
rm rbc1.txt Dry[1-2].txt

