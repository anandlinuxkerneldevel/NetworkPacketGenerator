#ifndef PCKT_GEN_H
#define PCKT_GEN_H
/* 
   96 bit (12 bytes) pseudo header needed for tcp header checksum calculation 
*/
struct pseudo_header
{
	u_int32_t source_address;
	u_int32_t dest_address;
	u_int8_t placeholder;
	u_int8_t protocol;
	u_int16_t tcp_length;
};

/*
   Generic checksum calculation function (Not optimized)
   To find check sum
   1. Find sum of all 2 bytes ( Divide entire IP packet in short and add)
   2. Limit sum to 2 bytes (16 bits)
   3. Find the one's complement of sum
*/
unsigned short csum(unsigned short *ptr,int nbytes);
int raw_socket();
void fill_ip_header();
void fill_tcp_header();
void send_packets();
#endif
