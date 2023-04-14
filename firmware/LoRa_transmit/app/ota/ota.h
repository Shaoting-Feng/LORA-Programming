/*
Description: Implements the basic functionalities over the air update.
*/
#ifndef _APP_OTA_H_
#define _APP_OTA_H_

/**########################Variables and Types############################**/
/* Packet Types */
#define PKT_Type_Data           0xDD
#define PKT_Type_ACK            0xAA
#define PKT_Type_Update_Done    0xFF


/* Nework */
#define OTA_BR_MISS             10
extern uint16_t data_sequence;
extern uint16_t ack_sequence;
extern uint8_t br_miss;






#endif
