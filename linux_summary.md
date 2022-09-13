# This is linux command summary

## Server power command
### Server 종료하는법 : root권한이 있어야 됨(# mode)
### shutdown - P now or # halt - P or # init 0 : 3가지 방법이 있음

## Server rebooting (껏다가 자동으로 켜지는 방법)
#### # shutdown -r now or # reboot or # init 6
#### # shutdown -h +10 : 10분 후에 써버가 꺼짐(사용자에게 통보함)
#### # shutdown -c : shutdown 계획 취소 함
#### # shutdown -k +10 : shutdown message만 보내고 실제는 꺼지지 않음 (사용자가 너무 많을때 일시적 로그아웃 유도함)

# 사용자 변경 등 로그아웃 방법
## # or $ logout or exit

# Network card summary
### Host PC IP 192.168.25.33
### DNS 210.220.163.82

# VMWARE Network Configulation
### GATEWAY and DNS Server IP 192.168.111.2
### DHCP Server IP 192.168.111.254

### Server(Linux) IP 192.168.111.100
### Server(B) (Linux) IP 192.168.111.200
### Cilent (Linux) IP 자동아이피
### Win Client IP 자동아이피

# To setting up of Telnet Server
1. # dnf install -y telnet-server : Server에 Telnet server program  설치하기
2. # systemctl start telnet.socket : Server에서 Telnet 기동하기
3. # adduser user name (limht) passwd password : Telnet 사용자 및 비밀번호 생성하기
4. # firewall-config : 방화벽 열기 (방화벽 써버 public에서 텔넷 사용하기 크릭하여 설정하기)
     (firewall package 설치)
5. # systemctl enable telnet.socket (telnet server를 전원켬과 동시에 켜기)
6. # 크라이언트에서 텔넷 접속하기 c:/>telnet 192.168.111.100 (telnet server IP)

# Server 고정 IP 사용하기
1. nmcli connection up ens160 : network 활성화하기
2. 연결이 성공적으로 활성화되었습니다 (D-버스 활성 경로: /org/freedesktop/NetworkManager/ActiveConnection/3)
3. nmcli connection down ens160 : network 비활성화 하기
4. 연결이 성공적으로 활성화되었습니다 (D-버스 활성 경로: /org/freedesktop/NetworkManager/ActiveConnection/4)
# IP 고정하기
1. vi /etc/sysconfig/network-scripts/ifcfg-ens160 : open config file using vim editor and edit below
2. BOOTPROTO="dhcp" =lkj> BOOTPROTO="none"
3. IPADDR="192.168.111.100"in
4. NETMASK="255.255.255.0"
5. GATEWAY="192.168.111.2"
6. DNS1="192.168.111.2"

# cat /etc/hosts : host names

1. vi /etc/sysconfig/network-scripts/ifcfg-ens160 : network config file
2. TYPE="Ethernet"                              # 인터페이스 종류
3. PROXY_METHOD="none"
4. BROWSER_ONLY="no"
5. BOOTPROTO="dhcp"                             # dhcp / static(none) 타입 설정
6. DEFROUTE="yes"
7. IPV4_FAILURE_FATAL="no"
8. IPV6INIT="no"
9. 0IPV6_AUTOCONF="yes"
10. IPV6_DEFROUTE="yes"
11. IPV6_FAILURE_FATAL="no"
12. IPV6_ADDR_GEN_MODE="stable-privacy"
13. NAME="ens3"
14. UUID="8bd057e4-24e5-4834-9737-1a1107b053a3"
15. DEVICE="ens3"                             # 인터페이스 장치 명
16. ONBOOT="yes"                              # 부팅 / 네트워크 재시작 시 자동 활성화 여부

# Centos8 Software Update Procedure
### gsettings set org.gnome.software download-updates false
### systemctl disable dnf-makecache.service
### systemctl disable dnf-makecache.timer Removed /etc/systemd/system/multi-user.target.wants/dnf-makecache.timer
# wget  https://download.hanbit.co.kr/centos/8/This.repo

# vi /etc/pam.d/gdm-paddwordwget

#### 일반사용자의 root 권한 사용 불가 코드
#### vi /etc/pam.d/gdm-password 의 파일에 아래 코드를 추가 한다.
#### auth        required      pam_succeed_if.so user  != root quiet
# grub2-mkconfig -o /boot/grub2/grub.cfg

