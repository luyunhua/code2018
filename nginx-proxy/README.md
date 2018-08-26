## 说明
- 安装docker
- `docker-compose up` 
- `vim /etc/hosts 新增 127.0.0.1 www.site1.com www.site2.com`

## 测试upstream 负载均衡(www.site1.com)
- www.site1.com/index.html 轮询模式 上游服务器下线后 nginx将自动剔除请求超时服务器
- www.site1.com/api/index.json ip_hash模式 上游服务器下线后 nginx无法自动剔除



## 测试location(www.site2.com)
为了方便测试，安装了nginx echo module,可直接输出text到浏览器验证location命中情形
demo:
- curl http://www.site2.com/
- curl http://www.site2.com/documents/
- curl http://www.site2.com/images/
- etc...