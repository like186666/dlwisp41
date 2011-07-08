/* See license.txt for license information. */

// these bit definitions are specific to WISP 4.1 DL

#define SENSOR_DATA_TYPE_ID       0x0B

#define ACCEL_ENABLE_BIT          BIT5   // 1.5
#define SET_ACCEL_ENABLE_DIR      P1DIR |= ACCEL_ENABLE_BIT
#define CLEAR_ACCEL_ENABLE_DIR    P1DIR &= ~ACCEL_ENABLE_BIT
#define TURN_ON_ACCEL_ENABLE      P1OUT |= ACCEL_ENABLE_BIT
#define TURN_OFF_ACCEL_ENABLE     P1OUT &= ~ACCEL_ENABLE_BIT

#define DATA_LENGTH_IN_WORDS      3
#define DATA_LENGTH_IN_BYTES      (DATA_LENGTH_IN_WORDS*2)

unsigned char sensor_busy;

void init_sensor();

void read_sensor(unsigned char volatile *target);
