# 网络基础

## TCP/IP五层模型


常见的应用层使用TCP的协议
ftp:21
ssh:22
smtp:23
http:80


## TCP/UDP
**TCP**
特点：
1. 面向连接，三次握手，四次挥手
SYN三次握手
MSS默认536字节，对应IP数据包就是536+40(IP头+TCP头)的长度
异常情况
client发送的SYN的第一个包丢了？

server给client回的SYN+ACK 丢了？

client给server回的ACK丢了？



四次挥手

半关闭：
    close后只是本段到对端的写关闭了，仍然可以继续读对端发送的数据。

close:

shutdown:




2. 丢包,乱序,重组



3. 流量和拥塞控制



4. time_wait产生的原因和危害，处理

场景：



socket：




**UDP**
特点：
1. 无连接
2. 存在丢包，乱序，不可靠


场景：




## IP

1. IP地址
A类：

B类：

C类：

D类：

广播地址：

多播地址：


组播地址：

环回地址：



2. 分片


## MTU

	数据帧由首部(14字节)+以太网数据(46-1500)+尾部(4个字节)组成，尾部4个字节是帧校验序列。
	MAC地址6个字节，前三个字节表示厂商编号，后三个字节是流水编号。
	
**巨帧**
大多数厂商设备已经支持，不是IEEE标准。标准以外网IP报文的最大长度是1500字节，不包括以太网头和FCS
优点：
    1.小包封装二层信息效率不高，用来提高网络吞吐和效率
    2.减少CPU负担，小的报文，CPU花大量时间对报文分片和对分片重组


## 路由





## IPV6





## 二层相关概念
vlan:


stp/rstp/mstp协议：


二层接口



## overlay技术
vxlan

gre:


vtep:



## ARP


## DHCP




## ICMP


## IGMP


## BGP

## OSPF

## VRRP


## ALG

## NAT

## ACL























