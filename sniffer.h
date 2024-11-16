#ifndef SNIFFER_H
#define SNIFFER_H
/* To classify and process read packets according to received protocols */
void process_packet(unsigned char* , int);
/* To print IP header details */
void print_ip_header(unsigned char* , int);
/* To print TCP header details */
void print_tcp_packet(unsigned char* , int);
/* To print UDP header details */
void print_udp_packet(unsigned char * , int);
/* To print ICMP header details */
void print_icmp_packet(unsigned char* , int);
/* To print status to stdout */
void print_data (unsigned char* , int);
/* To log files */
void log_packts(int file);

#endif
