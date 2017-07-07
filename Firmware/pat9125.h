#ifndef PAT9125_H
#define PAT9125_H

//#define PAT9125_RPI
#define PAT9125_AVR

//PAT9125 registers
#define PAT9125_PID1			0x00
#define PAT9125_PID2			0x01
#define PAT9125_MOTION			0x02
#define PAT9125_DELTA_XL		0x03
#define PAT9125_DELTA_YL		0x04
#define PAT9125_MODE			0x05
#define PAT9125_CONFIG			0x06
#define PAT9125_WP				0x09
#define PAT9125_SLEEP1			0x0a
#define PAT9125_SLEEP2			0x0b
#define PAT9125_RES_X			0x0d
#define PAT9125_RES_Y			0x0e
#define PAT9125_DELTA_XYH		0x12
#define PAT9125_SHUTTER			0x14
#define PAT9125_FRAME			0x17
#define PAT9125_ORIENTATION		0x19

extern unsigned char ucPID1;
extern unsigned char ucPID2;

extern int pat9125_x;
extern int pat9125_y;
extern int pat9125_b;

int pat9125_init(unsigned char xres, unsigned char yres);
int pat9125_update();

unsigned char pat9125_rd_reg(unsigned char addr);
void pat9125_wr_reg(unsigned char addr, unsigned char data);


#endif //PAT9125_H