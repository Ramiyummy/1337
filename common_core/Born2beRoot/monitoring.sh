#!/bin/bash
FRAM=$(free -m | awk '$1 == "Mem:" {print $2}')
URAM=$(free -m | awk '$1 == "Mem:" {print $3}')
PRAM=$(free | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')
USED_DISK=$(df --total -m | grep "total" | awk '{print $3}')
TOTAL_DISK=$(df --total -h | grep "total" | awk '{print $2}' | sed 's/G/Gb/g')
DISK_PRE=$(df --total -h | grep "total" | awk '{print $5}')
LVMT=$(lsblk | grep "lvm" | wc -l)
LVMU=$(if [ $LVMT -eq 0 ]; then echo no; else echo yes; fi)
IP=$(hostname -I)
MAC=$(ip link | grep "ether" | awk '{print $2}')
wall "	#Architecture: $(uname -a)
	#CPU physical: $(lscpu | grep "Socket(s)" | awk '{print $3}' | wc -l)
	#vCPU: $(grep "^processor" /proc/cpuinfo | wc -l)
	#Memory Usage: $URAM/${FRAM}MB ($PRAM%)
	#Disk Usage: $USED_DISK/${TOTAL_DISK}Gb ($DISK_PRE%)
	#CPU load: $(uptime | awk '{printf "%.1f%%\n", $10}')
	#Last boot: $(who -b | awk '{print $3 " " $4}')
	#LVM use: $LVMU
	#Connexions TCP: $(cat /proc/net/sockstat | awk '$1 == "TCP:" {print $3}') ESTABLISHEd
	#User log: $(users | wc -w)
	#Network: IP $IP ($MAC)
	#Sudo: $(journalctl -q _COMM=sudo | grep "COMMAND" | wc -l) cmd"
