# Nginx 负载均衡
单点(nginx)负载均衡demo
- 轮询模式
- ip_hash(无法自动剔除已经下线的机器)

## 说明
- 安装docker
- `docker-compose up -d` 
- `vim /etc/hosts 新增 127.0.0.1 www.site1.com`
- 访问 `www.site1.com`
- 多次刷新 看负载均衡起效