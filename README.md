
# Network Packet Generator



## introduction

One of the key requirements of network is the ability to handle a large volume of data. Network should have necessary resilience to handle, which is simulated using Network packet injectors in test environment. These packet injectors create a large volume of a particular network protocol traffic and help application developers to do load testing. 

 

The goal of this project is to create a command line based Network packet injector that will generate all major protocol packets (ex: HTTP). For implementation RAW sockets are used.




## Requirements Details

Here is the list of requirements that need to be implemented in this project. 
1) The packet generator should provide a prompt to the user upon invocation “PG>”
2) It should provide a “help” menu that would display various packets & options supported
3) Options to be supported as follows. The user can give one or all options
4) Appropriate error handling needs to be done
5) Option details:
     - generate_tcp
     - generate_udp
     - generate_ip
     - generate_icmp
6) After packet generation it should be verified using network packet analyzer tool like Wireshark