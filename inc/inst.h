typedef char byte;
typedef short dword;

/*
Instructions are sorted by opcode.
*/

void nop(void); // 0x01
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
void sub(byte, byte); // 0x44
