	
	/*=======================
		GIANFRANCO ALONGI
			AKA
		ZENON

	PRESENTS:
		obfuscated , OR
		code-o-flated TANK
	2006-02-28
	*/


	#define TANK	" PANZER "

			
              #include<stdio.h> 
              #include<string.h>
               char *d="-_| ]=)\\";int main(int argc, char *argv[])	
              {argc=0;while(argc<0x0F){argc++;putc(*(d+3),stdout) ; } for ( argc =  0x00; argc < (0x0F >> 1) ; argc++ )
              {putc(*(d+(2>>1)),stdout);}putc('\n',stdout);argc=0;while(argc<0x0C){argc++;putc(*(d+3),stdout);}argc=7; 
              argc++;putc(*(d+3),stdout);putc(*(d+((argc>>2)+1)),stdout);
              putc(*(d+(argc>>2)),stdout);printf("_ ");for(argc=(argc>>4);
              argc< 2; argc++)        {putc(*(d+3),stdout);}for
              (argc=0;argc<            0x0002;++argc){putc(' ',stdout);
}putc(                         ' ',stdout);putc('\\',stdout);putc(*(d+((0x01) << 1)),stdout);
printf("%c",*(d+(2<<1))); for(argc = 0x00; argc < ((0x02)<<2);argc++){putc(*(d+(strlen(d)
-3)),stdout);} d++; d++; d++; d++; d++; d++;putc(*d,stdout);d--;d--;d--;d--;d--;d--;argc=
0x01;putc(*(d+0x0005),stdout);printf("%c",*(d+(argc<<2)));argc=(int)('\n');putc(argc,stdout);
{;;;;;;};argc=0;while(argc<0x09){putc(' ',stdout);argc++;} argc = 0; while( ( argc&0xFF) < (
0x007)){argc++;putc(*(d+0x01),stdout);}putc(*(d+(strlen(d) -1)),stdout);putc( '_' ,stdout);putc
('_',stdout);putc('_',stdout);putc('/',stdout);putc('_',stdout);for(argc=0x00;argc<0x02;argc++){
putc(*(d+1),stdout);}                                                       putc('\n',      stdout);argc=0;
while(    argc<8)      {putc(' ',      stdout)     ;argc++;}     putc(*(d   +2),stdout     );argc=
  0;while(argc<        0x11){         argc++;    putc(*(d       +3),stdout   );}putc(*     (d+7),
       stdout);putc       ('\n',      stdout       );argc       =0;while(    argc<9)       {putc(
            *(d+3),                                                                       stdout);
                   argc++                        ;}putc(*                             (d+7),
                        stdout);                  argc=0;                           while(
                              argc<15){          argc++;                     putc('!',stdout);
                                }putc('/',stdout);printf("\n\t\t%s\n",TANK);return 0;}