# vi /etc/gdm/custom.conf

# Linux Commands frequently used by Linux Sysadmins – Part 1:
1. ip – from Iproute2, a collection of utilities for controlling TCP/IP networking and traffic control in Linux.
2. ls – list directory contents.
3. df – display disk space usage.
4. du – estimate file space usage.
5. free – display memory usage.
6. scp – securely Copy Files Using SCP, with examples.
7. find – locates files based on some user-specified criteria.
8. ncdu – a disk utility for Unix systems.
9. pstree – display a tree of processes.
10. last – show a listing of last logged-in users.
11. w – show a list of currently logged-in user sessions.
12. grep – Search a file for a pattern of characters, then display all matching lines.

## Linux Commands frequently used by Linux Sysadmins – Part 2:
13. uptime – shows system uptime and load average.
14. top – shows an overall system view.
15. vmstat – shows system memory, processes, interrupts, paging, block I/O, and CPU info.
16. htop – interactive process viewer and manager.
17. dstat – view processes, memory, paging, I/O, CPU, etc., in real-time. All-in-one for vmstat, iostat, netstat, and ifstat.
18. iftop – network traffic viewer.
19. nethogs – network traffic analyzer.
20. iotop – interactive I/O viewer. Get an overview of storage r/w activity.
21. iostat – for storage I/O statistics.
22. netstat – for network statistics.
23. ss – utility to investigate sockets.
24. atop – For Linux server performance analysis.
25. Glances and nmon – htop and top Alternatives:
26. ssh – secure command-line access to remote Linux systems.
27. sudo – execute commands with administrative privilege.
28. cd – directory navigation.
29. pwd – shows your current directory location.
30. cp – copying files and folders.
31. mv – moving files and folders.
32. rm – removing files and folders.
33. mkdir – create or make new directories.
34. touch – used to update the access date and modification date of a computer file or directory.
35. man – for reading system reference manuals.
36. apropos – Search man page names and descriptions.

## Linux Commands frequently used by Linux Sysadmins – Part 3:
37. rsync – remote file transfers and syncing.
38. tar – an archiving utility.
39. gzip – file compression and decompression.
40. b2zip – similar to gzip. It uses a different compression algorithm.
41. zip – for packaging and compressing (to archive) files.
42. locate – search files in Linux.
43. ps – information about the currently running processes.
44. Making use of Bash scripts. Example: ./bashscript.sh
45. cron – set up scheduled tasks to run.
46. nmcli – network management.
47. ping – send ICMP ECHO_REQUEST to network hosts.
48. traceroute – check the route packets take to a specified host.
49. mtr – network diagnostic tool.
50. nslookup – query Internet name servers (NS) interactively.
51. host – perform DNS lookups in Linux.
52. dig – DNS lookup utility.

## Linux Commands frequently used by Linux Sysadmins – Part 4:
53. wget – retrieve files over HTTP, HTTPS, FTP, and FTPS.
54. curl – transferring data using various network protocols. (supports more protocols than wget)
55. dd – convert and copy files.
56. fdisk – manipulate the disk partition table.
57. parted – for creating and manipulating partition tables.
58. blkid – command-line utility to locate/print block device attributes.
59. mkfs – build a Linux file system.
60. fsck –  tool for checking the consistency of a file system.
61. whois – client for the whois directory service.
62. nc – command-line networking utility. (Also, see 60 Linux Networking commands and scripts.)
63. umask – set file mode creation mask.
64. chmod – change the access permissions of file system objects.
65. chown – change file owner and group.
66. chroot – run command or interactive shell with a special root directory.
67. useradd – create a new user or update default new user information.
68. userdel – used to delete a user account and all related files.
69. usermod – used to modify or change any attributes of an existing user account.

## Linux Commands frequently used by Linux Sysadmins – Part 5:
70. vi – text editor.
71. cat – display file contents.
72. tac – output file contents, in reverse.
73. more – display file contents one screen/page at a time.
74. less – similar to the more command with additional features.
75. tail – used to display the tail end of a text file or piped data.
76. dmesg – prints the message buffer of the kernel ring.
77. journalctl – query the systemd journal.
78. kill – terminate a process.
79. killall  – Sends a kill signal to all instances of a process by name.
80. sleep – suspends program execution for a specified time.
81. wait – Suspend script execution until all jobs running in the background have been terminated.
82. nohup – Run Commands in the Background.
83. screen – hold a session open on a remote server. (also a full-screen window manager)
84. tmux – a terminal multiplexer.
85. passwd – change a user’s password.
86. chpassword –
87. mount / umount – provides access to an entire filesystem in one directory.
88. systemctl – Managing Services (Daemons).
89. clear – clears the screen of the terminal.
90. env -Run a command in a modified environment.

