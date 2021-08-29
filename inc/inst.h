#pragma once

typedef char byte;
typedef short dword;

void nop(void);
void _int(byte);
void mov(byte, byte);
void jmp(byte);
void map(byte, byte, dword);
void seg(byte);
void out(byte, byte);
void in(byte, byte);
void cmp(byte, byte);
void jg(byte);
void je(byte);
void jge(byte);
void push(byte);
void pop(void);
void read(void);
void inc(byte);
void dec(byte);
void add(byte, byte);
void mul(byte, byte);
void divi(byte, byte);
void mod(byte);
void sur(dword);
void call(dword);
void ret(void);
void ptr(byte, byte);
void clr(byte);
void hnj(byte, byte);
void hlt(void);
void dih(void);
void eih(void);
void des(byte);
void der(byte, byte, dword);
void dew(byte, byte, dword);
void lock(void);
void ulck(void);
void nxe(void);
void axe(void);
void hnd(byte, dword);
void ce(dword);
void cg(dword);
void cge(dword);
void or (dword);
void and (byte, byte);
void xor (byte, byte);
void nor (byte, byte);
void nand(byte, byte);
void not (byte, byte);
void bsl (byte, byte);
void bsr (byte, byte);
void qes (byte);
void qex (byte);
void stor(byte, byte, byte);
void dcl(void);
void dcx (byte);
void dcy (byte);
void rtc(byte);
void pti (byte);
void pdi (byte);
void pta (byte);
void ptd (byte);
void hll (byte);
void hlu (byte);
void sseg(byte);
void nxip(byte);
void jb(void);
void nmov(byte, byte);
void ncmp(byte, byte);
void sub(byte, byte);

enum {
	eax = 0xF5,
	ebx,
	ecx,
	edx,
	eflgs,
	ec2,
	eip,
	ec1,
	esl,
	ec0,
	ec3
};

enum {
	BIOSCALL,
	RTC,
	POWEROFF,
	DIVBY0,
	INVALIDOP,
	WRITEERROR,
	SEGSWITCH,
	ALLOWEXEC,
	READFAIL,
	SYSAPI,
	DISKWRITE,
	ENABLEINTERUPT
};

typedef long reg;

union {
	reg v;
	struct {
		byte sews; // seg write
		byte sexs; // seg exec
		byte active : 4; // active seg
		byte interupt : 4; // interupt handling segment
		byte drive : 4; // active drive
		byte reserved : 4; // reserved
	};
}_ec0; // control register 0
union {
	reg v;
	struct {
		byte calls : 1; // in call or not 
		byte preadr; // used for jb
		byte ptrreg : 3; // register mapped to
		byte ptradr; // address
		byte ptractive : 1; // activity
		byte intactive : 1; // interupts enabled
		byte hlted : 1; // cpu halted
		byte executing : 3; // executing segment
		byte ptrseg : 3; // pointer segment
		byte reserved : 3; // reserved
	};
}_ec1; // control register 1
union {
	reg v;
	struct {
		byte x; // console x
		byte y; // console y
		dword ihtl; // interupt handler lock controller
	};
}_ec2; // contorl register 2
union {
	reg v;
	struct {
		byte activeint : 4; // active interupt id
		byte jmpadr : 8; // nxip
		byte inint : 1; // in interupt
	};
}_ec3; // control register 3
