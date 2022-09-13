# This is linux command summary

## Server power command
## Server 종료하는법 : root권한이 있어야 됨(# mode)
## shutdown - P now or # halt - P or # init 0 : 3가지 방법이 있음

## Server rebooting (껏다가 자동으로 켜지는 방법)
### # shutdown -r now or # reboot or # init 6
### # shutdown -h +10 : 10분 후에 써버가 꺼짐(사용자에게 통보함)
### # shutdown -c : shutdown 계획 취소 함
### # shutdown -k +10 : shutdown message만 보내고 실제는 꺼지지 않음 (사용자가 너무 많을때 일시적 로그아웃 유도함)

사용자 변경 등 로그아웃 방법
# or $ logout or exit





Network card summary
Host PC IP 192.168.25.33
DNS 210.220.163.82

VMWARE Network Configulation
GATEWAY and DNS Server IP 192.168.111.2
DHCP Server IP 192.168.111.254

Server(Linux) IP 192.168.111.100
Server(B) (Linux) IP 192.168.111.200
Cilent (Linux) IP 자동아이피
Win Client IP 자동아이피

To setting up of Telnet Server
1. # dnf install -y telnet-server : Server에 Telnet server program  설치하기
2. # systemctl start telnet.socket : Server에서 Telnet 기동하기
3. # adduser user name (limht) passwd password : Telnet 사용자 및 비밀번호 생성하기
4. # firewall-config : 방화벽 열기 (방화벽 써버 public에서 텔넷 사용하기 크릭하여 설정하기)
     (firewall package 설치)
5. # systemctl enable telnet.socket (telnet server를 전원켬과 동시에 켜기)
6. # 크라이언트에서 텔넷 접속하기 c:/>telnet 192.168.111.100 (telnet server IP)

Server 고정 IP 사용하기
nmcli connection up ens160 : network 활성화하기
연결이 성공적으로 활성화되었습니다 (D-버스 활성 경로: /org/freedesktop/NetworkManager/ActiveConnection/3)
nmcli connection down ens160 : network 비활성화 하기
연결이 성공적으로 활성화되었습니다 (D-버스 활성 경로: /org/freedesktop/NetworkManager/ActiveConnection/4)
IP 고정하기
vi /etc/sysconfig/network-scripts/ifcfg-ens160 : open config file using vim editor and edit below
BOOTPROTO="dhcp" =lkj> BOOTPROTO="none"
IPADDR="192.168.111.100"in
NETMASK="255.255.255.0"
GATEWAY="192.168.111.2"
DNS1="192.168.111.2"

cat /etc/hosts : host names

vi /etc/sysconfig/network-scripts/ifcfg-ens160 : network config file
TYPE="Ethernet"                              # 인터페이스 종류
PROXY_METHOD="none"
BROWSER_ONLY="no"
BOOTPROTO="dhcp"                             # dhcp / static(none) 타입 설정
DEFROUTE="yes"
IPV4_FAILURE_FATAL="no"
IPV6INIT="no"
IPV6_AUTOCONF="yes"
IPV6_DEFROUTE="yes"
IPV6_FAILURE_FATAL="no"
IPV6_ADDR_GEN_MODE="stable-privacy"
NAME="ens3"
UUID="8bd057e4-24e5-4834-9737-1a1107b053a3"
DEVICE="ens3"                             # 인터페이스 장치 명
ONBOOT="yes"                              # 부팅 / 네트워크 재시작 시 자동 활성화 여부

Centos8 Software Update Procedure
# gsettings set org.gnome.software download-updates false
# systemctl disable dnf-makecache.service
# systemctl disable dnf-makecache.timer Removed /etc/systemd/system/multi-user.target.wants/dnf-makecache.timer
# wget  https://download.hanbit.co.kr/centos/8/This.repo

vi /etc/pam.d/gdm-paddwordwget

일반사용자의 root 권한 사용 불가 코드
vi /etc/pam.d/gdm-password 의 파일에 아래 코드를 추가 한다.
auth        required      pam_succeed_if.so user  != root quiet
# grub2-mkconfig -o /boot/grub2/grub.cfg

vi /etc/gdm/custom.conf