## Misc commands:
91. cheat – allows you to create and view interactive cheatsheets on the command-line.”
92. tldr – Collaborative cheatsheets for console commands.
93. bashtop – the ‘cool’ top alternative.
94. bpytop – Python port of bashtop.
95. btop – C++ vers6ion and continuation of bashtop and bpytop.
96. nload – a super simple, command-line network interface monitoring tool.

# This list of Linux Networking commands and scripts will receive ongoing updates:

1. aria2 – downloading just about everything. Torrents included.
2. arpwatch – Ethernet Activity Monitor.
3. bmon – bandwidth monitor and rate estimator.
4. bwm-ng – live network bandwidth monitor.
5. curl – transferring data with URLs. (or try httpie)
6. darkstat – captures network traffic, usage statistics.
7. dhclient – Dynamic Host Configuration Protocol Client
8. dig – query DNS servers for information.
9. dstat – replacement for vmstat, iostat, mpstat, netstat and ifstat.
10. ethtool – utility for controlling network drivers and hardware.
11. gated – gateway routing daemon.
12. host – DNS lookup utility.
13. hping – TCP/IP packet assembler/analyzer.
14. ibmonitor – shows bandwidth and total data transferred.
15. ifstat –  report network interfaces bandwidth.
16. iftop – display bandwidth usage.
17. ip (PDF file) – a command with more features that ifconfig (net-tools).
18. iperf3 – network bandwidth measurement tool. (above screenshot Stacklinux VPS)
19. iproute2 – collection of utilities for controlling TCP/IP.
20. iptables – take control of network traffic.
21. IPTraf – An IP Network Monitor.
22. iputils – set of small useful utilities for Linux networking.
23. iw – a new nl80211 based CLI configuration utility for wireless devices.
24. jwhois (whois) – client for the whois service.
25. “lsof -i” – reveal information about your network sockets.
26. mtr – network diagnostic tool.
27. net-tools – utilities include: arp, hostname, ifconfig, netstat, rarp, route, plipconfig, slattach, mii-tool, iptunnel and ipmaddr.
28. ncat – improved re-implementation of the venerable netcat.
29. netcat – networking utility for reading/writing network connections.
30. nethogs – a small ‘net top’ tool.
31. Netperf – Network bandwidth Testing.
32. netplan – Netplan is a utility for easily configuring networking on a linux system.
33. netsniff-ng – Swiss army knife for daily Linux network plumbing.
34. netwatch – monitoring Network Connections.
35. ngrep – grep applied to the network layer.
36. nload – display network usage.
37. nmap – network discovery and security auditing.
38. nmcli – a command-line tool for controlling NetworkManager and reporting network status.
39. nmtui – provides a text interface to configure networking by controlling NetworkManager.
40. nslookup – query Internet name servers interactively.
41. ping – send icmp echo_request to network hosts.
42. route – show / manipulate the IP routing table.
43. slurm – network load monitor.
44. snort – Network Intrusion Detection and Prevention System.
45. smokeping –  keeps track of your network latency.
46. socat – establishes two bidirectional byte streams and transfers data between them.
47. speedometer – Measure and display the rate of data across a network.
48. speedtest-cli – test internet bandwidth using speedtest.net
49. ss – utility to investigate sockets.
50. ssh –  secure system administration and file transfers over insecure networks.
51. tcpdump – command-line packet analyzer.
52. tcptrack – Displays information about tcp connections on a network interface.
53. telnet – user interface to the TELNET protocol.
54. tracepath – very similar function to traceroute.
55. traceroute – print the route packets trace to network host.
56. vnStat – network traffic monitor.
57. websocat – Connection forwarder from/to web sockets to/from usual sockets, in style of socat.
58. wget –  retrieving files using HTTP, HTTPS, FTP and FTPS.
59. Wireless Tools for Linux – includes iwconfig, iwlist, iwspy, iwpriv and ifrename.
60. Wireshark – network protocol analyzer.
61. Suggestions welcomed.
