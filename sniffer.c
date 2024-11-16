/*############################################################################################### 
 *
 *           Author         : 
 *           Date           : 
 *           File           : sniffer.c©
 *           Descriptions   : Program to recive raw packets and log tcp and ip header values
 *           Objective      :
 *           Usage          :
 *           Output         :
 *
###############################################################################################*/

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<netinet/ip_icmp.h>   //Provides declarations for icmp header
#include<netinet/udp.h>       //Provides declarations for udp header
#include<netinet/tcp.h>       //Provides declarations for tcp header
#include<netinet/ip.h>        //Provides declarations for ip header
#include<netinet/if_ether.h>  //For ETH_P_ALL
#include<net/ethernet.h>      //For ethernet header
#include<sys/socket.h>
#include<arpa/inet.h>


// main program
int main(int argc, char* argv[])
{
	return 0;
}

