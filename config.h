FILL IN THESE WITH YOUR OWN CREDENTIALS
#define DEV_EUI { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define APP_EUI { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define APP_KEY { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }

#define lorawan_adr          LORAWAN_ADR_ON
#define lorawan_datarate     DR_0
#define lorawan_tx_power     TX_POWER_5
#define lorawan_join_trials  3

#define lorawan_class CLASS_A
#define lora_confirm LMH_UNCONFIRMED_MSG //LMH_UNCONFIRMED_MSG
#define lorawan_port LORAWAN_APP_PORT

#define lorawan_buffer_size 64
#define lorawan_tx_interval 600000 // 5 mins: 300000; 10 mins: 600000

#define green LED_GREEN
#define blue  LED_BLUE

#define dhtPin  WB_IO1
#define dhtType DHT11

//----------------------------------------------------------------------

static void lorawan_has_joined_handler(void);
static void lorawan_join_failed_handler(void);
static void lorawan_rx_handler(lmh_app_data_t *app_data);
static void lorawan_confirm_class_handler(DeviceClass_t Class);
static void lora_send(void);
static uint32_t timers_init(void);

uint8_t nodeDeviceEUI[8] = DEV_EUI;
uint8_t nodeAppEUI[8] = APP_EUI;
uint8_t nodeAppKey[16] = APP_KEY;

static uint32_t send_sucess = 0;
static uint32_t send_fail = 0;

//----------------------------------------------------------------------

void criticalError() {
  ledOff(green);
  while (1) {
    digitalToggle(blue);
    delay(1000);
  }
}
