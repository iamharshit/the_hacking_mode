#the target can be specified as its Host name or as its IPV4 address


nmap -iL 192.168.0.1-100
#for scanning multiple target

nmap -iL list.txt
#scanning a list of target

sudo nmap -O 45.33.49.119
#getting the operating system

sudo nmap --traceroute scanme.insecure.org
#for tracing the path

nmap -A 45.33.49.119
#for performing an aggressive scan
