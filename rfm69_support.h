#ifndef __RFM69_SUPPORT_H__
#define __RFM69_SUPPORT_H__


#include "Arduino.h"
#include <RH_RF69.h>

#define RFM69_BUF_LEN  RH_RF69_MAX_MESSAGE_LEN

struct rfm69_struct {
    RH_RF69 *rfm;
    byte rfm_cs_pin; 
    byte rfm_irqn_pin; 
    byte rfm_rst_pin;
    float rfm_freq;
};
void radio_init(byte rfm_cs_pin, byte rfm_irqn_pin, byte rfm_rst_pin, float rfm_freq);
uint8_t radio_read_msg(char *inp_buf, uint8_t max_len);
void radio_send_msg(char *rf69_msg );
boolean radio_check_available_msg(void); 
  
#endif
