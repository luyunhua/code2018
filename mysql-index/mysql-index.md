＃ MYSQL 索引实战

------

### 索引生效条件
假设index（a,b,c）

- 最左前缀匹配：模糊查询时，使用%匹配时：’a%‘会使用索引，’%a‘不会使用索引
条件中有or，索引不会生效
- a and b and c, a,b,c 都生效
- c and b and a, a,b,c 都生效，查询优化器的作用
- a and c，a生效，c不生效
- b and c，都不生效
- a and b > 5 and c,a和b生效，c不生效。 
- a and b != 5 and c,a生效，b和c不生效。 
- a and b IN(xx,xxx) and c a,b,c 都生效，当in内数量太多时 此索引只有a生效
- a and b > 'xxxx' and c a,b生效 c失效 range后面索引都失效