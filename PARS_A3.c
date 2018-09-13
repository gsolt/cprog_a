/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *

******************************************************************************
* NAME           :  PARS_A3.c                                                 *
* [C] Copyright Zsolt Gergely,  2003.  All Rights Reserved                 *
*                                                                            *
* REV    DATE     PROGRAMMER         REVISION HISTORY                        *
* V2.1.6	2009.11.20.	Gergely Zsolt		Székesfehérvár, 4 db kábelköri			*
* V2.1.7	2010.04.13.	Gergely Zsolt		TMOK 70-45			*
* V2.1.8	2012.05.03.	Gergely Zsolt		20-31 -> ZE			*

*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/

extern void setdat(unsigned char *input);

/**********************************************/
/* Globals                                     */
/**********************************************/


/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setdat"   , setdat},  	
   {0      , 0 }
};*/
/*--------------------------------------------------------------------------*/
/* 'C' Block Initialization and Completion                                  */
/*--------------------------------------------------------------------------*/
/*void user_control_function(int control)
{
unsigned long		lTotal;
unsigned long		lLargest;
unsigned long		lBlockSize;
unsigned char		*byP;	
int					nI;
	
	
   switch(control)
      {
         case CB_INIT :
         	
            break;

         case CB_EXIT :
         	
         break;
      }
}
*/

/****************************************************************************/
/* Parameter strukturak feltoltese     											*/
/***************************************************************************/
void setdat(unsigned char *input)
{
	int					nI;
	TOTAL_PAR			*sT;
	
	sT = (TOTAL_PAR *)input;

/* Single command inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
sT[0].sCP[0].sCPR[nI].nSCNum  = 1;
}	
	
sT[0].sCP[0].sCPR[0].nDCStart = 0;   	sT[0].sCP[0].sCPR[0].nDCNum = 0;     sT[0].sCP[0].sCPR[0].nSCStart= 0;       sT[0].sCP[0].sCPR[0].nAckStart=0; 	sT[0].sCP[0].sCPR[0].nAckNum=0;    sT[0].sCP[0].sCPR[0].nSPOffsetCS = 0;       sT[0].sCP[0].sCPR[0].nSPOffsetLek = 0;
sT[0].sCP[0].sCPR[1].nDCStart = 0;   	sT[0].sCP[0].sCPR[1].nDCNum = 0;     sT[0].sCP[0].sCPR[1].nSCStart= 9;       sT[0].sCP[0].sCPR[1].nAckStart=0; 	sT[0].sCP[0].sCPR[1].nAckNum=0;    sT[0].sCP[0].sCPR[1].nSPOffsetCS = 15;      sT[0].sCP[0].sCPR[1].nSPOffsetLek = 16;
sT[0].sCP[0].sCPR[2].nDCStart = 0;   	sT[0].sCP[0].sCPR[2].nDCNum = 3;     sT[0].sCP[0].sCPR[2].nSCStart= 8;       sT[0].sCP[0].sCPR[2].nAckStart=0; 	sT[0].sCP[0].sCPR[2].nAckNum=0;    sT[0].sCP[0].sCPR[2].nSPOffsetCS = 8;       sT[0].sCP[0].sCPR[2].nSPOffsetLek = 9;
sT[0].sCP[0].sCPR[3].nDCStart = 3;   	sT[0].sCP[0].sCPR[3].nDCNum = 4;     sT[0].sCP[0].sCPR[3].nSCStart= 10;      sT[0].sCP[0].sCPR[3].nAckStart=7; 	sT[0].sCP[0].sCPR[3].nAckNum=1;    sT[0].sCP[0].sCPR[3].nSPOffsetCS =17;       sT[0].sCP[0].sCPR[3].nSPOffsetLek = 18;
sT[0].sCP[0].sCPR[4].nDCStart = 0;   	sT[0].sCP[0].sCPR[4].nDCNum = 0;     sT[0].sCP[0].sCPR[4].nSCStart= 11;      sT[0].sCP[0].sCPR[4].nAckStart=0; 	sT[0].sCP[0].sCPR[4].nAckNum=0;    sT[0].sCP[0].sCPR[4].nSPOffsetCS =58;       sT[0].sCP[0].sCPR[4].nSPOffsetLek = 59;
sT[0].sCP[0].sCPR[5].nDCStart = 854;   	sT[0].sCP[0].sCPR[5].nDCNum = 4;     sT[0].sCP[0].sCPR[5].nSCStart= 859;     sT[0].sCP[0].sCPR[5].nAckStart=858;sT[0].sCP[0].sCPR[5].nAckNum=1;    sT[0].sCP[0].sCPR[5].nSPOffsetCS = 5586;    sT[0].sCP[0].sCPR[5].nSPOffsetLek = 5587;
sT[0].sCP[0].sCPR[6].nDCStart = 20;   	sT[0].sCP[0].sCPR[6].nDCNum = 48;    sT[0].sCP[0].sCPR[6].nSCStart= 68;      sT[0].sCP[0].sCPR[6].nAckStart=24; 	sT[0].sCP[0].sCPR[6].nAckNum=33;   sT[0].sCP[0].sCPR[6].nSPOffsetCS = 252; sT[0].sCP[0].sCPR[6].nSPOffsetLek = 253;

sT[0].sCP[0].sCPR[7].nDCStart = 71;   	sT[0].sCP[0].sCPR[7].nDCNum = 2;     sT[0].sCP[0].sCPR[7].nSCStart= 70;      sT[0].sCP[0].sCPR[7].nAckStart=75;	sT[0].sCP[0].sCPR[7].nAckNum=1;    sT[0].sCP[0].sCPR[7].nSPOffsetCS = 263;     sT[0].sCP[0].sCPR[7].nSPOffsetLek = 264;
sT[0].sCP[0].sCPR[8].nDCStart = 0;   	sT[0].sCP[0].sCPR[8].nDCNum = 0;     sT[0].sCP[0].sCPR[8].nSCStart= 76;      sT[0].sCP[0].sCPR[8].nAckStart=0;		sT[0].sCP[0].sCPR[8].nAckNum=0;    sT[0].sCP[0].sCPR[8].nSPOffsetCS = 310;     sT[0].sCP[0].sCPR[8].nSPOffsetLek = 311;
sT[0].sCP[0].sCPR[9].nDCStart = 78;   	sT[0].sCP[0].sCPR[9].nDCNum = 3;     sT[0].sCP[0].sCPR[9].nSCStart= 77;      sT[0].sCP[0].sCPR[9].nAckStart=82;	sT[0].sCP[0].sCPR[9].nAckNum=1;    sT[0].sCP[0].sCPR[9].nSPOffsetCS = 320;     sT[0].sCP[0].sCPR[9].nSPOffsetLek = 321;
sT[0].sCP[0].sCPR[10].nDCStart = 0;   	sT[0].sCP[0].sCPR[10].nDCNum = 0;    sT[0].sCP[0].sCPR[10].nSCStart= 83;     sT[0].sCP[0].sCPR[10].nAckStart=0;	sT[0].sCP[0].sCPR[10].nAckNum=0;   sT[0].sCP[0].sCPR[10].nSPOffsetCS = 365;    sT[0].sCP[0].sCPR[10].nSPOffsetLek = 366;
sT[0].sCP[0].sCPR[11].nDCStart = 85;   	sT[0].sCP[0].sCPR[11].nDCNum = 3;    sT[0].sCP[0].sCPR[11].nSCStart= 84;     sT[0].sCP[0].sCPR[11].nAckStart=89;	sT[0].sCP[0].sCPR[11].nAckNum=1;   sT[0].sCP[0].sCPR[11].nSPOffsetCS = 373;    sT[0].sCP[0].sCPR[11].nSPOffsetLek = 374;
sT[0].sCP[0].sCPR[12].nDCStart = 90;   	sT[0].sCP[0].sCPR[12].nDCNum = 2;    sT[0].sCP[0].sCPR[12].nSCStart= 93;     sT[0].sCP[0].sCPR[12].nAckStart=0;	sT[0].sCP[0].sCPR[12].nAckNum=0;   sT[0].sCP[0].sCPR[12].nSPOffsetCS = 894;    sT[0].sCP[0].sCPR[12].nSPOffsetLek = 895;
sT[0].sCP[0].sCPR[13].nDCStart = 0;   	sT[0].sCP[0].sCPR[13].nDCNum = 0;    sT[0].sCP[0].sCPR[13].nSCStart= 94;     sT[0].sCP[0].sCPR[13].nAckStart=0;	sT[0].sCP[0].sCPR[13].nAckNum=0;   sT[0].sCP[0].sCPR[13].nSPOffsetCS = 439;    sT[0].sCP[0].sCPR[13].nSPOffsetLek = 440;
sT[0].sCP[0].sCPR[14].nDCStart = 0;   	sT[0].sCP[0].sCPR[14].nDCNum = 0;    sT[0].sCP[0].sCPR[14].nSCStart= 95;     sT[0].sCP[0].sCPR[14].nAckStart=0;	sT[0].sCP[0].sCPR[14].nAckNum=0;   sT[0].sCP[0].sCPR[14].nSPOffsetCS = 449;    sT[0].sCP[0].sCPR[14].nSPOffsetLek = 450;
sT[0].sCP[0].sCPR[15].nDCStart = 103;   	sT[0].sCP[0].sCPR[15].nDCNum = 3;    sT[0].sCP[0].sCPR[15].nSCStart= 102;    sT[0].sCP[0].sCPR[15].nAckStart=107;	sT[0].sCP[0].sCPR[15].nAckNum=1;   sT[0].sCP[0].sCPR[15].nSPOffsetCS = 500;    sT[0].sCP[0].sCPR[15].nSPOffsetLek = 501;
sT[0].sCP[0].sCPR[16].nDCStart = 97;   	sT[0].sCP[0].sCPR[16].nDCNum = 2;    sT[0].sCP[0].sCPR[16].nSCStart= 96;     sT[0].sCP[0].sCPR[16].nAckStart=101;	sT[0].sCP[0].sCPR[16].nAckNum=1;   sT[0].sCP[0].sCPR[16].nSPOffsetCS = 451;    sT[0].sCP[0].sCPR[16].nSPOffsetLek = 452;
sT[0].sCP[0].sCPR[17].nDCStart = 109;   	sT[0].sCP[0].sCPR[17].nDCNum = 3;    sT[0].sCP[0].sCPR[17].nSCStart= 108;    sT[0].sCP[0].sCPR[17].nAckStart=113;	sT[0].sCP[0].sCPR[17].nAckNum=1;   sT[0].sCP[0].sCPR[17].nSPOffsetCS = 544;    sT[0].sCP[0].sCPR[17].nSPOffsetLek = 545;
sT[0].sCP[0].sCPR[18].nDCStart = 115;   	sT[0].sCP[0].sCPR[18].nDCNum = 2;    sT[0].sCP[0].sCPR[18].nSCStart= 114;    sT[0].sCP[0].sCPR[18].nAckStart=119;	sT[0].sCP[0].sCPR[18].nAckNum=1;   sT[0].sCP[0].sCPR[18].nSPOffsetCS = 580;    sT[0].sCP[0].sCPR[18].nSPOffsetLek = 581;
sT[0].sCP[0].sCPR[19].nDCStart = 121;   	sT[0].sCP[0].sCPR[19].nDCNum = 3;    sT[0].sCP[0].sCPR[19].nSCStart= 120;    sT[0].sCP[0].sCPR[19].nAckStart=125;	sT[0].sCP[0].sCPR[19].nAckNum=1;   sT[0].sCP[0].sCPR[19].nSPOffsetCS = 616;    sT[0].sCP[0].sCPR[19].nSPOffsetLek = 617;
sT[0].sCP[0].sCPR[20].nDCStart = 127;   	sT[0].sCP[0].sCPR[20].nDCNum = 2;    sT[0].sCP[0].sCPR[20].nSCStart= 126;    sT[0].sCP[0].sCPR[20].nAckStart=131;	sT[0].sCP[0].sCPR[20].nAckNum=1;   sT[0].sCP[0].sCPR[20].nSPOffsetCS = 652;    sT[0].sCP[0].sCPR[20].nSPOffsetLek = 653;
sT[0].sCP[0].sCPR[21].nDCStart = 133;   	sT[0].sCP[0].sCPR[21].nDCNum = 2;    sT[0].sCP[0].sCPR[21].nSCStart= 132;    sT[0].sCP[0].sCPR[21].nAckStart=137;	sT[0].sCP[0].sCPR[21].nAckNum=1;   sT[0].sCP[0].sCPR[21].nSPOffsetCS = 688;    sT[0].sCP[0].sCPR[21].nSPOffsetLek = 689;
sT[0].sCP[0].sCPR[22].nDCStart = 139;   	sT[0].sCP[0].sCPR[22].nDCNum = 1;    sT[0].sCP[0].sCPR[22].nSCStart= 138;    sT[0].sCP[0].sCPR[22].nAckStart=143;	sT[0].sCP[0].sCPR[22].nAckNum=1;   sT[0].sCP[0].sCPR[22].nSPOffsetCS = 750;    sT[0].sCP[0].sCPR[22].nSPOffsetLek = 751;
sT[0].sCP[0].sCPR[23].nDCStart = 0;    	sT[0].sCP[0].sCPR[23].nDCNum = 0;    sT[0].sCP[0].sCPR[23].nSCStart= 150;    sT[0].sCP[0].sCPR[23].nAckStart=0;	sT[0].sCP[0].sCPR[23].nAckNum=0;   sT[0].sCP[0].sCPR[23].nSPOffsetCS = 742;    sT[0].sCP[0].sCPR[23].nSPOffsetLek = 743;
sT[0].sCP[0].sCPR[24].nDCStart = 145;    sT[0].sCP[0].sCPR[24].nDCNum = 3;    sT[0].sCP[0].sCPR[24].nSCStart= 144;    sT[0].sCP[0].sCPR[24].nAckStart=149;  sT[0].sCP[0].sCPR[24].nAckNum=1;   sT[0].sCP[0].sCPR[24].nSPOffsetCS = 820;    sT[0].sCP[0].sCPR[24].nSPOffsetLek = 821;
sT[0].sCP[0].sCPR[25].nDCStart = 152;    sT[0].sCP[0].sCPR[25].nDCNum = 2;    sT[0].sCP[0].sCPR[25].nSCStart= 151;    sT[0].sCP[0].sCPR[25].nAckStart=156;  sT[0].sCP[0].sCPR[25].nAckNum=1;   sT[0].sCP[0].sCPR[25].nSPOffsetCS = 856;    sT[0].sCP[0].sCPR[25].nSPOffsetLek = 857;
sT[0].sCP[0].sCPR[26].nDCStart = 158;    sT[0].sCP[0].sCPR[26].nDCNum = 2;    sT[0].sCP[0].sCPR[26].nSCStart= 157;    sT[0].sCP[0].sCPR[26].nAckStart=162;  sT[0].sCP[0].sCPR[26].nAckNum=1;   sT[0].sCP[0].sCPR[26].nSPOffsetCS = 892;    sT[0].sCP[0].sCPR[26].nSPOffsetLek = 893;

sT[0].sCP[0].sCPR[27].nDCStart = 12;    sT[0].sCP[0].sCPR[27].nDCNum = 4;    sT[0].sCP[0].sCPR[27].nSCStart= 16;    sT[0].sCP[0].sCPR[27].nAckStart=0;  sT[0].sCP[0].sCPR[27].nAckNum=0;   sT[0].sCP[0].sCPR[27].nSPOffsetCS = 5549;    sT[0].sCP[0].sCPR[27].nSPOffsetLek = 5550;
sT[0].sCP[0].sCPR[28].nDCStart = 829;   sT[0].sCP[0].sCPR[28].nDCNum = 4;   sT[0].sCP[0].sCPR[28].nSCStart= 834;   sT[0].sCP[0].sCPR[28].nAckStart=833; sT[0].sCP[0].sCPR[28].nAckNum=1;  sT[0].sCP[0].sCPR[28].nSPOffsetCS = 5414;  sT[0].sCP[0].sCPR[28].nSPOffsetLek = 5415; 

sT[0].sCP[0].sCPR[29].nDCStart = 167;    sT[0].sCP[0].sCPR[29].nDCNum = 3;    sT[0].sCP[0].sCPR[29].nSCStart= 170;    sT[0].sCP[0].sCPR[29].nAckStart=0; 	sT[0].sCP[0].sCPR[29].nAckNum=0;   sT[0].sCP[0].sCPR[29].nSPOffsetCS = 920;    sT[0].sCP[0].sCPR[29].nSPOffsetLek = 921;

sT[0].sCP[0].sCPR[30].nDCStart = 871;    sT[0].sCP[0].sCPR[30].nDCNum = 4;    sT[0].sCP[0].sCPR[30].nSCStart= 875;    sT[0].sCP[0].sCPR[30].nAckStart=0; 	sT[0].sCP[0].sCPR[30].nAckNum=0;   sT[0].sCP[0].sCPR[30].nSPOffsetCS = 5653;    sT[0].sCP[0].sCPR[30].nSPOffsetLek = 5654;
sT[0].sCP[0].sCPR[31].nDCStart = 315;    sT[0].sCP[0].sCPR[31].nDCNum = 1;    sT[0].sCP[0].sCPR[31].nSCStart= 316;    sT[0].sCP[0].sCPR[31].nAckStart=0;	sT[0].sCP[0].sCPR[31].nAckNum=0;   sT[0].sCP[0].sCPR[31].nSPOffsetCS = 5669;    sT[0].sCP[0].sCPR[31].nSPOffsetLek = 5670;

sT[0].sCP[0].sCPR[32].nDCStart = 878;    sT[0].sCP[0].sCPR[32].nDCNum = 4;    sT[0].sCP[0].sCPR[32].nSCStart= 883;    sT[0].sCP[0].sCPR[32].nAckStart=882; 	sT[0].sCP[0].sCPR[32].nAckNum=1;   sT[0].sCP[0].sCPR[32].nSPOffsetCS = 5706;    sT[0].sCP[0].sCPR[32].nSPOffsetLek = 5707;

sT[0].sCP[0].sCPR[33].nDCStart = 179;    sT[0].sCP[0].sCPR[33].nDCNum = 4;    sT[0].sCP[0].sCPR[33].nSCStart= 178;    sT[0].sCP[0].sCPR[33].nAckStart=183;  sT[0].sCP[0].sCPR[33].nAckNum=4;   sT[0].sCP[0].sCPR[33].nSPOffsetCS = 1040;   sT[0].sCP[0].sCPR[33].nSPOffsetLek = 1041;
sT[0].sCP[0].sCPR[34].nDCStart = 187;    sT[0].sCP[0].sCPR[34].nDCNum = 3;    sT[0].sCP[0].sCPR[34].nSCStart= 192;    sT[0].sCP[0].sCPR[34].nAckStart=191;  sT[0].sCP[0].sCPR[34].nAckNum=1;   sT[0].sCP[0].sCPR[34].nSPOffsetCS = 1077;   sT[0].sCP[0].sCPR[34].nSPOffsetLek = 1078;
sT[0].sCP[0].sCPR[36].nDCStart = 199;    sT[0].sCP[0].sCPR[36].nDCNum = 3;    sT[0].sCP[0].sCPR[36].nSCStart= 204;    sT[0].sCP[0].sCPR[36].nAckStart=203;  sT[0].sCP[0].sCPR[36].nAckNum=1;   sT[0].sCP[0].sCPR[36].nSPOffsetCS = 1151;   sT[0].sCP[0].sCPR[36].nSPOffsetLek = 1152;
sT[0].sCP[0].sCPR[37].nDCStart = 205;    sT[0].sCP[0].sCPR[37].nDCNum = 2;    sT[0].sCP[0].sCPR[37].nSCStart= 210;    sT[0].sCP[0].sCPR[37].nAckStart=209;  sT[0].sCP[0].sCPR[37].nAckNum=1;   sT[0].sCP[0].sCPR[37].nSPOffsetCS = 1188;   sT[0].sCP[0].sCPR[37].nSPOffsetLek = 1189;
sT[0].sCP[0].sCPR[38].nDCStart = 211;    sT[0].sCP[0].sCPR[38].nDCNum = 3;    sT[0].sCP[0].sCPR[38].nSCStart= 216;    sT[0].sCP[0].sCPR[38].nAckStart=215;  sT[0].sCP[0].sCPR[38].nAckNum=1;   sT[0].sCP[0].sCPR[38].nSPOffsetCS = 1225;   sT[0].sCP[0].sCPR[38].nSPOffsetLek = 1226;
sT[0].sCP[0].sCPR[39].nDCStart = 217;    sT[0].sCP[0].sCPR[39].nDCNum = 2;    sT[0].sCP[0].sCPR[39].nSCStart= 222;    sT[0].sCP[0].sCPR[39].nAckStart=221;  sT[0].sCP[0].sCPR[39].nAckNum=1;   sT[0].sCP[0].sCPR[39].nSPOffsetCS = 1284;   sT[0].sCP[0].sCPR[39].nSPOffsetLek = 1285;

sT[0].sCP[0].sCPR[40].nDCStart = 234;    sT[0].sCP[0].sCPR[40].nDCNum = 1;    sT[0].sCP[0].sCPR[40].nSCStart= 235;    sT[0].sCP[0].sCPR[40].nAckStart=0;    sT[0].sCP[0].sCPR[40].nAckNum=0;   sT[0].sCP[0].sCPR[40].nSPOffsetCS = 1381;   sT[0].sCP[0].sCPR[40].nSPOffsetLek = 1382;

sT[0].sCP[0].sCPR[41].nDCStart = 236;    sT[0].sCP[0].sCPR[41].nDCNum = 1;    sT[0].sCP[0].sCPR[41].nSCStart= 237;    sT[0].sCP[0].sCPR[41].nAckStart=0;    sT[0].sCP[0].sCPR[41].nAckNum=0;   sT[0].sCP[0].sCPR[41].nSPOffsetCS = 1397;   sT[0].sCP[0].sCPR[41].nSPOffsetLek = 1398;
sT[0].sCP[0].sCPR[42].nDCStart = 238;    sT[0].sCP[0].sCPR[42].nDCNum = 1;    sT[0].sCP[0].sCPR[42].nSCStart= 239;    sT[0].sCP[0].sCPR[42].nAckStart=890;    sT[0].sCP[0].sCPR[42].nAckNum=1; sT[0].sCP[0].sCPR[42].nSPOffsetCS = 1413;   sT[0].sCP[0].sCPR[42].nSPOffsetLek = 1414;
sT[0].sCP[0].sCPR[43].nDCStart = 240;    sT[0].sCP[0].sCPR[43].nDCNum = 1;    sT[0].sCP[0].sCPR[43].nSCStart= 241;    sT[0].sCP[0].sCPR[43].nAckStart=0;    sT[0].sCP[0].sCPR[43].nAckNum=0;   sT[0].sCP[0].sCPR[43].nSPOffsetCS = 1429;   sT[0].sCP[0].sCPR[43].nSPOffsetLek = 1430;
sT[0].sCP[0].sCPR[44].nDCStart = 242;    sT[0].sCP[0].sCPR[44].nDCNum = 1;    sT[0].sCP[0].sCPR[44].nSCStart= 243;    sT[0].sCP[0].sCPR[44].nAckStart=0;    sT[0].sCP[0].sCPR[44].nAckNum=0;   sT[0].sCP[0].sCPR[44].nSPOffsetCS = 1445;   sT[0].sCP[0].sCPR[44].nSPOffsetLek = 1446;
sT[0].sCP[0].sCPR[45].nDCStart = 244;    sT[0].sCP[0].sCPR[45].nDCNum = 1;    sT[0].sCP[0].sCPR[45].nSCStart= 245;    sT[0].sCP[0].sCPR[45].nAckStart=0;    sT[0].sCP[0].sCPR[45].nAckNum=0;   sT[0].sCP[0].sCPR[45].nSPOffsetCS = 1461;   sT[0].sCP[0].sCPR[45].nSPOffsetLek = 1462;
sT[0].sCP[0].sCPR[46].nDCStart = 246;    sT[0].sCP[0].sCPR[46].nDCNum = 1;    sT[0].sCP[0].sCPR[46].nSCStart= 247;    sT[0].sCP[0].sCPR[46].nAckStart=523;  sT[0].sCP[0].sCPR[46].nAckNum=1;   sT[0].sCP[0].sCPR[46].nSPOffsetCS = 1477;   sT[0].sCP[0].sCPR[46].nSPOffsetLek = 1478;
sT[0].sCP[0].sCPR[47].nDCStart = 884;    sT[0].sCP[0].sCPR[47].nDCNum = 4;    sT[0].sCP[0].sCPR[47].nSCStart= 889;    sT[0].sCP[0].sCPR[47].nAckStart=888;  sT[0].sCP[0].sCPR[47].nAckNum=1;   sT[0].sCP[0].sCPR[47].nSPOffsetCS = 5743;   sT[0].sCP[0].sCPR[47].nSPOffsetLek = 5744;
sT[0].sCP[0].sCPR[48].nDCStart = 248;    sT[0].sCP[0].sCPR[48].nDCNum = 1;    sT[0].sCP[0].sCPR[48].nSCStart= 249;    sT[0].sCP[0].sCPR[48].nAckStart=0;    sT[0].sCP[0].sCPR[48].nAckNum=0;   sT[0].sCP[0].sCPR[48].nSPOffsetCS = 1493;   sT[0].sCP[0].sCPR[48].nSPOffsetLek = 1494;
sT[0].sCP[0].sCPR[49].nDCStart = 250;    sT[0].sCP[0].sCPR[49].nDCNum = 1;    sT[0].sCP[0].sCPR[49].nSCStart= 251;    sT[0].sCP[0].sCPR[49].nAckStart=0  ;  sT[0].sCP[0].sCPR[49].nAckNum=0;   sT[0].sCP[0].sCPR[49].nSPOffsetCS = 1541;   sT[0].sCP[0].sCPR[49].nSPOffsetLek = 1542;
sT[0].sCP[0].sCPR[50].nDCStart = 260;    sT[0].sCP[0].sCPR[50].nDCNum = 1;    sT[0].sCP[0].sCPR[50].nSCStart= 261;    sT[0].sCP[0].sCPR[50].nAckStart=529;  sT[0].sCP[0].sCPR[50].nAckNum=1;   sT[0].sCP[0].sCPR[50].nSPOffsetCS = 1589;   sT[0].sCP[0].sCPR[50].nSPOffsetLek = 1590;
sT[0].sCP[0].sCPR[51].nDCStart = 252;    sT[0].sCP[0].sCPR[51].nDCNum = 1;    sT[0].sCP[0].sCPR[51].nSCStart= 253;    sT[0].sCP[0].sCPR[51].nAckStart=894;  sT[0].sCP[0].sCPR[51].nAckNum=1;   sT[0].sCP[0].sCPR[51].nSPOffsetCS = 1525;   sT[0].sCP[0].sCPR[51].nSPOffsetLek = 1526;
sT[0].sCP[0].sCPR[52].nDCStart = 223;    sT[0].sCP[0].sCPR[52].nDCNum = 1;    sT[0].sCP[0].sCPR[52].nSCStart= 224;    sT[0].sCP[0].sCPR[52].nAckStart=0;    sT[0].sCP[0].sCPR[52].nAckNum=0;   sT[0].sCP[0].sCPR[52].nSPOffsetCS = 1301;   sT[0].sCP[0].sCPR[52].nSPOffsetLek = 1302;
sT[0].sCP[0].sCPR[53].nDCStart = 256;    sT[0].sCP[0].sCPR[53].nDCNum = 1;    sT[0].sCP[0].sCPR[53].nSCStart= 257;    sT[0].sCP[0].sCPR[53].nAckStart=527;  sT[0].sCP[0].sCPR[53].nAckNum=1;   sT[0].sCP[0].sCPR[53].nSPOffsetCS = 1557;   sT[0].sCP[0].sCPR[53].nSPOffsetLek = 1558;
sT[0].sCP[0].sCPR[54].nDCStart = 258;    sT[0].sCP[0].sCPR[54].nDCNum = 1;    sT[0].sCP[0].sCPR[54].nSCStart= 259;    sT[0].sCP[0].sCPR[54].nAckStart=528;  sT[0].sCP[0].sCPR[54].nAckNum=1;   sT[0].sCP[0].sCPR[54].nSPOffsetCS = 1573;   sT[0].sCP[0].sCPR[54].nSPOffsetLek = 1574;
sT[0].sCP[0].sCPR[55].nDCStart = 262;    sT[0].sCP[0].sCPR[55].nDCNum = 1;    sT[0].sCP[0].sCPR[55].nSCStart= 263;    sT[0].sCP[0].sCPR[55].nAckStart=530;  sT[0].sCP[0].sCPR[55].nAckNum=1;   sT[0].sCP[0].sCPR[55].nSPOffsetCS = 1605;   sT[0].sCP[0].sCPR[55].nSPOffsetLek = 1606;
sT[0].sCP[0].sCPR[56].nDCStart = 272;    sT[0].sCP[0].sCPR[56].nDCNum = 2;    sT[0].sCP[0].sCPR[56].nSCStart= 394;    sT[0].sCP[0].sCPR[56].nAckStart=0;    sT[0].sCP[0].sCPR[56].nAckNum=0;   sT[0].sCP[0].sCPR[56].nSPOffsetCS = 1701;   sT[0].sCP[0].sCPR[56].nSPOffsetLek = 1702;sT[0].sCP[0].sCPR[56].nSPOffsetCS2 = 728;   sT[0].sCP[0].sCPR[56].nSPOffsetLek2 = 729;sT[0].sCP[0].sCPR[56].nSCNum  = 2;
sT[0].sCP[0].sCPR[57].nDCStart = 276;    sT[0].sCP[0].sCPR[57].nDCNum = 1;    sT[0].sCP[0].sCPR[57].nSCStart= 277;    sT[0].sCP[0].sCPR[57].nAckStart=0;    sT[0].sCP[0].sCPR[57].nAckNum=0;   sT[0].sCP[0].sCPR[57].nSPOffsetCS = 1717;   sT[0].sCP[0].sCPR[57].nSPOffsetLek = 1718;
sT[0].sCP[0].sCPR[58].nDCStart = 231;    sT[0].sCP[0].sCPR[58].nDCNum = 1;    sT[0].sCP[0].sCPR[58].nSCStart= 232;    sT[0].sCP[0].sCPR[58].nAckStart=0;    sT[0].sCP[0].sCPR[58].nAckNum=0;   sT[0].sCP[0].sCPR[58].nSPOffsetCS = 1365;   sT[0].sCP[0].sCPR[58].nSPOffsetLek = 1366;
sT[0].sCP[0].sCPR[59].nDCStart = 266;    sT[0].sCP[0].sCPR[59].nDCNum = 1;    sT[0].sCP[0].sCPR[59].nSCStart= 267;    sT[0].sCP[0].sCPR[59].nAckStart=0;    sT[0].sCP[0].sCPR[59].nAckNum=0;   sT[0].sCP[0].sCPR[59].nSPOffsetCS = 1637;   sT[0].sCP[0].sCPR[59].nSPOffsetLek = 1638;
sT[0].sCP[0].sCPR[60].nDCStart = 268;    sT[0].sCP[0].sCPR[60].nDCNum = 1;    sT[0].sCP[0].sCPR[60].nSCStart= 269;    sT[0].sCP[0].sCPR[60].nAckStart=524;  sT[0].sCP[0].sCPR[60].nAckNum=1;   sT[0].sCP[0].sCPR[60].nSPOffsetCS = 1653;   sT[0].sCP[0].sCPR[60].nSPOffsetLek = 1654;
sT[0].sCP[0].sCPR[61].nDCStart = 270;    sT[0].sCP[0].sCPR[61].nDCNum = 1;    sT[0].sCP[0].sCPR[61].nSCStart= 271;    sT[0].sCP[0].sCPR[61].nAckStart=525;  sT[0].sCP[0].sCPR[61].nAckNum=1;   sT[0].sCP[0].sCPR[61].nSPOffsetCS = 1669;   sT[0].sCP[0].sCPR[61].nSPOffsetLek = 1670;
sT[0].sCP[0].sCPR[62].nDCStart = 225;    sT[0].sCP[0].sCPR[62].nDCNum = 1;    sT[0].sCP[0].sCPR[62].nSCStart= 226;    sT[0].sCP[0].sCPR[62].nAckStart=522;  sT[0].sCP[0].sCPR[62].nAckNum=1;   sT[0].sCP[0].sCPR[62].nSPOffsetCS = 1317;   sT[0].sCP[0].sCPR[62].nSPOffsetLek = 1318;
sT[0].sCP[0].sCPR[63].nDCStart = 227;    sT[0].sCP[0].sCPR[63].nDCNum = 1;    sT[0].sCP[0].sCPR[63].nSCStart= 228;    sT[0].sCP[0].sCPR[63].nAckStart=0;    sT[0].sCP[0].sCPR[63].nAckNum=0;   sT[0].sCP[0].sCPR[63].nSPOffsetCS = 1333;   sT[0].sCP[0].sCPR[63].nSPOffsetLek = 1334;
sT[0].sCP[0].sCPR[64].nDCStart = 0;      sT[0].sCP[0].sCPR[64].nDCNum = 0;    sT[0].sCP[0].sCPR[64].nSCStart= 278;    sT[0].sCP[0].sCPR[64].nAckStart=0;    sT[0].sCP[0].sCPR[64].nAckNum=0;   sT[0].sCP[0].sCPR[64].nSPOffsetCS = 1726;   sT[0].sCP[0].sCPR[64].nSPOffsetLek = 1727;
sT[0].sCP[0].sCPR[65].nDCStart = 279;    sT[0].sCP[0].sCPR[65].nDCNum = 4;    sT[0].sCP[0].sCPR[65].nSCStart= 284;    sT[0].sCP[0].sCPR[65].nAckStart=283;  sT[0].sCP[0].sCPR[65].nAckNum=1;   sT[0].sCP[0].sCPR[65].nSPOffsetCS = 1784;   sT[0].sCP[0].sCPR[65].nSPOffsetLek = 1785;
sT[0].sCP[0].sCPR[66].nDCStart = 264;    sT[0].sCP[0].sCPR[66].nDCNum = 1;    sT[0].sCP[0].sCPR[66].nSCStart= 265;    sT[0].sCP[0].sCPR[66].nAckStart=0;    sT[0].sCP[0].sCPR[66].nAckNum=0;   sT[0].sCP[0].sCPR[66].nSPOffsetCS = 1621;   sT[0].sCP[0].sCPR[66].nSPOffsetLek = 1622;
sT[0].sCP[0].sCPR[67].nDCStart = 229;    sT[0].sCP[0].sCPR[67].nDCNum = 1;    sT[0].sCP[0].sCPR[67].nSCStart= 230;    sT[0].sCP[0].sCPR[67].nAckStart=526;  sT[0].sCP[0].sCPR[67].nAckNum=1;   sT[0].sCP[0].sCPR[67].nSPOffsetCS = 1349;   sT[0].sCP[0].sCPR[67].nSPOffsetLek = 1350;
sT[0].sCP[0].sCPR[68].nDCStart = 285;    sT[0].sCP[0].sCPR[68].nDCNum = 1;    sT[0].sCP[0].sCPR[68].nSCStart= 286;    sT[0].sCP[0].sCPR[68].nAckStart=0;    sT[0].sCP[0].sCPR[68].nAckNum=0;   sT[0].sCP[0].sCPR[68].nSPOffsetCS = 1801;   sT[0].sCP[0].sCPR[68].nSPOffsetLek = 1802;
sT[0].sCP[0].sCPR[69].nDCStart = 193;    sT[0].sCP[0].sCPR[69].nDCNum = 4;    sT[0].sCP[0].sCPR[69].nSCStart= 198;    sT[0].sCP[0].sCPR[69].nAckStart=197;  sT[0].sCP[0].sCPR[69].nAckNum=1;   sT[0].sCP[0].sCPR[69].nSPOffsetCS = 1114;   sT[0].sCP[0].sCPR[69].nSPOffsetLek = 1115;
sT[0].sCP[0].sCPR[70].nDCStart = 287;    sT[0].sCP[0].sCPR[70].nDCNum = 4;    sT[0].sCP[0].sCPR[70].nSCStart= 292;    sT[0].sCP[0].sCPR[70].nAckStart=291;  sT[0].sCP[0].sCPR[70].nAckNum=1;   sT[0].sCP[0].sCPR[70].nSPOffsetCS = 1841;   sT[0].sCP[0].sCPR[70].nSPOffsetLek = 1842;
sT[0].sCP[0].sCPR[71].nDCStart = 293;    sT[0].sCP[0].sCPR[71].nDCNum = 1;    sT[0].sCP[0].sCPR[71].nSCStart= 294;    sT[0].sCP[0].sCPR[71].nAckStart=0;    sT[0].sCP[0].sCPR[71].nAckNum=0;   sT[0].sCP[0].sCPR[71].nSPOffsetCS = 1986;   sT[0].sCP[0].sCPR[71].nSPOffsetLek = 1987;
sT[0].sCP[0].sCPR[72].nDCStart = 295;    sT[0].sCP[0].sCPR[72].nDCNum = 1;    sT[0].sCP[0].sCPR[72].nSCStart= 296;    sT[0].sCP[0].sCPR[72].nAckStart=895;  sT[0].sCP[0].sCPR[72].nAckNum=1;   sT[0].sCP[0].sCPR[72].nSPOffsetCS = 1874;   sT[0].sCP[0].sCPR[72].nSPOffsetLek = 1875;
sT[0].sCP[0].sCPR[73].nDCStart = 297;    sT[0].sCP[0].sCPR[73].nDCNum = 1;    sT[0].sCP[0].sCPR[73].nSCStart= 298;    sT[0].sCP[0].sCPR[73].nAckStart=0;    sT[0].sCP[0].sCPR[73].nAckNum=0;   sT[0].sCP[0].sCPR[73].nSPOffsetCS = 1890;   sT[0].sCP[0].sCPR[73].nSPOffsetLek = 1891;
sT[0].sCP[0].sCPR[74].nDCStart = 299;    sT[0].sCP[0].sCPR[74].nDCNum = 1;    sT[0].sCP[0].sCPR[74].nSCStart= 300;    sT[0].sCP[0].sCPR[74].nAckStart=0;    sT[0].sCP[0].sCPR[74].nAckNum=0;   sT[0].sCP[0].sCPR[74].nSPOffsetCS = 1906;   sT[0].sCP[0].sCPR[74].nSPOffsetLek = 1907;
sT[0].sCP[0].sCPR[75].nDCStart = 301;    sT[0].sCP[0].sCPR[75].nDCNum = 1;    sT[0].sCP[0].sCPR[75].nSCStart= 302;    sT[0].sCP[0].sCPR[75].nAckStart=0;    sT[0].sCP[0].sCPR[75].nAckNum=0;   sT[0].sCP[0].sCPR[75].nSPOffsetCS = 1922;   sT[0].sCP[0].sCPR[75].nSPOffsetLek = 1923;
sT[0].sCP[0].sCPR[76].nDCStart = 303;    sT[0].sCP[0].sCPR[76].nDCNum = 1;    sT[0].sCP[0].sCPR[76].nSCStart= 304;    sT[0].sCP[0].sCPR[76].nAckStart=0;    sT[0].sCP[0].sCPR[76].nAckNum=0;   sT[0].sCP[0].sCPR[76].nSPOffsetCS = 1938;   sT[0].sCP[0].sCPR[76].nSPOffsetLek = 1939;
sT[0].sCP[0].sCPR[77].nDCStart = 305;    sT[0].sCP[0].sCPR[77].nDCNum = 1;    sT[0].sCP[0].sCPR[77].nSCStart= 306;    sT[0].sCP[0].sCPR[77].nAckStart=164;  sT[0].sCP[0].sCPR[77].nAckNum=1;   sT[0].sCP[0].sCPR[77].nSPOffsetCS = 1954;   sT[0].sCP[0].sCPR[77].nSPOffsetLek = 1955;
sT[0].sCP[0].sCPR[78].nDCStart = 307;    sT[0].sCP[0].sCPR[78].nDCNum = 1;    sT[0].sCP[0].sCPR[78].nSCStart= 308;    sT[0].sCP[0].sCPR[78].nAckStart=892;  sT[0].sCP[0].sCPR[78].nAckNum=1;   sT[0].sCP[0].sCPR[78].nSPOffsetCS = 1970;   sT[0].sCP[0].sCPR[78].nSPOffsetLek = 1971;
sT[0].sCP[0].sCPR[79].nDCStart = 309;    sT[0].sCP[0].sCPR[79].nDCNum = 1;    sT[0].sCP[0].sCPR[79].nSCStart= 310;    sT[0].sCP[0].sCPR[79].nAckStart=0;    sT[0].sCP[0].sCPR[79].nAckNum=0;   sT[0].sCP[0].sCPR[79].nSPOffsetCS = 2014;   sT[0].sCP[0].sCPR[79].nSPOffsetLek = 2015;
sT[0].sCP[0].sCPR[80].nDCStart = 311;    sT[0].sCP[0].sCPR[80].nDCNum = 1;    sT[0].sCP[0].sCPR[80].nSCStart= 312;    sT[0].sCP[0].sCPR[80].nAckStart=0;    sT[0].sCP[0].sCPR[80].nAckNum=0;   sT[0].sCP[0].sCPR[80].nSPOffsetCS = 2030;   sT[0].sCP[0].sCPR[80].nSPOffsetLek = 2031;
sT[0].sCP[0].sCPR[81].nDCStart = 313;    sT[0].sCP[0].sCPR[81].nDCNum = 1;    sT[0].sCP[0].sCPR[81].nSCStart= 314;    sT[0].sCP[0].sCPR[81].nAckStart=0;    sT[0].sCP[0].sCPR[81].nAckNum=0;   sT[0].sCP[0].sCPR[81].nSPOffsetCS = 2046;   sT[0].sCP[0].sCPR[81].nSPOffsetLek = 2047;
sT[0].sCP[0].sCPR[82].nDCStart = 708;    sT[0].sCP[0].sCPR[82].nDCNum = 1;    sT[0].sCP[0].sCPR[82].nSCStart= 709;    sT[0].sCP[0].sCPR[82].nAckStart=0;    sT[0].sCP[0].sCPR[82].nAckNum=0;   sT[0].sCP[0].sCPR[82].nSPOffsetCS = 4561;   sT[0].sCP[0].sCPR[82].nSPOffsetLek = 4562 ;	
sT[0].sCP[0].sCPR[83].nDCStart = 317;    sT[0].sCP[0].sCPR[83].nDCNum = 1;    sT[0].sCP[0].sCPR[83].nSCStart= 318;    sT[0].sCP[0].sCPR[83].nAckStart=0;    sT[0].sCP[0].sCPR[83].nAckNum=0;   sT[0].sCP[0].sCPR[83].nSPOffsetCS = 2078;   sT[0].sCP[0].sCPR[83].nSPOffsetLek = 2079;
sT[0].sCP[0].sCPR[84].nDCStart = 319;    sT[0].sCP[0].sCPR[84].nDCNum = 1;    sT[0].sCP[0].sCPR[84].nSCStart= 320;    sT[0].sCP[0].sCPR[84].nAckStart=900;  sT[0].sCP[0].sCPR[84].nAckNum=1;   sT[0].sCP[0].sCPR[84].nSPOffsetCS = 2094;   sT[0].sCP[0].sCPR[84].nSPOffsetLek = 2095;
sT[0].sCP[0].sCPR[85].nDCStart = 321;    sT[0].sCP[0].sCPR[85].nDCNum = 1;    sT[0].sCP[0].sCPR[85].nSCStart= 322;    sT[0].sCP[0].sCPR[85].nAckStart=0;    sT[0].sCP[0].sCPR[85].nAckNum=0;   sT[0].sCP[0].sCPR[85].nSPOffsetCS = 2110;   sT[0].sCP[0].sCPR[85].nSPOffsetLek = 2111;
sT[0].sCP[0].sCPR[86].nDCStart = 323;    sT[0].sCP[0].sCPR[86].nDCNum = 1;    sT[0].sCP[0].sCPR[86].nSCStart= 324;    sT[0].sCP[0].sCPR[86].nAckStart=0;    sT[0].sCP[0].sCPR[86].nAckNum=0;   sT[0].sCP[0].sCPR[86].nSPOffsetCS = 2126;   sT[0].sCP[0].sCPR[86].nSPOffsetLek = 2127;
sT[0].sCP[0].sCPR[87].nDCStart = 325;    sT[0].sCP[0].sCPR[87].nDCNum = 1;    sT[0].sCP[0].sCPR[87].nSCStart= 326;    sT[0].sCP[0].sCPR[87].nAckStart=0;    sT[0].sCP[0].sCPR[87].nAckNum=0;   sT[0].sCP[0].sCPR[87].nSPOffsetCS = 2142;   sT[0].sCP[0].sCPR[87].nSPOffsetLek = 2143;
sT[0].sCP[0].sCPR[88].nDCStart = 327;    sT[0].sCP[0].sCPR[88].nDCNum = 1;    sT[0].sCP[0].sCPR[88].nSCStart= 328;    sT[0].sCP[0].sCPR[88].nAckStart=0;    sT[0].sCP[0].sCPR[88].nAckNum=0;   sT[0].sCP[0].sCPR[88].nSPOffsetCS = 2158;   sT[0].sCP[0].sCPR[88].nSPOffsetLek = 2159;
sT[0].sCP[0].sCPR[89].nDCStart = 329;    sT[0].sCP[0].sCPR[89].nDCNum = 1;    sT[0].sCP[0].sCPR[89].nSCStart= 330;    sT[0].sCP[0].sCPR[89].nAckStart=0;    sT[0].sCP[0].sCPR[89].nAckNum=0;   sT[0].sCP[0].sCPR[89].nSPOffsetCS = 2174;   sT[0].sCP[0].sCPR[89].nSPOffsetLek = 2175;
sT[0].sCP[0].sCPR[90].nDCStart = 331;    sT[0].sCP[0].sCPR[90].nDCNum = 1;    sT[0].sCP[0].sCPR[90].nSCStart= 332;    sT[0].sCP[0].sCPR[90].nAckStart=893;    sT[0].sCP[0].sCPR[90].nAckNum=1;   sT[0].sCP[0].sCPR[90].nSPOffsetCS = 2190;   sT[0].sCP[0].sCPR[90].nSPOffsetLek = 2191;
sT[0].sCP[0].sCPR[91].nDCStart = 333;    sT[0].sCP[0].sCPR[91].nDCNum = 1;    sT[0].sCP[0].sCPR[91].nSCStart= 334;    sT[0].sCP[0].sCPR[91].nAckStart=0;    sT[0].sCP[0].sCPR[91].nAckNum=0;   sT[0].sCP[0].sCPR[91].nSPOffsetCS = 1742;   sT[0].sCP[0].sCPR[91].nSPOffsetLek = 1743;
sT[0].sCP[0].sCPR[92].nDCStart = 347;    sT[0].sCP[0].sCPR[92].nDCNum = 1;    sT[0].sCP[0].sCPR[92].nSCStart= 348;    sT[0].sCP[0].sCPR[92].nAckStart=0;    sT[0].sCP[0].sCPR[92].nAckNum=0;   sT[0].sCP[0].sCPR[92].nSPOffsetCS = 2312;   sT[0].sCP[0].sCPR[92].nSPOffsetLek = 2313;

sT[0].sCP[0].sCPR[93].nDCStart = 343;    sT[0].sCP[0].sCPR[93].nDCNum = 1;    sT[0].sCP[0].sCPR[93].nSCStart= 344;    sT[0].sCP[0].sCPR[93].nAckStart=0;    sT[0].sCP[0].sCPR[93].nAckNum=0;   sT[0].sCP[0].sCPR[93].nSPOffsetCS = 2280;   sT[0].sCP[0].sCPR[93].nSPOffsetLek = 2281;
sT[0].sCP[0].sCPR[94].nDCStart = 345;    sT[0].sCP[0].sCPR[94].nDCNum = 1;    sT[0].sCP[0].sCPR[94].nSCStart= 346;    sT[0].sCP[0].sCPR[94].nAckStart=0;    sT[0].sCP[0].sCPR[94].nAckNum=0;   sT[0].sCP[0].sCPR[94].nSPOffsetCS = 2296;   sT[0].sCP[0].sCPR[94].nSPOffsetLek = 2297;
sT[0].sCP[0].sCPR[95].nDCStart = 335;    sT[0].sCP[0].sCPR[95].nDCNum = 1;    sT[0].sCP[0].sCPR[95].nSCStart= 336;    sT[0].sCP[0].sCPR[95].nAckStart=0;    sT[0].sCP[0].sCPR[95].nAckNum=0;   sT[0].sCP[0].sCPR[95].nSPOffsetCS = 2206;   sT[0].sCP[0].sCPR[95].nSPOffsetLek = 2207;
sT[0].sCP[0].sCPR[96].nDCStart = 337;    sT[0].sCP[0].sCPR[96].nDCNum = 1;    sT[0].sCP[0].sCPR[96].nSCStart= 338;    sT[0].sCP[0].sCPR[96].nAckStart=902;  sT[0].sCP[0].sCPR[96].nAckNum=1;   sT[0].sCP[0].sCPR[96].nSPOffsetCS = 2222;   sT[0].sCP[0].sCPR[96].nSPOffsetLek = 2223;
sT[0].sCP[0].sCPR[97].nDCStart = 349;    sT[0].sCP[0].sCPR[97].nDCNum = 1;    sT[0].sCP[0].sCPR[97].nSCStart= 350;    sT[0].sCP[0].sCPR[97].nAckStart=0;    sT[0].sCP[0].sCPR[97].nAckNum=0;   sT[0].sCP[0].sCPR[97].nSPOffsetCS = 2328;   sT[0].sCP[0].sCPR[97].nSPOffsetLek = 2329;

sT[0].sCP[0].sCPR[98].nDCStart = 339;    sT[0].sCP[0].sCPR[98].nDCNum = 1;    sT[0].sCP[0].sCPR[98].nSCStart= 340;    sT[0].sCP[0].sCPR[98].nAckStart=0;    sT[0].sCP[0].sCPR[98].nAckNum=0;   sT[0].sCP[0].sCPR[98].nSPOffsetCS = 2238;   sT[0].sCP[0].sCPR[98].nSPOffsetLek = 2239;
sT[0].sCP[0].sCPR[99].nDCStart = 341;    sT[0].sCP[0].sCPR[99].nDCNum = 1;    sT[0].sCP[0].sCPR[99].nSCStart= 342;    sT[0].sCP[0].sCPR[99].nAckStart=0;    sT[0].sCP[0].sCPR[99].nAckNum=0;   sT[0].sCP[0].sCPR[99].nSPOffsetCS = 2264;   sT[0].sCP[0].sCPR[99].nSPOffsetLek = 2265;
sT[0].sCP[0].sCPR[100].nDCStart = 357;   sT[0].sCP[0].sCPR[100].nDCNum = 1;   sT[0].sCP[0].sCPR[100].nSCStart= 358;   sT[0].sCP[0].sCPR[100].nAckStart=0;   sT[0].sCP[0].sCPR[100].nAckNum=0;  sT[0].sCP[0].sCPR[100].nSPOffsetCS = 2392;  sT[0].sCP[0].sCPR[100].nSPOffsetLek = 2393;

sT[0].sCP[0].sCPR[101].nDCStart = 351;   sT[0].sCP[0].sCPR[101].nDCNum = 1;   sT[0].sCP[0].sCPR[101].nSCStart= 352;   sT[0].sCP[0].sCPR[101].nAckStart=0;   sT[0].sCP[0].sCPR[101].nAckNum=0;  sT[0].sCP[0].sCPR[101].nSPOffsetCS = 2344;  sT[0].sCP[0].sCPR[101].nSPOffsetLek = 2345;
sT[0].sCP[0].sCPR[102].nDCStart = 353;   sT[0].sCP[0].sCPR[102].nDCNum = 1;   sT[0].sCP[0].sCPR[102].nSCStart= 354;   sT[0].sCP[0].sCPR[102].nAckStart=0;   sT[0].sCP[0].sCPR[102].nAckNum=0;  sT[0].sCP[0].sCPR[102].nSPOffsetCS = 2360;  sT[0].sCP[0].sCPR[102].nSPOffsetLek = 2361;
sT[0].sCP[0].sCPR[103].nDCStart = 363;   sT[0].sCP[0].sCPR[103].nDCNum = 1;   sT[0].sCP[0].sCPR[103].nSCStart= 364;   sT[0].sCP[0].sCPR[103].nAckStart=898; sT[0].sCP[0].sCPR[103].nAckNum=1;  sT[0].sCP[0].sCPR[103].nSPOffsetCS = 2440;  sT[0].sCP[0].sCPR[103].nSPOffsetLek = 2441;
sT[0].sCP[0].sCPR[104].nDCStart = 365;   sT[0].sCP[0].sCPR[104].nDCNum = 1;   sT[0].sCP[0].sCPR[104].nSCStart= 366;   sT[0].sCP[0].sCPR[104].nAckStart=903; sT[0].sCP[0].sCPR[104].nAckNum=1;  sT[0].sCP[0].sCPR[104].nSPOffsetCS = 2456;  sT[0].sCP[0].sCPR[104].nSPOffsetLek = 2457;
sT[0].sCP[0].sCPR[105].nDCStart = 367;   sT[0].sCP[0].sCPR[105].nDCNum = 4;   sT[0].sCP[0].sCPR[105].nSCStart= 372;   sT[0].sCP[0].sCPR[105].nAckStart=371; sT[0].sCP[0].sCPR[105].nAckNum=1;  sT[0].sCP[0].sCPR[105].nSPOffsetCS = 2493;  sT[0].sCP[0].sCPR[105].nSPOffsetLek = 2494;
sT[0].sCP[0].sCPR[106].nDCStart = 373;   sT[0].sCP[0].sCPR[106].nDCNum = 4;   sT[0].sCP[0].sCPR[106].nSCStart= 378;   sT[0].sCP[0].sCPR[106].nAckStart=377; sT[0].sCP[0].sCPR[106].nAckNum=1;  sT[0].sCP[0].sCPR[106].nSPOffsetCS = 2535;  sT[0].sCP[0].sCPR[106].nSPOffsetLek = 2536;
sT[0].sCP[0].sCPR[107].nDCStart = 379;   sT[0].sCP[0].sCPR[107].nDCNum = 4;   sT[0].sCP[0].sCPR[107].nSCStart= 384;   sT[0].sCP[0].sCPR[107].nAckStart=383; sT[0].sCP[0].sCPR[107].nAckNum=1;  sT[0].sCP[0].sCPR[107].nSPOffsetCS = 2572;  sT[0].sCP[0].sCPR[107].nSPOffsetLek = 2573;
sT[0].sCP[0].sCPR[108].nDCStart = 385;   sT[0].sCP[0].sCPR[108].nDCNum = 1;   sT[0].sCP[0].sCPR[108].nSCStart= 386;   sT[0].sCP[0].sCPR[108].nAckStart=0;   sT[0].sCP[0].sCPR[108].nAckNum=0;  sT[0].sCP[0].sCPR[108].nSPOffsetCS = 2582;  sT[0].sCP[0].sCPR[108].nSPOffsetLek = 2583;

sT[0].sCP[0].sCPR[109].nDCStart = 615;   sT[0].sCP[0].sCPR[109].nDCNum = 4;   sT[0].sCP[0].sCPR[109].nSCStart= 620;   sT[0].sCP[0].sCPR[109].nAckStart=619; sT[0].sCP[0].sCPR[109].nAckNum=1;  sT[0].sCP[0].sCPR[109].nSPOffsetCS = 3961;  sT[0].sCP[0].sCPR[109].nSPOffsetLek = 3962 ;	
sT[0].sCP[0].sCPR[110].nDCStart = 621;   sT[0].sCP[0].sCPR[110].nDCNum = 4;   sT[0].sCP[0].sCPR[110].nSCStart= 626;   sT[0].sCP[0].sCPR[110].nAckStart=625; sT[0].sCP[0].sCPR[110].nAckNum=1;  sT[0].sCP[0].sCPR[110].nSPOffsetCS = 3998;  sT[0].sCP[0].sCPR[110].nSPOffsetLek = 3999 ;	
sT[0].sCP[0].sCPR[111].nDCStart = 627;   sT[0].sCP[0].sCPR[111].nDCNum = 4;   sT[0].sCP[0].sCPR[111].nSCStart= 632;   sT[0].sCP[0].sCPR[111].nAckStart=631; sT[0].sCP[0].sCPR[111].nAckNum=1;  sT[0].sCP[0].sCPR[111].nSPOffsetCS = 4035;  sT[0].sCP[0].sCPR[111].nSPOffsetLek = 4036 ;	


sT[0].sCP[0].sCPR[112].nDCStart = 0;     sT[0].sCP[0].sCPR[112].nDCNum = 1;   sT[0].sCP[0].sCPR[112].nSCStart= 387;   sT[0].sCP[0].sCPR[112].nAckStart=0;   sT[0].sCP[0].sCPR[112].nAckNum=0;  sT[0].sCP[0].sCPR[112].nSPOffsetCS = 2592;  sT[0].sCP[0].sCPR[112].nSPOffsetLek = 2593;

sT[0].sCP[0].sCPR[113].nDCStart = 397;   sT[0].sCP[0].sCPR[113].nDCNum = 1;   sT[0].sCP[0].sCPR[113].nSCStart= 398;   sT[0].sCP[0].sCPR[113].nAckStart=0;   sT[0].sCP[0].sCPR[113].nAckNum=0;  sT[0].sCP[0].sCPR[113].nSPOffsetCS = 936;   sT[0].sCP[0].sCPR[113].nSPOffsetLek = 937 ;
sT[0].sCP[0].sCPR[114].nDCStart = 399;   sT[0].sCP[0].sCPR[114].nDCNum = 1;   sT[0].sCP[0].sCPR[114].nSCStart= 400;   sT[0].sCP[0].sCPR[114].nAckStart=474; sT[0].sCP[0].sCPR[114].nAckNum=1;  sT[0].sCP[0].sCPR[114].nSPOffsetCS = 952;   sT[0].sCP[0].sCPR[114].nSPOffsetLek = 953 ;
sT[0].sCP[0].sCPR[115].nDCStart = 171;   sT[0].sCP[0].sCPR[115].nDCNum = 1;   sT[0].sCP[0].sCPR[115].nSCStart= 172;   sT[0].sCP[0].sCPR[115].nAckStart=177; sT[0].sCP[0].sCPR[115].nAckNum=1;  sT[0].sCP[0].sCPR[115].nSPOffsetCS = 968;   sT[0].sCP[0].sCPR[115].nSPOffsetLek = 969 ;
sT[0].sCP[0].sCPR[116].nDCStart = 173;   sT[0].sCP[0].sCPR[116].nDCNum = 1;   sT[0].sCP[0].sCPR[116].nSCStart= 174;   sT[0].sCP[0].sCPR[116].nAckStart=0;   sT[0].sCP[0].sCPR[116].nAckNum=0;  sT[0].sCP[0].sCPR[116].nSPOffsetCS = 984;   sT[0].sCP[0].sCPR[116].nSPOffsetLek = 985 ;
sT[0].sCP[0].sCPR[117].nDCStart = 175;   sT[0].sCP[0].sCPR[117].nDCNum = 1;   sT[0].sCP[0].sCPR[117].nSCStart= 176;   sT[0].sCP[0].sCPR[117].nAckStart=0;   sT[0].sCP[0].sCPR[117].nAckNum=0;  sT[0].sCP[0].sCPR[117].nSPOffsetCS = 1242;  sT[0].sCP[0].sCPR[117].nSPOffsetLek = 1243 ;
sT[0].sCP[0].sCPR[118].nDCStart = 359;   sT[0].sCP[0].sCPR[118].nDCNum = 2;   sT[0].sCP[0].sCPR[118].nSCStart= 355;   sT[0].sCP[0].sCPR[118].nAckStart=0;   sT[0].sCP[0].sCPR[118].nAckNum=0;  sT[0].sCP[0].sCPR[118].nSPOffsetCS = 2657;  sT[0].sCP[0].sCPR[118].nSPOffsetLek = 2658 ;sT[0].sCP[0].sCPR[118].nSPOffsetCS2 = 730;   sT[0].sCP[0].sCPR[118].nSPOffsetLek2 = 731;sT[0].sCP[0].sCPR[118].nSCNum  = 2;


sT[0].sCP[0].sCPR[119].nDCStart = 401;   sT[0].sCP[0].sCPR[119].nDCNum = 2;   sT[0].sCP[0].sCPR[119].nSCStart= 390;   sT[0].sCP[0].sCPR[119].nAckStart=0;   sT[0].sCP[0].sCPR[119].nAckNum=0;  sT[0].sCP[0].sCPR[119].nSPOffsetCS = 2424;  sT[0].sCP[0].sCPR[119].nSPOffsetLek = 2425 ;sT[0].sCP[0].sCPR[119].nSPOffsetCS2 = 724;   sT[0].sCP[0].sCPR[119].nSPOffsetLek2 = 725;sT[0].sCP[0].sCPR[119].nSCNum  = 2;
sT[0].sCP[0].sCPR[120].nDCStart = 405;   sT[0].sCP[0].sCPR[120].nDCNum = 2;   sT[0].sCP[0].sCPR[120].nSCStart= 392;   sT[0].sCP[0].sCPR[120].nAckStart=0;   sT[0].sCP[0].sCPR[120].nAckNum=0;  sT[0].sCP[0].sCPR[120].nSPOffsetCS = 2689;  sT[0].sCP[0].sCPR[120].nSPOffsetLek = 2690 ;sT[0].sCP[0].sCPR[120].nSPOffsetCS2 = 726;   sT[0].sCP[0].sCPR[120].nSPOffsetLek2 = 727;sT[0].sCP[0].sCPR[120].nSCNum  = 2;

sT[0].sCP[0].sCPR[121].nDCStart = 409;   sT[0].sCP[0].sCPR[121].nDCNum = 1;   sT[0].sCP[0].sCPR[121].nSCStart= 410;   sT[0].sCP[0].sCPR[121].nAckStart=0;   sT[0].sCP[0].sCPR[121].nAckNum=0;  sT[0].sCP[0].sCPR[121].nSPOffsetCS = 2376;  sT[0].sCP[0].sCPR[121].nSPOffsetLek = 2377 ;

sT[0].sCP[0].sCPR[122].nDCStart = 411;   sT[0].sCP[0].sCPR[122].nDCNum = 3;   sT[0].sCP[0].sCPR[122].nSCStart= 415;   sT[0].sCP[0].sCPR[122].nAckStart=0;   sT[0].sCP[0].sCPR[122].nAckNum=0;  sT[0].sCP[0].sCPR[122].nSPOffsetCS = 2705;  sT[0].sCP[0].sCPR[122].nSPOffsetLek = 2706 ;


sT[0].sCP[0].sCPR[123].nDCStart = 416;   sT[0].sCP[0].sCPR[123].nDCNum = 1;   sT[0].sCP[0].sCPR[123].nSCStart= 417;   sT[0].sCP[0].sCPR[123].nAckStart=0;   sT[0].sCP[0].sCPR[123].nAckNum=0;  sT[0].sCP[0].sCPR[123].nSPOffsetCS = 2721;  sT[0].sCP[0].sCPR[123].nSPOffsetLek = 2722 ;
sT[0].sCP[0].sCPR[124].nDCStart = 418;   sT[0].sCP[0].sCPR[124].nDCNum = 1;   sT[0].sCP[0].sCPR[124].nSCStart= 419;   sT[0].sCP[0].sCPR[124].nAckStart=460; sT[0].sCP[0].sCPR[124].nAckNum=1;  sT[0].sCP[0].sCPR[124].nSPOffsetCS = 2737;  sT[0].sCP[0].sCPR[124].nSPOffsetLek = 2738 ;
sT[0].sCP[0].sCPR[125].nDCStart = 420;   sT[0].sCP[0].sCPR[125].nDCNum = 1;   sT[0].sCP[0].sCPR[125].nSCStart= 421;   sT[0].sCP[0].sCPR[125].nAckStart=461; sT[0].sCP[0].sCPR[125].nAckNum=1;  sT[0].sCP[0].sCPR[125].nSPOffsetCS = 2764;  sT[0].sCP[0].sCPR[125].nSPOffsetLek = 2765 ;
sT[0].sCP[0].sCPR[126].nDCStart = 422;   sT[0].sCP[0].sCPR[126].nDCNum = 1;   sT[0].sCP[0].sCPR[126].nSCStart= 423;   sT[0].sCP[0].sCPR[126].nAckStart=462; sT[0].sCP[0].sCPR[126].nAckNum=1;  sT[0].sCP[0].sCPR[126].nSPOffsetCS = 2780;  sT[0].sCP[0].sCPR[126].nSPOffsetLek = 2781 ;
sT[0].sCP[0].sCPR[127].nDCStart = 424;   sT[0].sCP[0].sCPR[127].nDCNum = 1;   sT[0].sCP[0].sCPR[127].nSCStart= 425;   sT[0].sCP[0].sCPR[127].nAckStart=0;   sT[0].sCP[0].sCPR[127].nAckNum=0;  sT[0].sCP[0].sCPR[127].nSPOffsetCS = 2796;  sT[0].sCP[0].sCPR[127].nSPOffsetLek = 2797 ;
sT[0].sCP[0].sCPR[128].nDCStart = 426;   sT[0].sCP[0].sCPR[128].nDCNum = 1;   sT[0].sCP[0].sCPR[128].nSCStart= 427;   sT[0].sCP[0].sCPR[128].nAckStart=17;   sT[0].sCP[0].sCPR[128].nAckNum=1;  sT[0].sCP[0].sCPR[128].nSPOffsetCS = 2812;  sT[0].sCP[0].sCPR[128].nSPOffsetLek = 2813 ;
sT[0].sCP[0].sCPR[129].nDCStart = 428;   sT[0].sCP[0].sCPR[129].nDCNum = 1;   sT[0].sCP[0].sCPR[129].nSCStart= 429;   sT[0].sCP[0].sCPR[129].nAckStart=463; sT[0].sCP[0].sCPR[129].nAckNum=1;  sT[0].sCP[0].sCPR[129].nSPOffsetCS = 2828;  sT[0].sCP[0].sCPR[129].nSPOffsetLek = 2829 ;
sT[0].sCP[0].sCPR[130].nDCStart = 430;   sT[0].sCP[0].sCPR[130].nDCNum = 1;   sT[0].sCP[0].sCPR[130].nSCStart= 431;   sT[0].sCP[0].sCPR[130].nAckStart=464; sT[0].sCP[0].sCPR[130].nAckNum=1;  sT[0].sCP[0].sCPR[130].nSPOffsetCS = 2844;  sT[0].sCP[0].sCPR[130].nSPOffsetLek = 2845 ;
sT[0].sCP[0].sCPR[131].nDCStart = 432;   sT[0].sCP[0].sCPR[131].nDCNum = 1;   sT[0].sCP[0].sCPR[131].nSCStart= 433;   sT[0].sCP[0].sCPR[131].nAckStart=0;   sT[0].sCP[0].sCPR[131].nAckNum=0;  sT[0].sCP[0].sCPR[131].nSPOffsetCS = 2860;  sT[0].sCP[0].sCPR[131].nSPOffsetLek = 2861 ;
sT[0].sCP[0].sCPR[132].nDCStart = 434;   sT[0].sCP[0].sCPR[132].nDCNum = 1;   sT[0].sCP[0].sCPR[132].nSCStart= 435;   sT[0].sCP[0].sCPR[132].nAckStart=0;   sT[0].sCP[0].sCPR[132].nAckNum=0;  sT[0].sCP[0].sCPR[132].nSPOffsetCS = 2876;  sT[0].sCP[0].sCPR[132].nSPOffsetLek = 2877 ;
sT[0].sCP[0].sCPR[133].nDCStart = 436;   sT[0].sCP[0].sCPR[133].nDCNum = 1;   sT[0].sCP[0].sCPR[133].nSCStart= 437;   sT[0].sCP[0].sCPR[133].nAckStart=465; sT[0].sCP[0].sCPR[133].nAckNum=1;  sT[0].sCP[0].sCPR[133].nSPOffsetCS = 2892;  sT[0].sCP[0].sCPR[133].nSPOffsetLek = 2893 ;
sT[0].sCP[0].sCPR[134].nDCStart = 438;   sT[0].sCP[0].sCPR[134].nDCNum = 1;   sT[0].sCP[0].sCPR[134].nSCStart= 439;   sT[0].sCP[0].sCPR[134].nAckStart=0;   sT[0].sCP[0].sCPR[134].nAckNum=0;  sT[0].sCP[0].sCPR[134].nSPOffsetCS = 2908;  sT[0].sCP[0].sCPR[134].nSPOffsetLek = 2909 ;
sT[0].sCP[0].sCPR[135].nDCStart = 440;   sT[0].sCP[0].sCPR[135].nDCNum = 1;   sT[0].sCP[0].sCPR[135].nSCStart= 441;   sT[0].sCP[0].sCPR[135].nAckStart=0;   sT[0].sCP[0].sCPR[135].nAckNum=0;  sT[0].sCP[0].sCPR[135].nSPOffsetCS = 2924;  sT[0].sCP[0].sCPR[135].nSPOffsetLek = 2925 ;
sT[0].sCP[0].sCPR[136].nDCStart = 442;   sT[0].sCP[0].sCPR[136].nDCNum = 1;   sT[0].sCP[0].sCPR[136].nSCStart= 443;   sT[0].sCP[0].sCPR[136].nAckStart=468; sT[0].sCP[0].sCPR[136].nAckNum=1;  sT[0].sCP[0].sCPR[136].nSPOffsetCS = 2940;  sT[0].sCP[0].sCPR[136].nSPOffsetLek = 2941 ;
sT[0].sCP[0].sCPR[137].nDCStart = 444;   sT[0].sCP[0].sCPR[137].nDCNum = 1;   sT[0].sCP[0].sCPR[137].nSCStart= 445;   sT[0].sCP[0].sCPR[137].nAckStart=469; sT[0].sCP[0].sCPR[137].nAckNum=1;  sT[0].sCP[0].sCPR[137].nSPOffsetCS = 2956;  sT[0].sCP[0].sCPR[137].nSPOffsetLek = 2957 ;
sT[0].sCP[0].sCPR[138].nDCStart = 446;   sT[0].sCP[0].sCPR[138].nDCNum = 1;   sT[0].sCP[0].sCPR[138].nSCStart= 447;   sT[0].sCP[0].sCPR[138].nAckStart=0;   sT[0].sCP[0].sCPR[138].nAckNum=0;  sT[0].sCP[0].sCPR[138].nSPOffsetCS = 2972;  sT[0].sCP[0].sCPR[138].nSPOffsetLek = 2973 ;
sT[0].sCP[0].sCPR[139].nDCStart = 448;   sT[0].sCP[0].sCPR[139].nDCNum = 1;   sT[0].sCP[0].sCPR[139].nSCStart= 449;   sT[0].sCP[0].sCPR[139].nAckStart=471; sT[0].sCP[0].sCPR[139].nAckNum=1;  sT[0].sCP[0].sCPR[139].nSPOffsetCS = 2988;  sT[0].sCP[0].sCPR[139].nSPOffsetLek = 2989 ;
sT[0].sCP[0].sCPR[140].nDCStart = 450;   sT[0].sCP[0].sCPR[140].nDCNum = 1;   sT[0].sCP[0].sCPR[140].nSCStart= 451;   sT[0].sCP[0].sCPR[140].nAckStart=899; sT[0].sCP[0].sCPR[140].nAckNum=1;  sT[0].sCP[0].sCPR[140].nSPOffsetCS = 3014;  sT[0].sCP[0].sCPR[140].nSPOffsetLek = 3015 ;
sT[0].sCP[0].sCPR[141].nDCStart = 452;   sT[0].sCP[0].sCPR[141].nDCNum = 1;   sT[0].sCP[0].sCPR[141].nSCStart= 453;   sT[0].sCP[0].sCPR[141].nAckStart=0;   sT[0].sCP[0].sCPR[141].nAckNum=0;  sT[0].sCP[0].sCPR[141].nSPOffsetCS = 3030;  sT[0].sCP[0].sCPR[141].nSPOffsetLek = 3031 ;
sT[0].sCP[0].sCPR[142].nDCStart = 454;   sT[0].sCP[0].sCPR[142].nDCNum = 1;   sT[0].sCP[0].sCPR[142].nSCStart= 455;   sT[0].sCP[0].sCPR[142].nAckStart=472; sT[0].sCP[0].sCPR[142].nAckNum=1;  sT[0].sCP[0].sCPR[142].nSPOffsetCS = 3046;  sT[0].sCP[0].sCPR[142].nSPOffsetLek = 3047 ;
sT[0].sCP[0].sCPR[143].nDCStart = 456;   sT[0].sCP[0].sCPR[143].nDCNum = 1;   sT[0].sCP[0].sCPR[143].nSCStart= 457;   sT[0].sCP[0].sCPR[143].nAckStart=0;   sT[0].sCP[0].sCPR[143].nAckNum=0;  sT[0].sCP[0].sCPR[143].nSPOffsetCS = 3062;  sT[0].sCP[0].sCPR[143].nSPOffsetLek = 3063 ;
sT[0].sCP[0].sCPR[144].nDCStart = 458;   sT[0].sCP[0].sCPR[144].nDCNum = 1;   sT[0].sCP[0].sCPR[144].nSCStart= 459;   sT[0].sCP[0].sCPR[144].nAckStart=0;   sT[0].sCP[0].sCPR[144].nAckNum=0;  sT[0].sCP[0].sCPR[144].nSPOffsetCS = 3078;  sT[0].sCP[0].sCPR[144].nSPOffsetLek = 3079 ;
sT[0].sCP[0].sCPR[145].nDCStart = 0;     sT[0].sCP[0].sCPR[145].nDCNum = 0;   sT[0].sCP[0].sCPR[145].nSCStart= 466;   sT[0].sCP[0].sCPR[145].nAckStart=0;   sT[0].sCP[0].sCPR[145].nAckNum=0;  sT[0].sCP[0].sCPR[145].nSPOffsetCS = 3085;  sT[0].sCP[0].sCPR[145].nSPOffsetLek = 3086 ;
sT[0].sCP[0].sCPR[146].nDCStart = 0;     sT[0].sCP[0].sCPR[146].nDCNum = 0;   sT[0].sCP[0].sCPR[146].nSCStart= 467;   sT[0].sCP[0].sCPR[146].nAckStart=0;   sT[0].sCP[0].sCPR[146].nAckNum=0;  sT[0].sCP[0].sCPR[146].nSPOffsetCS = 3092;  sT[0].sCP[0].sCPR[146].nSPOffsetLek = 3093 ;
sT[0].sCP[0].sCPR[147].nDCStart = 488;   sT[0].sCP[0].sCPR[147].nDCNum = 2;   sT[0].sCP[0].sCPR[147].nSCStart= 492;   sT[0].sCP[0].sCPR[147].nAckStart=0;   sT[0].sCP[0].sCPR[147].nAckNum=0;  sT[0].sCP[0].sCPR[147].nSPOffsetCS = 3179;  sT[0].sCP[0].sCPR[147].nSPOffsetLek = 3180 ;

sT[0].sCP[0].sCPR[148].nDCStart = 0;     sT[0].sCP[0].sCPR[148].nDCNum = 0;   sT[0].sCP[0].sCPR[148].nSCStart= 470;   sT[0].sCP[0].sCPR[148].nAckStart=0;   sT[0].sCP[0].sCPR[148].nAckNum=0;  sT[0].sCP[0].sCPR[148].nSPOffsetCS = 3099;  sT[0].sCP[0].sCPR[148].nSPOffsetLek = 3100 ;


sT[0].sCP[0].sCPR[149].nDCStart = 482;   sT[0].sCP[0].sCPR[149].nDCNum = 1;   sT[0].sCP[0].sCPR[149].nSCStart= 483;   sT[0].sCP[0].sCPR[149].nAckStart=897;   sT[0].sCP[0].sCPR[149].nAckNum=1;  sT[0].sCP[0].sCPR[149].nSPOffsetCS = 3115;  sT[0].sCP[0].sCPR[149].nSPOffsetLek = 3116 ;
sT[0].sCP[0].sCPR[150].nDCStart = 475;   sT[0].sCP[0].sCPR[150].nDCNum = 1;   sT[0].sCP[0].sCPR[150].nSCStart= 476;   sT[0].sCP[0].sCPR[150].nAckStart=477; sT[0].sCP[0].sCPR[150].nAckNum=1;  sT[0].sCP[0].sCPR[150].nSPOffsetCS = 3131;  sT[0].sCP[0].sCPR[150].nSPOffsetLek = 3132 ;
sT[0].sCP[0].sCPR[151].nDCStart = 484;   sT[0].sCP[0].sCPR[151].nDCNum = 1;   sT[0].sCP[0].sCPR[151].nSCStart= 485;   sT[0].sCP[0].sCPR[151].nAckStart=0;   sT[0].sCP[0].sCPR[151].nAckNum=0;  sT[0].sCP[0].sCPR[151].nSPOffsetCS = 3147;  sT[0].sCP[0].sCPR[151].nSPOffsetLek = 3148 ;
sT[0].sCP[0].sCPR[152].nDCStart = 486;   sT[0].sCP[0].sCPR[152].nDCNum = 1;   sT[0].sCP[0].sCPR[152].nSCStart= 487;   sT[0].sCP[0].sCPR[152].nAckStart=0;   sT[0].sCP[0].sCPR[152].nAckNum=0;  sT[0].sCP[0].sCPR[152].nSPOffsetCS = 3163;  sT[0].sCP[0].sCPR[152].nSPOffsetLek = 3164 ;

sT[0].sCP[0].sCPR[153].nDCStart = 493;   sT[0].sCP[0].sCPR[153].nDCNum = 4;   sT[0].sCP[0].sCPR[153].nSCStart= 498;   sT[0].sCP[0].sCPR[153].nAckStart=497;   sT[0].sCP[0].sCPR[153].nAckNum=1;  sT[0].sCP[0].sCPR[153].nSPOffsetCS = 3216;  sT[0].sCP[0].sCPR[153].nSPOffsetLek = 3217 ;
sT[0].sCP[0].sCPR[154].nDCStart = 500;   sT[0].sCP[0].sCPR[154].nDCNum = 4;   sT[0].sCP[0].sCPR[154].nSCStart= 505;   sT[0].sCP[0].sCPR[154].nAckStart=504;   sT[0].sCP[0].sCPR[154].nAckNum=1;  sT[0].sCP[0].sCPR[154].nSPOffsetCS = 3285;  sT[0].sCP[0].sCPR[154].nSPOffsetLek = 3286 ;
sT[0].sCP[0].sCPR[155].nDCStart = 506;   sT[0].sCP[0].sCPR[155].nDCNum = 4;   sT[0].sCP[0].sCPR[155].nSCStart= 511;   sT[0].sCP[0].sCPR[155].nAckStart=510;   sT[0].sCP[0].sCPR[155].nAckNum=1;  sT[0].sCP[0].sCPR[155].nSPOffsetCS = 3322;  sT[0].sCP[0].sCPR[155].nSPOffsetLek = 3323 ;

sT[0].sCP[0].sCPR[156].nDCStart = 512;   sT[0].sCP[0].sCPR[156].nDCNum = 1;   sT[0].sCP[0].sCPR[156].nSCStart= 513;   sT[0].sCP[0].sCPR[156].nAckStart=0;   sT[0].sCP[0].sCPR[156].nAckNum=0;  sT[0].sCP[0].sCPR[156].nSPOffsetCS = 3232;  sT[0].sCP[0].sCPR[156].nSPOffsetLek = 3233 ;
sT[0].sCP[0].sCPR[157].nDCStart = 514;   sT[0].sCP[0].sCPR[157].nDCNum = 1;   sT[0].sCP[0].sCPR[157].nSCStart= 515;   sT[0].sCP[0].sCPR[157].nAckStart=473; sT[0].sCP[0].sCPR[157].nAckNum=1;  sT[0].sCP[0].sCPR[157].nSPOffsetCS = 3248;  sT[0].sCP[0].sCPR[157].nSPOffsetLek = 3249 ;
sT[0].sCP[0].sCPR[158].nDCStart = 516;   sT[0].sCP[0].sCPR[158].nDCNum = 1;   sT[0].sCP[0].sCPR[158].nSCStart= 517;   sT[0].sCP[0].sCPR[158].nAckStart=0;   sT[0].sCP[0].sCPR[158].nAckNum=0;  sT[0].sCP[0].sCPR[158].nSPOffsetCS = 3338;  sT[0].sCP[0].sCPR[158].nSPOffsetLek = 3339 ;
sT[0].sCP[0].sCPR[159].nDCStart = 518;   sT[0].sCP[0].sCPR[159].nDCNum = 1;   sT[0].sCP[0].sCPR[159].nSCStart= 519;   sT[0].sCP[0].sCPR[159].nAckStart=0;   sT[0].sCP[0].sCPR[159].nAckNum=0;  sT[0].sCP[0].sCPR[159].nSPOffsetCS = 3354;  sT[0].sCP[0].sCPR[159].nSPOffsetLek = 3355 ;
sT[0].sCP[0].sCPR[160].nDCStart = 520;   sT[0].sCP[0].sCPR[160].nDCNum = 1;   sT[0].sCP[0].sCPR[160].nSCStart= 521;   sT[0].sCP[0].sCPR[160].nAckStart=0;   sT[0].sCP[0].sCPR[160].nAckNum=0;  sT[0].sCP[0].sCPR[160].nSPOffsetCS = 3370;  sT[0].sCP[0].sCPR[160].nSPOffsetLek = 3371 ;

sT[0].sCP[0].sCPR[161].nDCStart = 478;   sT[0].sCP[0].sCPR[161].nDCNum = 1;   sT[0].sCP[0].sCPR[161].nSCStart= 479;   sT[0].sCP[0].sCPR[161].nAckStart=0;   sT[0].sCP[0].sCPR[161].nAckNum=0;  sT[0].sCP[0].sCPR[161].nSPOffsetCS = 3386;  sT[0].sCP[0].sCPR[161].nSPOffsetLek = 3387 ;
sT[0].sCP[0].sCPR[162].nDCStart = 532;   sT[0].sCP[0].sCPR[162].nDCNum = 1;   sT[0].sCP[0].sCPR[162].nSCStart= 533;   sT[0].sCP[0].sCPR[162].nAckStart=534; sT[0].sCP[0].sCPR[162].nAckNum=1;  sT[0].sCP[0].sCPR[162].nSPOffsetCS = 3402;  sT[0].sCP[0].sCPR[162].nSPOffsetLek = 3403 ;
sT[0].sCP[0].sCPR[163].nDCStart = 535;   sT[0].sCP[0].sCPR[163].nDCNum = 1;   sT[0].sCP[0].sCPR[163].nSCStart= 536;   sT[0].sCP[0].sCPR[163].nAckStart=537; sT[0].sCP[0].sCPR[163].nAckNum=1;  sT[0].sCP[0].sCPR[163].nSPOffsetCS = 3418;  sT[0].sCP[0].sCPR[163].nSPOffsetLek = 3419 ;

sT[0].sCP[0].sCPR[164].nDCStart = 538;   sT[0].sCP[0].sCPR[164].nDCNum = 1;   sT[0].sCP[0].sCPR[164].nSCStart= 539;   sT[0].sCP[0].sCPR[164].nAckStart=0;   sT[0].sCP[0].sCPR[164].nAckNum=0;  sT[0].sCP[0].sCPR[164].nSPOffsetCS = 3434;  sT[0].sCP[0].sCPR[164].nSPOffsetLek = 3435 ;

sT[0].sCP[0].sCPR[165].nDCStart = 540;   sT[0].sCP[0].sCPR[165].nDCNum = 1;   sT[0].sCP[0].sCPR[165].nSCStart= 541;   sT[0].sCP[0].sCPR[165].nAckStart=0;   sT[0].sCP[0].sCPR[165].nAckNum=0;  sT[0].sCP[0].sCPR[165].nSPOffsetCS = 3450;  sT[0].sCP[0].sCPR[165].nSPOffsetLek = 3451 ;
sT[0].sCP[0].sCPR[166].nDCStart = 542;   sT[0].sCP[0].sCPR[166].nDCNum = 1;   sT[0].sCP[0].sCPR[166].nSCStart= 543;   sT[0].sCP[0].sCPR[166].nAckStart=546; sT[0].sCP[0].sCPR[166].nAckNum=1;  sT[0].sCP[0].sCPR[166].nSPOffsetCS = 3466;  sT[0].sCP[0].sCPR[166].nSPOffsetLek = 3467 ;
sT[0].sCP[0].sCPR[167].nDCStart = 544;   sT[0].sCP[0].sCPR[167].nDCNum = 1;   sT[0].sCP[0].sCPR[167].nSCStart= 545;   sT[0].sCP[0].sCPR[167].nAckStart=0;   sT[0].sCP[0].sCPR[167].nAckNum=0;  sT[0].sCP[0].sCPR[167].nSPOffsetCS = 3482;  sT[0].sCP[0].sCPR[167].nSPOffsetLek = 3483 ;

sT[0].sCP[0].sCPR[168].nDCStart = 547;   sT[0].sCP[0].sCPR[168].nDCNum = 1;   sT[0].sCP[0].sCPR[168].nSCStart= 548;   sT[0].sCP[0].sCPR[168].nAckStart=549; sT[0].sCP[0].sCPR[168].nAckNum=1;  sT[0].sCP[0].sCPR[168].nSPOffsetCS = 3498;  sT[0].sCP[0].sCPR[168].nSPOffsetLek = 3499 ;
sT[0].sCP[0].sCPR[169].nDCStart = 550;   sT[0].sCP[0].sCPR[169].nDCNum = 1;   sT[0].sCP[0].sCPR[169].nSCStart= 551;   sT[0].sCP[0].sCPR[169].nAckStart=0;   sT[0].sCP[0].sCPR[169].nAckNum=0;  sT[0].sCP[0].sCPR[169].nSPOffsetCS = 3514;  sT[0].sCP[0].sCPR[169].nSPOffsetLek = 3515 ;
sT[0].sCP[0].sCPR[170].nDCStart = 552;   sT[0].sCP[0].sCPR[170].nDCNum = 1;   sT[0].sCP[0].sCPR[170].nSCStart= 553;   sT[0].sCP[0].sCPR[170].nAckStart=0;   sT[0].sCP[0].sCPR[170].nAckNum=0;  sT[0].sCP[0].sCPR[170].nSPOffsetCS = 3530;  sT[0].sCP[0].sCPR[170].nSPOffsetLek = 3531 ;
sT[0].sCP[0].sCPR[171].nDCStart = 554;   sT[0].sCP[0].sCPR[171].nDCNum = 1;   sT[0].sCP[0].sCPR[171].nSCStart= 555;   sT[0].sCP[0].sCPR[171].nAckStart=556; sT[0].sCP[0].sCPR[171].nAckNum=1;  sT[0].sCP[0].sCPR[171].nSPOffsetCS = 3546;  sT[0].sCP[0].sCPR[171].nSPOffsetLek = 3547 ;
sT[0].sCP[0].sCPR[172].nDCStart = 557;   sT[0].sCP[0].sCPR[172].nDCNum = 1;   sT[0].sCP[0].sCPR[172].nSCStart= 558;   sT[0].sCP[0].sCPR[172].nAckStart=0;   sT[0].sCP[0].sCPR[172].nAckNum=0;  sT[0].sCP[0].sCPR[172].nSPOffsetCS = 3562;  sT[0].sCP[0].sCPR[172].nSPOffsetLek = 3563 ;
sT[0].sCP[0].sCPR[173].nDCStart = 559;   sT[0].sCP[0].sCPR[173].nDCNum = 1;   sT[0].sCP[0].sCPR[173].nSCStart= 560;   sT[0].sCP[0].sCPR[173].nAckStart=561; sT[0].sCP[0].sCPR[173].nAckNum=1;  sT[0].sCP[0].sCPR[173].nSPOffsetCS = 3578;  sT[0].sCP[0].sCPR[173].nSPOffsetLek = 3579 ;
sT[0].sCP[0].sCPR[174].nDCStart = 562;   sT[0].sCP[0].sCPR[174].nDCNum = 1;   sT[0].sCP[0].sCPR[174].nSCStart= 563;   sT[0].sCP[0].sCPR[174].nAckStart=0;   sT[0].sCP[0].sCPR[174].nAckNum=0;  sT[0].sCP[0].sCPR[174].nSPOffsetCS = 3594;  sT[0].sCP[0].sCPR[174].nSPOffsetLek = 3595 ;

sT[0].sCP[0].sCPR[175].nDCStart = 564;   sT[0].sCP[0].sCPR[175].nDCNum = 1;   sT[0].sCP[0].sCPR[175].nSCStart= 565;   sT[0].sCP[0].sCPR[175].nAckStart=566; sT[0].sCP[0].sCPR[175].nAckNum=1;  sT[0].sCP[0].sCPR[175].nSPOffsetCS = 3610;  sT[0].sCP[0].sCPR[175].nSPOffsetLek = 3611 ;
sT[0].sCP[0].sCPR[176].nDCStart = 567;   sT[0].sCP[0].sCPR[176].nDCNum = 1;   sT[0].sCP[0].sCPR[176].nSCStart= 568;   sT[0].sCP[0].sCPR[176].nAckStart=0;   sT[0].sCP[0].sCPR[176].nAckNum=0;  sT[0].sCP[0].sCPR[176].nSPOffsetCS = 3626;  sT[0].sCP[0].sCPR[176].nSPOffsetLek = 3627 ;
sT[0].sCP[0].sCPR[177].nDCStart = 569;   sT[0].sCP[0].sCPR[177].nDCNum = 1;   sT[0].sCP[0].sCPR[177].nSCStart= 570;   sT[0].sCP[0].sCPR[177].nAckStart=0;   sT[0].sCP[0].sCPR[177].nAckNum=0;  sT[0].sCP[0].sCPR[177].nSPOffsetCS = 3642;  sT[0].sCP[0].sCPR[177].nSPOffsetLek = 3643 ;
sT[0].sCP[0].sCPR[178].nDCStart = 571;   sT[0].sCP[0].sCPR[178].nDCNum = 1;   sT[0].sCP[0].sCPR[178].nSCStart= 572;   sT[0].sCP[0].sCPR[178].nAckStart=0;   sT[0].sCP[0].sCPR[178].nAckNum=0;  sT[0].sCP[0].sCPR[178].nSPOffsetCS = 3658;  sT[0].sCP[0].sCPR[178].nSPOffsetLek = 3659 ;
sT[0].sCP[0].sCPR[179].nDCStart = 388;   sT[0].sCP[0].sCPR[179].nDCNum = 1;   sT[0].sCP[0].sCPR[179].nSCStart= 389;   sT[0].sCP[0].sCPR[179].nAckStart=0;   sT[0].sCP[0].sCPR[179].nAckNum=0;  sT[0].sCP[0].sCPR[179].nSPOffsetCS = 1509;  sT[0].sCP[0].sCPR[179].nSPOffsetLek = 1510 ;
	
sT[0].sCP[0].sCPR[180].nDCStart = 573;   sT[0].sCP[0].sCPR[180].nDCNum = 1;   sT[0].sCP[0].sCPR[180].nSCStart= 574;   sT[0].sCP[0].sCPR[180].nAckStart=677; sT[0].sCP[0].sCPR[180].nAckNum=1;  sT[0].sCP[0].sCPR[180].nSPOffsetCS = 3674;  sT[0].sCP[0].sCPR[180].nSPOffsetLek = 3675 ;
sT[0].sCP[0].sCPR[181].nDCStart = 575;   sT[0].sCP[0].sCPR[181].nDCNum = 1;   sT[0].sCP[0].sCPR[181].nSCStart= 576;   sT[0].sCP[0].sCPR[181].nAckStart=585; sT[0].sCP[0].sCPR[181].nAckNum=1;  sT[0].sCP[0].sCPR[181].nSPOffsetCS = 3690;  sT[0].sCP[0].sCPR[181].nSPOffsetLek = 3691 ;
sT[0].sCP[0].sCPR[182].nDCStart = 577;   sT[0].sCP[0].sCPR[182].nDCNum = 1;   sT[0].sCP[0].sCPR[182].nSCStart= 578;   sT[0].sCP[0].sCPR[182].nAckStart=586; sT[0].sCP[0].sCPR[182].nAckNum=1;  sT[0].sCP[0].sCPR[182].nSPOffsetCS = 3706;  sT[0].sCP[0].sCPR[182].nSPOffsetLek = 3707 ;
sT[0].sCP[0].sCPR[183].nDCStart = 579;   sT[0].sCP[0].sCPR[183].nDCNum = 1;   sT[0].sCP[0].sCPR[183].nSCStart= 580;   sT[0].sCP[0].sCPR[183].nAckStart=587; sT[0].sCP[0].sCPR[183].nAckNum=1;  sT[0].sCP[0].sCPR[183].nSPOffsetCS = 3722;  sT[0].sCP[0].sCPR[183].nSPOffsetLek = 3723 ;
sT[0].sCP[0].sCPR[184].nDCStart = 581;   sT[0].sCP[0].sCPR[184].nDCNum = 1;   sT[0].sCP[0].sCPR[184].nSCStart= 582;   sT[0].sCP[0].sCPR[184].nAckStart=0;   sT[0].sCP[0].sCPR[184].nAckNum=0;  sT[0].sCP[0].sCPR[184].nSPOffsetCS = 3738;  sT[0].sCP[0].sCPR[184].nSPOffsetLek = 3739 ;
sT[0].sCP[0].sCPR[185].nDCStart = 583;   sT[0].sCP[0].sCPR[185].nDCNum = 1;   sT[0].sCP[0].sCPR[185].nSCStart= 584;   sT[0].sCP[0].sCPR[185].nAckStart=588; sT[0].sCP[0].sCPR[185].nAckNum=1;  sT[0].sCP[0].sCPR[185].nSPOffsetCS = 3764;  sT[0].sCP[0].sCPR[185].nSPOffsetLek = 3765 ;
	
sT[0].sCP[0].sCPR[186].nDCStart = 589;   sT[0].sCP[0].sCPR[186].nDCNum = 1;   sT[0].sCP[0].sCPR[186].nSCStart= 590;   sT[0].sCP[0].sCPR[186].nAckStart=609; sT[0].sCP[0].sCPR[186].nAckNum=1;  sT[0].sCP[0].sCPR[186].nSPOffsetCS = 3780;  sT[0].sCP[0].sCPR[186].nSPOffsetLek = 3781 ;
sT[0].sCP[0].sCPR[187].nDCStart = 591;   sT[0].sCP[0].sCPR[187].nDCNum = 1;   sT[0].sCP[0].sCPR[187].nSCStart= 592;   sT[0].sCP[0].sCPR[187].nAckStart=610; sT[0].sCP[0].sCPR[187].nAckNum=1;  sT[0].sCP[0].sCPR[187].nSPOffsetCS = 3796;  sT[0].sCP[0].sCPR[187].nSPOffsetLek = 3797 ;
sT[0].sCP[0].sCPR[188].nDCStart = 593;   sT[0].sCP[0].sCPR[188].nDCNum = 1;   sT[0].sCP[0].sCPR[188].nSCStart= 594;   sT[0].sCP[0].sCPR[188].nAckStart=0;   sT[0].sCP[0].sCPR[188].nAckNum=0;  sT[0].sCP[0].sCPR[188].nSPOffsetCS = 3812;  sT[0].sCP[0].sCPR[188].nSPOffsetLek = 3813 ;
sT[0].sCP[0].sCPR[189].nDCStart = 595;   sT[0].sCP[0].sCPR[189].nDCNum = 1;   sT[0].sCP[0].sCPR[189].nSCStart= 596;   sT[0].sCP[0].sCPR[189].nAckStart=611; sT[0].sCP[0].sCPR[189].nAckNum=1;  sT[0].sCP[0].sCPR[189].nSPOffsetCS = 3828;  sT[0].sCP[0].sCPR[189].nSPOffsetLek = 3829 ;
sT[0].sCP[0].sCPR[190].nDCStart = 597;   sT[0].sCP[0].sCPR[190].nDCNum = 1;   sT[0].sCP[0].sCPR[190].nSCStart= 598;   sT[0].sCP[0].sCPR[190].nAckStart=612; sT[0].sCP[0].sCPR[190].nAckNum=1;  sT[0].sCP[0].sCPR[190].nSPOffsetCS = 3844;  sT[0].sCP[0].sCPR[190].nSPOffsetLek = 3845 ;
sT[0].sCP[0].sCPR[191].nDCStart = 599;   sT[0].sCP[0].sCPR[191].nDCNum = 1;   sT[0].sCP[0].sCPR[191].nSCStart= 600;   sT[0].sCP[0].sCPR[191].nAckStart=0;   sT[0].sCP[0].sCPR[191].nAckNum=0;  sT[0].sCP[0].sCPR[191].nSPOffsetCS = 3860;  sT[0].sCP[0].sCPR[191].nSPOffsetLek = 3861 ;
sT[0].sCP[0].sCPR[192].nDCStart = 601;   sT[0].sCP[0].sCPR[192].nDCNum = 1;   sT[0].sCP[0].sCPR[192].nSCStart= 602;   sT[0].sCP[0].sCPR[192].nAckStart=0;   sT[0].sCP[0].sCPR[192].nAckNum=0;  sT[0].sCP[0].sCPR[192].nSPOffsetCS = 3876;  sT[0].sCP[0].sCPR[192].nSPOffsetLek = 3877 ;
sT[0].sCP[0].sCPR[193].nDCStart = 603;   sT[0].sCP[0].sCPR[193].nDCNum = 1;   sT[0].sCP[0].sCPR[193].nSCStart= 604;   sT[0].sCP[0].sCPR[193].nAckStart=613; sT[0].sCP[0].sCPR[193].nAckNum=1;  sT[0].sCP[0].sCPR[193].nSPOffsetCS = 3892;  sT[0].sCP[0].sCPR[193].nSPOffsetLek = 3893 ;
sT[0].sCP[0].sCPR[194].nDCStart = 605;   sT[0].sCP[0].sCPR[194].nDCNum = 1;   sT[0].sCP[0].sCPR[194].nSCStart= 606;   sT[0].sCP[0].sCPR[194].nAckStart=0;   sT[0].sCP[0].sCPR[194].nAckNum=0;  sT[0].sCP[0].sCPR[194].nSPOffsetCS = 3908;  sT[0].sCP[0].sCPR[194].nSPOffsetLek = 3909 ;
sT[0].sCP[0].sCPR[195].nDCStart = 607;   sT[0].sCP[0].sCPR[195].nDCNum = 1;   sT[0].sCP[0].sCPR[195].nSCStart= 608;   sT[0].sCP[0].sCPR[195].nAckStart=614; sT[0].sCP[0].sCPR[195].nAckNum=1;  sT[0].sCP[0].sCPR[195].nSPOffsetCS = 3924;  sT[0].sCP[0].sCPR[195].nSPOffsetLek = 3925 ;	
	
sT[0].sCP[0].sCPR[196].nDCStart = 633;   sT[0].sCP[0].sCPR[196].nDCNum = 1;   sT[0].sCP[0].sCPR[196].nSCStart= 634;   sT[0].sCP[0].sCPR[196].nAckStart=0;   sT[0].sCP[0].sCPR[196].nAckNum=0;  sT[0].sCP[0].sCPR[196].nSPOffsetCS = 4051;  sT[0].sCP[0].sCPR[196].nSPOffsetLek = 4052 ;	
sT[0].sCP[0].sCPR[197].nDCStart = 635;   sT[0].sCP[0].sCPR[197].nDCNum = 1;   sT[0].sCP[0].sCPR[197].nSCStart= 636;   sT[0].sCP[0].sCPR[197].nAckStart=0;   sT[0].sCP[0].sCPR[197].nAckNum=0;  sT[0].sCP[0].sCPR[197].nSPOffsetCS = 4067;  sT[0].sCP[0].sCPR[197].nSPOffsetLek = 4068 ;	
sT[0].sCP[0].sCPR[198].nDCStart = 637;   sT[0].sCP[0].sCPR[198].nDCNum = 1;   sT[0].sCP[0].sCPR[198].nSCStart= 638;   sT[0].sCP[0].sCPR[198].nAckStart=0;   sT[0].sCP[0].sCPR[198].nAckNum=0;  sT[0].sCP[0].sCPR[198].nSPOffsetCS = 4083;  sT[0].sCP[0].sCPR[198].nSPOffsetLek = 4084 ;	
	
sT[0].sCP[0].sCPR[199].nDCStart = 639;   sT[0].sCP[0].sCPR[199].nDCNum = 1;   sT[0].sCP[0].sCPR[199].nSCStart= 640;   sT[0].sCP[0].sCPR[199].nAckStart=896;   sT[0].sCP[0].sCPR[199].nAckNum=1;  sT[0].sCP[0].sCPR[199].nSPOffsetCS = 4099;  sT[0].sCP[0].sCPR[199].nSPOffsetLek = 4100 ;	
	
sT[0].sCP[0].sCPR[200].nDCStart = 641;   sT[0].sCP[0].sCPR[200].nDCNum = 1;   sT[0].sCP[0].sCPR[200].nSCStart= 642;   sT[0].sCP[0].sCPR[200].nAckStart=0;   sT[0].sCP[0].sCPR[200].nAckNum=0;  sT[0].sCP[0].sCPR[200].nSPOffsetCS = 4115;  sT[0].sCP[0].sCPR[200].nSPOffsetLek = 4116 ;	

sT[0].sCP[0].sCPR[201].nDCStart = 643;   sT[0].sCP[0].sCPR[201].nDCNum = 4;   sT[0].sCP[0].sCPR[201].nSCStart= 648;   sT[0].sCP[0].sCPR[201].nAckStart=647; sT[0].sCP[0].sCPR[201].nAckNum=1;  sT[0].sCP[0].sCPR[201].nSPOffsetCS = 4152;  sT[0].sCP[0].sCPR[201].nSPOffsetLek = 4153 ;	

sT[0].sCP[0].sCPR[202].nDCStart = 649;   sT[0].sCP[0].sCPR[202].nDCNum = 1;   sT[0].sCP[0].sCPR[202].nSCStart= 650;   sT[0].sCP[0].sCPR[202].nAckStart=0;   sT[0].sCP[0].sCPR[202].nAckNum=0;  sT[0].sCP[0].sCPR[202].nSPOffsetCS = 4168;  sT[0].sCP[0].sCPR[202].nSPOffsetLek = 4169 ;	
sT[0].sCP[0].sCPR[203].nDCStart = 651;   sT[0].sCP[0].sCPR[203].nDCNum = 1;   sT[0].sCP[0].sCPR[203].nSCStart= 652;   sT[0].sCP[0].sCPR[203].nAckStart=0;   sT[0].sCP[0].sCPR[203].nAckNum=0;  sT[0].sCP[0].sCPR[203].nSPOffsetCS = 4184;  sT[0].sCP[0].sCPR[203].nSPOffsetLek = 4185 ;	
sT[0].sCP[0].sCPR[204].nDCStart = 653;   sT[0].sCP[0].sCPR[204].nDCNum = 1;   sT[0].sCP[0].sCPR[204].nSCStart= 654;   sT[0].sCP[0].sCPR[204].nAckStart=0;   sT[0].sCP[0].sCPR[204].nAckNum=0;  sT[0].sCP[0].sCPR[204].nSPOffsetCS = 4200;  sT[0].sCP[0].sCPR[204].nSPOffsetLek = 4201 ;	

sT[0].sCP[0].sCPR[205].nDCStart = 655;   sT[0].sCP[0].sCPR[205].nDCNum = 2;   sT[0].sCP[0].sCPR[205].nSCStart= 657;  sT[0].sCP[0].sCPR[205].nAckStart =0;    sT[0].sCP[0].sCPR[205].nAckNum=0;  sT[0].sCP[0].sCPR[205].nSPOffsetCS = 4232; sT[0].sCP[0].sCPR[205].nSPOffsetLek = 4233 ;sT[0].sCP[0].sCPR[205].nSPOffsetCS2 = 4234;   sT[0].sCP[0].sCPR[205].nSPOffsetLek2 = 4235; sT[0].sCP[0].sCPR[205].nSCNum  = 2;

sT[0].sCP[0].sCPR[206].nDCStart = 659;   sT[0].sCP[0].sCPR[206].nDCNum = 1;   sT[0].sCP[0].sCPR[206].nSCStart= 660;   sT[0].sCP[0].sCPR[206].nAckStart=0;   sT[0].sCP[0].sCPR[206].nAckNum=0;  sT[0].sCP[0].sCPR[206].nSPOffsetCS = 2062;  sT[0].sCP[0].sCPR[206].nSPOffsetLek = 2063 ;	
sT[0].sCP[0].sCPR[207].nDCStart = 665;   sT[0].sCP[0].sCPR[207].nDCNum = 1;   sT[0].sCP[0].sCPR[207].nSCStart= 666;   sT[0].sCP[0].sCPR[207].nAckStart=667; sT[0].sCP[0].sCPR[207].nAckNum=1;  sT[0].sCP[0].sCPR[207].nSPOffsetCS = 4250;  sT[0].sCP[0].sCPR[207].nSPOffsetLek = 4251 ;	
sT[0].sCP[0].sCPR[208].nDCStart = 661;   sT[0].sCP[0].sCPR[208].nDCNum = 1;   sT[0].sCP[0].sCPR[208].nSCStart= 662;   sT[0].sCP[0].sCPR[208].nAckStart=671; sT[0].sCP[0].sCPR[208].nAckNum=1;  sT[0].sCP[0].sCPR[208].nSPOffsetCS = 2608;  sT[0].sCP[0].sCPR[208].nSPOffsetLek = 2609 ;	
sT[0].sCP[0].sCPR[209].nDCStart = 663;   sT[0].sCP[0].sCPR[209].nDCNum = 1;   sT[0].sCP[0].sCPR[209].nSCStart= 664;   sT[0].sCP[0].sCPR[209].nAckStart=874; sT[0].sCP[0].sCPR[209].nAckNum=1;  sT[0].sCP[0].sCPR[209].nSPOffsetCS = 2624;  sT[0].sCP[0].sCPR[209].nSPOffsetLek = 2625 ;	
sT[0].sCP[0].sCPR[210].nDCStart = 860;   sT[0].sCP[0].sCPR[210].nDCNum = 4;   sT[0].sCP[0].sCPR[210].nSCStart= 864;   sT[0].sCP[0].sCPR[210].nAckStart=0;   sT[0].sCP[0].sCPR[210].nAckNum=0;  sT[0].sCP[0].sCPR[210].nSPOffsetCS = 5602;  sT[0].sCP[0].sCPR[210].nSPOffsetLek = 5603 ;	

sT[0].sCP[0].sCPR[211].nDCStart = 865;   sT[0].sCP[0].sCPR[211].nDCNum = 4;   sT[0].sCP[0].sCPR[211].nSCStart= 870;   sT[0].sCP[0].sCPR[211].nAckStart=869; sT[0].sCP[0].sCPR[211].nAckNum=1;  sT[0].sCP[0].sCPR[211].nSPOffsetCS = 5639;  sT[0].sCP[0].sCPR[211].nSPOffsetLek = 5640 ;	
sT[0].sCP[0].sCPR[212].nDCStart = 674;   sT[0].sCP[0].sCPR[212].nDCNum = 1;   sT[0].sCP[0].sCPR[212].nSCStart= 675;   sT[0].sCP[0].sCPR[212].nAckStart=0;   sT[0].sCP[0].sCPR[212].nAckNum=0;  sT[0].sCP[0].sCPR[212].nSPOffsetCS = 4298;  sT[0].sCP[0].sCPR[212].nSPOffsetLek = 4299 ;	

sT[0].sCP[0].sCPR[213].nDCStart = 678;   sT[0].sCP[0].sCPR[213].nDCNum = 1;   sT[0].sCP[0].sCPR[213].nSCStart= 679;   sT[0].sCP[0].sCPR[213].nAckStart=0;   sT[0].sCP[0].sCPR[213].nAckNum=0;  sT[0].sCP[0].sCPR[213].nSPOffsetCS = 4314;  sT[0].sCP[0].sCPR[213].nSPOffsetLek = 4315 ;	
sT[0].sCP[0].sCPR[214].nDCStart = 680;   sT[0].sCP[0].sCPR[214].nDCNum = 1;   sT[0].sCP[0].sCPR[214].nSCStart= 681;   sT[0].sCP[0].sCPR[214].nAckStart=0;   sT[0].sCP[0].sCPR[214].nAckNum=0;  sT[0].sCP[0].sCPR[214].nSPOffsetCS = 4330;  sT[0].sCP[0].sCPR[214].nSPOffsetLek = 4331 ;	
sT[0].sCP[0].sCPR[215].nDCStart = 682;   sT[0].sCP[0].sCPR[215].nDCNum = 1;   sT[0].sCP[0].sCPR[215].nSCStart= 683;   sT[0].sCP[0].sCPR[215].nAckStart=944; sT[0].sCP[0].sCPR[215].nAckNum=1;  sT[0].sCP[0].sCPR[215].nSPOffsetCS = 4346;  sT[0].sCP[0].sCPR[215].nSPOffsetLek = 4347 ;	
sT[0].sCP[0].sCPR[216].nDCStart = 684;   sT[0].sCP[0].sCPR[216].nDCNum = 1;   sT[0].sCP[0].sCPR[216].nSCStart= 685;   sT[0].sCP[0].sCPR[216].nAckStart=0;   sT[0].sCP[0].sCPR[216].nAckNum=0;  sT[0].sCP[0].sCPR[216].nSPOffsetCS = 4362;  sT[0].sCP[0].sCPR[216].nSPOffsetLek = 4363 ;	
sT[0].sCP[0].sCPR[217].nDCStart = 686;   sT[0].sCP[0].sCPR[217].nDCNum = 1;   sT[0].sCP[0].sCPR[217].nSCStart= 687;   sT[0].sCP[0].sCPR[217].nAckStart=0;   sT[0].sCP[0].sCPR[217].nAckNum=0;  sT[0].sCP[0].sCPR[217].nSPOffsetCS = 4378;  sT[0].sCP[0].sCPR[217].nSPOffsetLek = 4379 ;	

sT[0].sCP[0].sCPR[218].nDCStart = 688;   sT[0].sCP[0].sCPR[218].nDCNum = 1;   sT[0].sCP[0].sCPR[218].nSCStart= 689;   sT[0].sCP[0].sCPR[218].nAckStart=0;   sT[0].sCP[0].sCPR[218].nAckNum=0;  sT[0].sCP[0].sCPR[218].nSPOffsetCS = 4394;  sT[0].sCP[0].sCPR[218].nSPOffsetLek = 4395 ;	
sT[0].sCP[0].sCPR[219].nDCStart = 690;   sT[0].sCP[0].sCPR[219].nDCNum = 1;   sT[0].sCP[0].sCPR[219].nSCStart= 691;   sT[0].sCP[0].sCPR[219].nAckStart=0;   sT[0].sCP[0].sCPR[219].nAckNum=0;  sT[0].sCP[0].sCPR[219].nSPOffsetCS = 4410;  sT[0].sCP[0].sCPR[219].nSPOffsetLek = 4411 ;	
sT[0].sCP[0].sCPR[220].nDCStart = 692;   sT[0].sCP[0].sCPR[220].nDCNum = 1;   sT[0].sCP[0].sCPR[220].nSCStart= 693;   sT[0].sCP[0].sCPR[220].nAckStart=0;   sT[0].sCP[0].sCPR[220].nAckNum=0;  sT[0].sCP[0].sCPR[220].nSPOffsetCS = 4426;  sT[0].sCP[0].sCPR[220].nSPOffsetLek = 4427 ;	
sT[0].sCP[0].sCPR[221].nDCStart = 694;   sT[0].sCP[0].sCPR[221].nDCNum = 1;   sT[0].sCP[0].sCPR[221].nSCStart= 695;   sT[0].sCP[0].sCPR[221].nAckStart=945; sT[0].sCP[0].sCPR[221].nAckNum=1;  sT[0].sCP[0].sCPR[221].nSPOffsetCS = 4442;  sT[0].sCP[0].sCPR[221].nSPOffsetLek = 4443 ;	
sT[0].sCP[0].sCPR[222].nDCStart = 696;   sT[0].sCP[0].sCPR[222].nDCNum = 1;   sT[0].sCP[0].sCPR[222].nSCStart= 697;   sT[0].sCP[0].sCPR[222].nAckStart=904; sT[0].sCP[0].sCPR[222].nAckNum=1;  sT[0].sCP[0].sCPR[222].nSPOffsetCS = 4458;  sT[0].sCP[0].sCPR[222].nSPOffsetLek = 4459 ;	
sT[0].sCP[0].sCPR[223].nDCStart = 698;   sT[0].sCP[0].sCPR[223].nDCNum = 1;   sT[0].sCP[0].sCPR[223].nSCStart= 699;   sT[0].sCP[0].sCPR[223].nAckStart=906; sT[0].sCP[0].sCPR[223].nAckNum=1;  sT[0].sCP[0].sCPR[223].nSPOffsetCS = 4474;  sT[0].sCP[0].sCPR[223].nSPOffsetLek = 4475 ;	

sT[0].sCP[0].sCPR[224].nDCStart = 0;     sT[0].sCP[0].sCPR[224].nDCNum = 0;   sT[0].sCP[0].sCPR[224].nSCStart= 480;   sT[0].sCP[0].sCPR[224].nAckStart=0;   sT[0].sCP[0].sCPR[224].nAckNum=0;  sT[0].sCP[0].sCPR[224].nSPOffsetCS = 4481;  sT[0].sCP[0].sCPR[224].nSPOffsetLek = 4482 ;

sT[0].sCP[0].sCPR[225].nDCStart = 700;   sT[0].sCP[0].sCPR[225].nDCNum = 1;   sT[0].sCP[0].sCPR[225].nSCStart= 701;   sT[0].sCP[0].sCPR[225].nAckStart=0;   sT[0].sCP[0].sCPR[225].nAckNum=0;  sT[0].sCP[0].sCPR[225].nSPOffsetCS = 4497;  sT[0].sCP[0].sCPR[225].nSPOffsetLek = 4498 ;	
sT[0].sCP[0].sCPR[226].nDCStart = 702;   sT[0].sCP[0].sCPR[226].nDCNum = 1;   sT[0].sCP[0].sCPR[226].nSCStart= 703;   sT[0].sCP[0].sCPR[226].nAckStart=905; sT[0].sCP[0].sCPR[226].nAckNum=1;  sT[0].sCP[0].sCPR[226].nSPOffsetCS = 4513;  sT[0].sCP[0].sCPR[226].nSPOffsetLek = 4514 ;	
sT[0].sCP[0].sCPR[227].nDCStart = 704;   sT[0].sCP[0].sCPR[227].nDCNum = 1;   sT[0].sCP[0].sCPR[227].nSCStart= 705;   sT[0].sCP[0].sCPR[227].nAckStart=0;   sT[0].sCP[0].sCPR[227].nAckNum=0;  sT[0].sCP[0].sCPR[227].nSPOffsetCS = 4529;  sT[0].sCP[0].sCPR[227].nSPOffsetLek = 4530 ;	
sT[0].sCP[0].sCPR[228].nDCStart = 706;   sT[0].sCP[0].sCPR[228].nDCNum = 1;   sT[0].sCP[0].sCPR[228].nSCStart= 707;   sT[0].sCP[0].sCPR[228].nAckStart=946; sT[0].sCP[0].sCPR[228].nAckNum=1;  sT[0].sCP[0].sCPR[228].nSPOffsetCS = 4545;  sT[0].sCP[0].sCPR[228].nSPOffsetLek = 4546 ;	

sT[0].sCP[0].sCPR[229].nDCStart = 710;   sT[0].sCP[0].sCPR[229].nDCNum = 4;   sT[0].sCP[0].sCPR[229].nSCStart= 715;   sT[0].sCP[0].sCPR[229].nAckStart=714; sT[0].sCP[0].sCPR[229].nAckNum=1;  sT[0].sCP[0].sCPR[229].nSPOffsetCS = 4608;  sT[0].sCP[0].sCPR[229].nSPOffsetLek = 4609;
sT[0].sCP[0].sCPR[230].nDCStart = 716;   sT[0].sCP[0].sCPR[230].nDCNum = 4;   sT[0].sCP[0].sCPR[230].nSCStart= 721;   sT[0].sCP[0].sCPR[230].nAckStart=720; sT[0].sCP[0].sCPR[230].nAckNum=1;  sT[0].sCP[0].sCPR[230].nSPOffsetCS = 4655;  sT[0].sCP[0].sCPR[230].nSPOffsetLek = 4656;
sT[0].sCP[0].sCPR[231].nDCStart = 722;   sT[0].sCP[0].sCPR[231].nDCNum = 4;   sT[0].sCP[0].sCPR[231].nSCStart= 727;   sT[0].sCP[0].sCPR[231].nAckStart=726; sT[0].sCP[0].sCPR[231].nAckNum=1;  sT[0].sCP[0].sCPR[231].nSPOffsetCS = 4702;  sT[0].sCP[0].sCPR[231].nSPOffsetLek = 4703;
sT[0].sCP[0].sCPR[232].nDCStart = 728;   sT[0].sCP[0].sCPR[232].nDCNum = 4;   sT[0].sCP[0].sCPR[232].nSCStart= 733;   sT[0].sCP[0].sCPR[232].nAckStart=732; sT[0].sCP[0].sCPR[232].nAckNum=1;  sT[0].sCP[0].sCPR[232].nSPOffsetCS = 4749;  sT[0].sCP[0].sCPR[232].nSPOffsetLek = 4750;

sT[0].sCP[0].sCPR[233].nDCStart = 734;   sT[0].sCP[0].sCPR[233].nDCNum = 4;   sT[0].sCP[0].sCPR[233].nSCStart= 739;   sT[0].sCP[0].sCPR[233].nAckStart=738; sT[0].sCP[0].sCPR[233].nAckNum=1;  sT[0].sCP[0].sCPR[233].nSPOffsetCS = 4797;  sT[0].sCP[0].sCPR[233].nSPOffsetLek = 4798;

sT[0].sCP[0].sCPR[234].nDCStart = 740;   sT[0].sCP[0].sCPR[234].nDCNum = 4;   sT[0].sCP[0].sCPR[234].nSCStart= 745;   sT[0].sCP[0].sCPR[234].nAckStart=744; sT[0].sCP[0].sCPR[234].nAckNum=1;  sT[0].sCP[0].sCPR[234].nSPOffsetCS = 4834;  sT[0].sCP[0].sCPR[234].nSPOffsetLek = 4835 ;	

sT[0].sCP[0].sCPR[235].nDCStart = 746;   sT[0].sCP[0].sCPR[235].nDCNum = 4;   sT[0].sCP[0].sCPR[235].nSCStart= 751;   sT[0].sCP[0].sCPR[235].nAckStart=750; sT[0].sCP[0].sCPR[235].nAckNum=1;  sT[0].sCP[0].sCPR[235].nSPOffsetCS = 4871;  sT[0].sCP[0].sCPR[235].nSPOffsetLek = 4872 ;	
sT[0].sCP[0].sCPR[236].nDCStart = 752;   sT[0].sCP[0].sCPR[236].nDCNum = 2;   sT[0].sCP[0].sCPR[236].nSCStart =756;   sT[0].sCP[0].sCPR[236].nAckStart=0;   sT[0].sCP[0].sCPR[236].nAckNum=0;  sT[0].sCP[0].sCPR[236].nSPOffsetCS = 4903;  sT[0].sCP[0].sCPR[236].nSPOffsetLek = 4904; sT[0].sCP[0].sCPR[236].nSPOffsetCS2 = 4905;   sT[0].sCP[0].sCPR[236].nSPOffsetLek2 = 4906; sT[0].sCP[0].sCPR[236].nSCNum  = 2;
sT[0].sCP[0].sCPR[237].nDCStart = 758;   sT[0].sCP[0].sCPR[237].nDCNum = 4;   sT[0].sCP[0].sCPR[237].nSCStart =763;   sT[0].sCP[0].sCPR[237].nAckStart=762; sT[0].sCP[0].sCPR[237].nAckNum=1;  sT[0].sCP[0].sCPR[237].nSPOffsetCS = 4942;  sT[0].sCP[0].sCPR[237].nSPOffsetLek = 4943; 
sT[0].sCP[0].sCPR[238].nDCStart = 764;   sT[0].sCP[0].sCPR[238].nDCNum = 4;   sT[0].sCP[0].sCPR[238].nSCStart =769;   sT[0].sCP[0].sCPR[238].nAckStart=768; sT[0].sCP[0].sCPR[238].nAckNum=1;  sT[0].sCP[0].sCPR[238].nSPOffsetCS = 4979;  sT[0].sCP[0].sCPR[238].nSPOffsetLek = 4980; 
sT[0].sCP[0].sCPR[239].nDCStart = 770;   sT[0].sCP[0].sCPR[239].nDCNum = 4;   sT[0].sCP[0].sCPR[239].nSCStart =775;   sT[0].sCP[0].sCPR[239].nAckStart=774; sT[0].sCP[0].sCPR[239].nAckNum=1;  sT[0].sCP[0].sCPR[239].nSPOffsetCS = 5016;  sT[0].sCP[0].sCPR[239].nSPOffsetLek = 5017; 
sT[0].sCP[0].sCPR[240].nDCStart = 776;   sT[0].sCP[0].sCPR[240].nDCNum = 4;   sT[0].sCP[0].sCPR[240].nSCStart =781;   sT[0].sCP[0].sCPR[240].nAckStart=780; sT[0].sCP[0].sCPR[240].nAckNum=1;  sT[0].sCP[0].sCPR[240].nSPOffsetCS = 5053;  sT[0].sCP[0].sCPR[240].nSPOffsetLek = 5054; 
sT[0].sCP[0].sCPR[241].nDCStart = 782;   sT[0].sCP[0].sCPR[241].nDCNum = 4;   sT[0].sCP[0].sCPR[241].nSCStart =787;   sT[0].sCP[0].sCPR[241].nAckStart=786; sT[0].sCP[0].sCPR[241].nAckNum=1;  sT[0].sCP[0].sCPR[241].nSPOffsetCS = 5090;  sT[0].sCP[0].sCPR[241].nSPOffsetLek = 5091; 
sT[0].sCP[0].sCPR[242].nDCStart = 788;   sT[0].sCP[0].sCPR[242].nDCNum = 4;   sT[0].sCP[0].sCPR[242].nSCStart =793;   sT[0].sCP[0].sCPR[242].nAckStart=792; sT[0].sCP[0].sCPR[242].nAckNum=1;  sT[0].sCP[0].sCPR[242].nSPOffsetCS = 5127;  sT[0].sCP[0].sCPR[242].nSPOffsetLek = 5128; 
sT[0].sCP[0].sCPR[243].nDCStart = 794;   sT[0].sCP[0].sCPR[243].nDCNum = 4;   sT[0].sCP[0].sCPR[243].nSCStart =799;   sT[0].sCP[0].sCPR[243].nAckStart=798; sT[0].sCP[0].sCPR[243].nAckNum=1;  sT[0].sCP[0].sCPR[243].nSPOffsetCS = 5174;  sT[0].sCP[0].sCPR[243].nSPOffsetLek = 5175; 

sT[0].sCP[0].sCPR[244].nDCStart = 800;   sT[0].sCP[0].sCPR[244].nDCNum = 4;   sT[0].sCP[0].sCPR[244].nSCStart =805;   sT[0].sCP[0].sCPR[244].nAckStart=804; sT[0].sCP[0].sCPR[244].nAckNum=1;  sT[0].sCP[0].sCPR[244].nSPOffsetCS = 5221;  sT[0].sCP[0].sCPR[244].nSPOffsetLek = 5222; 
sT[0].sCP[0].sCPR[245].nDCStart = 806;   sT[0].sCP[0].sCPR[245].nDCNum = 4;   sT[0].sCP[0].sCPR[245].nSCStart =811;   sT[0].sCP[0].sCPR[245].nAckStart=810; sT[0].sCP[0].sCPR[245].nAckNum=1;  sT[0].sCP[0].sCPR[245].nSPOffsetCS = 5258;  sT[0].sCP[0].sCPR[245].nSPOffsetLek = 5259; 

sT[0].sCP[0].sCPR[246].nDCStart = 812;   sT[0].sCP[0].sCPR[246].nDCNum = 1;   sT[0].sCP[0].sCPR[246].nSCStart= 813;   sT[0].sCP[0].sCPR[246].nAckStart=0;   sT[0].sCP[0].sCPR[246].nAckNum=0;  sT[0].sCP[0].sCPR[246].nSPOffsetCS = 5274;  sT[0].sCP[0].sCPR[246].nSPOffsetLek = 5275 ;	
sT[0].sCP[0].sCPR[247].nDCStart = 814;   sT[0].sCP[0].sCPR[247].nDCNum = 8;   sT[0].sCP[0].sCPR[247].nSCStart= 822;   sT[0].sCP[0].sCPR[247].nAckStart=821; sT[0].sCP[0].sCPR[247].nAckNum=1;  sT[0].sCP[0].sCPR[247].nSPOffsetCS = 5343;  sT[0].sCP[0].sCPR[247].nSPOffsetLek = 5344 ;	

sT[0].sCP[0].sCPR[248].nDCStart = 823;   sT[0].sCP[0].sCPR[248].nDCNum = 2;   sT[0].sCP[0].sCPR[248].nSCStart= 827;   sT[0].sCP[0].sCPR[248].nAckStart=0;   sT[0].sCP[0].sCPR[248].nAckNum=0;  sT[0].sCP[0].sCPR[248].nSPOffsetCS = 5375;  sT[0].sCP[0].sCPR[248].nSPOffsetLek = 5376; sT[0].sCP[0].sCPR[248].nSPOffsetCS2 = 5377;   sT[0].sCP[0].sCPR[248].nSPOffsetLek2 = 5378;sT[0].sCP[0].sCPR[248].nSCNum  = 2;

sT[0].sCP[0].sCPR[250].nDCStart = 835;   sT[0].sCP[0].sCPR[250].nDCNum = 4;   sT[0].sCP[0].sCPR[250].nSCStart= 840;   sT[0].sCP[0].sCPR[250].nAckStart=839; sT[0].sCP[0].sCPR[250].nAckNum=1;  sT[0].sCP[0].sCPR[250].nSPOffsetCS = 5451;  sT[0].sCP[0].sCPR[250].nSPOffsetLek = 5452; 

sT[0].sCP[0].sCPR[251].nDCStart = 841;   sT[0].sCP[0].sCPR[251].nDCNum = 2;   sT[0].sCP[0].sCPR[251].nSCStart= 845;   sT[0].sCP[0].sCPR[251].nAckStart=0  ; sT[0].sCP[0].sCPR[251].nAckNum=0;  sT[0].sCP[0].sCPR[251].nSPOffsetCS = 5483;  sT[0].sCP[0].sCPR[251].nSPOffsetLek = 5484; sT[0].sCP[0].sCPR[251].nSPOffsetCS2 = 5485;   sT[0].sCP[0].sCPR[251].nSPOffsetLek2 = 5486;sT[0].sCP[0].sCPR[251].nSCNum  = 2;
sT[0].sCP[0].sCPR[252].nDCStart = 847;   sT[0].sCP[0].sCPR[252].nDCNum = 1;   sT[0].sCP[0].sCPR[252].nSCStart= 848;   sT[0].sCP[0].sCPR[252].nAckStart=0;   sT[0].sCP[0].sCPR[252].nAckNum=0;  sT[0].sCP[0].sCPR[252].nSPOffsetCS = 5501;  sT[0].sCP[0].sCPR[252].nSPOffsetLek = 5502 ;	
sT[0].sCP[0].sCPR[253].nDCStart = 849;   sT[0].sCP[0].sCPR[253].nDCNum = 1;   sT[0].sCP[0].sCPR[253].nSCStart= 850;   sT[0].sCP[0].sCPR[253].nAckStart=0;   sT[0].sCP[0].sCPR[253].nAckNum=0;  sT[0].sCP[0].sCPR[253].nSPOffsetCS = 5517;  sT[0].sCP[0].sCPR[253].nSPOffsetLek = 5518 ;	
sT[0].sCP[0].sCPR[254].nDCStart = 851;   sT[0].sCP[0].sCPR[254].nDCNum = 1;   sT[0].sCP[0].sCPR[254].nSCStart= 852;   sT[0].sCP[0].sCPR[254].nAckStart=0;   sT[0].sCP[0].sCPR[254].nAckNum=0;  sT[0].sCP[0].sCPR[254].nSPOffsetCS = 5533;  sT[0].sCP[0].sCPR[254].nSPOffsetLek = 5534 ;	
sT[0].sCP[0].sCPR[255].nDCStart = 907;   sT[0].sCP[0].sCPR[255].nDCNum = 4;   sT[0].sCP[0].sCPR[255].nSCStart= 912;   sT[0].sCP[0].sCPR[255].nAckStart=911; sT[0].sCP[0].sCPR[255].nAckNum=1;  sT[0].sCP[0].sCPR[255].nSPOffsetCS = 5780;  sT[0].sCP[0].sCPR[255].nSPOffsetLek = 5781; 
 
sT[0].sCP[0].sCPR[256].nDCStart = 913;   sT[0].sCP[0].sCPR[256].nDCNum = 4;   sT[0].sCP[0].sCPR[256].nSCStart= 917;   sT[0].sCP[0].sCPR[256].nAckStart=0;   sT[0].sCP[0].sCPR[256].nAckNum=0;  sT[0].sCP[0].sCPR[256].nSPOffsetCS = 5796;  sT[0].sCP[0].sCPR[256].nSPOffsetLek = 5797; 

sT[0].sCP[0].sCPR[257].nDCStart = 918;   sT[0].sCP[0].sCPR[257].nDCNum = 4;   sT[0].sCP[0].sCPR[257].nSCStart= 922;   sT[0].sCP[0].sCPR[257].nAckStart=0;   sT[0].sCP[0].sCPR[257].nAckNum=0;  sT[0].sCP[0].sCPR[257].nSPOffsetCS = 5812;  sT[0].sCP[0].sCPR[257].nSPOffsetLek = 5813; 
sT[0].sCP[0].sCPR[258].nDCStart = 923;   sT[0].sCP[0].sCPR[258].nDCNum = 4;   sT[0].sCP[0].sCPR[258].nSCStart= 927;   sT[0].sCP[0].sCPR[258].nAckStart=0;   sT[0].sCP[0].sCPR[258].nAckNum=0;  sT[0].sCP[0].sCPR[258].nSPOffsetCS = 5828;  sT[0].sCP[0].sCPR[258].nSPOffsetLek = 5829; 
sT[0].sCP[0].sCPR[259].nDCStart = 928;   sT[0].sCP[0].sCPR[259].nDCNum = 4;   sT[0].sCP[0].sCPR[259].nSCStart= 932;   sT[0].sCP[0].sCPR[259].nAckStart=0;   sT[0].sCP[0].sCPR[259].nAckNum=0;  sT[0].sCP[0].sCPR[259].nSPOffsetCS = 5846;  sT[0].sCP[0].sCPR[259].nSPOffsetLek = 5847; 
sT[0].sCP[0].sCPR[260].nDCStart = 933;   sT[0].sCP[0].sCPR[260].nDCNum = 4;   sT[0].sCP[0].sCPR[260].nSCStart= 937;   sT[0].sCP[0].sCPR[260].nAckStart=0;   sT[0].sCP[0].sCPR[260].nAckNum=0;  sT[0].sCP[0].sCPR[260].nSPOffsetCS = 5862;  sT[0].sCP[0].sCPR[260].nSPOffsetLek = 5863; 

sT[0].sCP[0].sCPR[261].nDCStart = 938;   sT[0].sCP[0].sCPR[261].nDCNum = 1;   sT[0].sCP[0].sCPR[261].nSCStart= 939;   sT[0].sCP[0].sCPR[261].nAckStart=940; sT[0].sCP[0].sCPR[261].nAckNum=1;  sT[0].sCP[0].sCPR[261].nSPOffsetCS = 5878;  sT[0].sCP[0].sCPR[261].nSPOffsetLek = 5879;	
sT[0].sCP[0].sCPR[262].nDCStart = 941;   sT[0].sCP[0].sCPR[262].nDCNum = 1;   sT[0].sCP[0].sCPR[262].nSCStart= 942;   sT[0].sCP[0].sCPR[262].nAckStart=0;   sT[0].sCP[0].sCPR[262].nAckNum=0;  sT[0].sCP[0].sCPR[262].nSPOffsetCS = 5894;  sT[0].sCP[0].sCPR[262].nSPOffsetLek = 5895;	

/* TMOK jelszámok inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
	sT[0].sMOT[nI].nIEC_SP_NUM = 14;
	sT[0].sMOT[nI].nIEC_DP_NUM  = 1;
	sT[0].sMOT[nI].nNMNum      = 3;
	
	/* Biztonsagi ellenorzes*/
	if (sT[0].sCP[0].sCPR[nI].nAckNum>4)
	{
		sT[0].sCP[0].sCPR[nI].nAckNum = 1;
	}
	
	
}

/* Auchan */
sT[0].sTI[0].nType = TYP_SEP;
	sT[0].sSep[0].nTableNumPar		= 2;
	sT[0].sSep[0].nIEC_SP       		= 60;
	sT[0].sSep[0].nIEC_ElsoZarlatCim	= 270;
	sT[0].sSep[0].nIEC_OsszevontHiba	= 302;
	sT[0].sSep[0].nIEC_MT_KommHiba		= 258;
	sT[0].sSep[0].nIEC_DP       		= 20;
	sT[0].sSep[0].nIEC_DP_FSZ1  		= 157;
	sT[0].sSep[0].nIEC_NM				= 10;
	sT[0].sSep[0].nNMNum		  		= 45;
	sT[0].sSep[0].nIEC_DP_2BIT1 		= 20;
	sT[0].sSep[0].nIEC_DP_2BIT2 		= 21;
	sT[0].sSep[0].nIEC_DP_2BIT3 		= 22;
	sT[0].sSep[0].nIEC_DP_2BIT_KINT1	= 4176;
	sT[0].sSep[0].nIEC_DP_2BIT_BENT1	= 4177;
	sT[0].sSep[0].nIEC_DP_2BIT_KINT2	= 4180;
	sT[0].sSep[0].nIEC_DP_2BIT_BENT2	= 4178;
	sT[0].sSep[0].nIEC_DP_2BIT_KINT3	= 4179;
	sT[0].sSep[0].nIEC_DP_2BIT_BENT3	= 4181;


	sT[0].sSep[1].nTableNumPar		= 2;
	sT[0].sSep[1].nIEC_SP       		= 124;
	sT[0].sSep[1].nIEC_ElsoZarlatCim	= 270;
	sT[0].sSep[1].nIEC_OsszevontHiba	= 302;
	sT[0].sSep[1].nIEC_MT_KommHiba		= 259;
	sT[0].sSep[1].nIEC_DP       		= 30;
	sT[0].sSep[1].nIEC_DP_FSZ1  		= 157;
	sT[0].sSep[1].nIEC_NM				= 55;
	sT[0].sSep[1].nNMNum		  		= 4;
	sT[0].sSep[1].nIEC_DP_2BIT1 		= 23;
	sT[0].sSep[1].nIEC_DP_2BIT2 		= 24;
	sT[0].sSep[1].nIEC_DP_2BIT3 		= 25;
	sT[0].sSep[1].nIEC_DP_2BIT_KINT1	= 4176;
	sT[0].sSep[1].nIEC_DP_2BIT_BENT1	= 4177;
	sT[0].sSep[1].nIEC_DP_2BIT_KINT2	= 4180;
	sT[0].sSep[1].nIEC_DP_2BIT_BENT2	= 4178;
	sT[0].sSep[1].nIEC_DP_2BIT_KINT3	= 4179;
	sT[0].sSep[1].nIEC_DP_2BIT_BENT3	= 4181;

	sT[0].sSep[2].nTableNumPar		= 2;
	sT[0].sSep[2].nIEC_SP       		= 188;
	sT[0].sSep[2].nIEC_ElsoZarlatCim	= 270;
	sT[0].sSep[2].nIEC_OsszevontHiba	= 302;
	sT[0].sSep[2].nIEC_MT_KommHiba		= 260;
	sT[0].sSep[2].nIEC_DP       		= 30;
	sT[0].sSep[2].nIEC_DP_FSZ1  		= 157;
	sT[0].sSep[2].nIEC_NM				= 55;
	sT[0].sSep[2].nNMNum		  		= 4;
	sT[0].sSep[2].nIEC_DP_2BIT1 		= 26;
	sT[0].sSep[2].nIEC_DP_2BIT2 		= 27;
	sT[0].sSep[2].nIEC_DP_2BIT3 		= 28;
	sT[0].sSep[2].nIEC_DP_2BIT4 		= 29;
	sT[0].sSep[2].nIEC_DP_2BIT_KINT1	= 4176;
	sT[0].sSep[2].nIEC_DP_2BIT_BENT1	= 4177;
	sT[0].sSep[2].nIEC_DP_2BIT_KINT2	= 4180;
	sT[0].sSep[2].nIEC_DP_2BIT_BENT2	= 4178;
	sT[0].sSep[2].nIEC_DP_2BIT_KINT3	= 4179;
	sT[0].sSep[2].nIEC_DP_2BIT_BENT3	= 4181;
	sT[0].sSep[2].nIEC_DP_2BIT_KINT4	= 4182;
	sT[0].sSep[2].nIEC_DP_2BIT_BENT4	= 4185;


	
	
/* RTU_ALL ---------------------------------------*/
sT[0].sTI[0].nType = TYP_MOT;

	sT[0].sMOT[0].nIEC_SP				= 0;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_SP_NUM			= 0;		/* Egybites értékek száma*/
	
	
/* Szekesfehervar átjátszó ---------------------------------------*/
sT[0].sTI[1].nType = TYP_MOT;

	sT[0].sMOT[1].nIEC_SP				= 10;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[1].nIEC_DP_NUM			= 0;
	sT[0].sMOT[1].nNMNum      			= 0;
/* MOR RTU ----------------------------------------------------------*/
sT[0].sTI[2].nType = TYP_MOT;

	/*sT[0].sMOT[2].nTableNumPar			= 2;		Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[2].nIEC_SP				= 1;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_SP_NUM			= 7;		/* Egybites értékek száma*/
	sT[0].sMOT[2].nIEC_DP				= 1;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_DP_NUM			= 7;   		/* Két bites értékek száma*/
	sT[0].sMOT[2].nIEC_NM				= 1;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[2].nNMNum				= 2;		/* Analóg mérések száma*/

	
/* Zalaegerszeg- TESCO ------------------------------------------------*/
sT[0].sTI[3].nType = TYP_TAL;
	/*sT[0].sTAL[3].nTableNumPar			= 2;*/
	sT[0].sTAL[3].nIEC_SP       		= 20;
	/*sT[0].sTAL[3].nIEC_ElsoZarlatCim	= 20;*/
	sT[0].sTAL[3].nIEC_OsszevontHiba	= 52;
	sT[0].sTAL[3].nIEC_MT_KommHiba		= 19;
	sT[0].sTAL[3].nIEC_DP       		= 10;
	sT[0].sTAL[3].nIEC_DP_FSZ1  		= 14;
	sT[0].sTAL[3].nIEC_NM				= 6;
	sT[0].sTAL[3].nNMNum		  		= 4;


/* Zalaegerszeg átjátszó ---------------------------------------*/
sT[0].sTI[4].nType = TYP_MOT;

	sT[0].sMOT[4].nIEC_SP				= 53;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[4].nIEC_DP_NUM			= 0;
	sT[0].sMOT[4].nNMNum      			= 0;

/* Zalaegerszeg- GE gazmotor ------------------------------------------------*/
sT[0].sTI[5].nType = TYP_TAL;
	/*sT[0].sTAL[5].nTableNumPar			= 2;*/
	sT[0].sTAL[5].nIEC_SP       		= 5551;
	/*sT[0].sTAL[5].nIEC_ElsoZarlatCim	= 20;*/
	sT[0].sTAL[5].nIEC_OsszevontHiba	= 5583;
	sT[0].sTAL[5].nIEC_MT_KommHiba		= 5584;
	sT[0].sTAL[5].nIEC_DP       		= 771;
	sT[0].sTAL[5].nIEC_DP_FSZ1  		= 775;
	sT[0].sTAL[5].nIEC_NM				= 912;
	sT[0].sTAL[5].nNMNum		  		= 9;


/* Oroszlany-ZENON ------------------------------------------------*/
sT[0].sTI[7].nType = TYP_TAL;
	/*sT[0].sTAL[7].nTableNumPar			= 2;*/
	sT[0].sTAL[7].nIEC_SP       		= 270;
	/*sT[0].sTAL[7].nIEC_ElsoZarlatCim	= 270;*/
	sT[0].sTAL[7].nIEC_OsszevontHiba	= 302;
	sT[0].sTAL[7].nIEC_MT_KommHiba		= 268;
	sT[0].sTAL[7].nIEC_DP       		= 30;
	sT[0].sTAL[7].nIEC_DP_FSZ1  		= 157;
	sT[0].sTAL[7].nIEC_NM				= 55;
	sT[0].sTAL[7].nNMNum		  		= 4;
	sT[0].sTAL[7].nIEC_DP_2BIT1 		= 36;
	sT[0].sTAL[7].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[7].nIEC_DP_2BIT_BENT1	= 913;

/* Tatabánya (Oroszlány) átjátszó ---------------------------------------*/
sT[0].sTI[8].nType = TYP_MOT;

	sT[0].sMOT[8].nIEC_SP				= 312;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_SP_NUM			= 6;		/* Egybites értékek száma*/
	sT[0].sMOT[8].nIEC_DP_NUM			= 0;
	sT[0].sMOT[8].nNMNum      			= 0;

/* Sárvár - Rábahö ------------------------------------------------------*/
sT[0].sTI[9].nType = TYP_TAL;
	/*sT[0].sTAL[9].nTableNumPar		= 2;*/
	sT[0].sTAL[9].nIEC_SP       		= 330;
	/*sT[0].sTAL[9].nIEC_ElsoZarlatCim	= 330;*/
	sT[0].sTAL[9].nIEC_OsszevontHiba	= 362;
	sT[0].sTAL[9].nIEC_MT_KommHiba	= 325;
	sT[0].sTAL[9].nIEC_DP       		= 37;
	sT[0].sTAL[9].nIEC_DP_FSZ1  		= 41;
	sT[0].sTAL[9].nIEC_NM				= 59;
	sT[0].sTAL[9].nNMNum		  		= 9;

/* Ikervár átjátszó -----------------------------------------------------*/
sT[0].sTI[10].nType = TYP_MOT;

	sT[0].sMOT[10].nIEC_SP			= 367;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_SP_NUM		= 6;		/* Egybites értékek száma*/
	sT[0].sMOT[10].nIEC_DP_NUM			= 0;
	sT[0].sMOT[10].nNMNum      			= 0;

/* Celldömölk-Prometheus ------------------------------------------------*/
sT[0].sTI[11].nType = TYP_TAL;
	/*sT[0].sTAL[11].nTableNumPar		= 2;*/
	sT[0].sTAL[11].nIEC_SP       		= 383;
	/*sT[0].sTAL[11].nIEC_ElsoZarlatCim	= 383;*/
	sT[0].sTAL[11].nIEC_OsszevontHiba	= 415;
	sT[0].sTAL[11].nIEC_MT_KommHiba	= 378;
	sT[0].sTAL[11].nIEC_DP       		= 45;
	sT[0].sTAL[11].nIEC_DP_FSZ1  		= 49;
	sT[0].sTAL[11].nIEC_NM			= 167;
	sT[0].sTAL[11].nNMNum		  		= 9;
	sT[0].sTAL[11].nIEC_DP_2BIT1 		= 155;
	sT[0].sTAL[11].nIEC_DP_2BIT_KINT1	= 926;
	sT[0].sTAL[11].nIEC_DP_2BIT_BENT1	= 927;

/* Komárom RTU ----------------------------------------------------------*/
sT[0].sTI[12].nType = TYP_MOT;

	/*sT[0].sMOT[12].nTableNumPar			= 2;		 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[12].nIEC_SP				= 418;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_SP_NUM			= 13;		/* Egybites értékek száma*/	
	sT[0].sMOT[12].nIEC_DP				= 53;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_DP_NUM			= 7;   		/* Két bites értékek száma*/
	sT[0].sMOT[12].nIEC_NM				= 71;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[12].nNMNum					= 2;		/* Analóg mérések száma*/

/* Igmánd átjátszó ------------------------------------------------------*/
sT[0].sTI[13].nType = TYP_MOT;

	sT[0].sMOT[13].nIEC_SP			= 431;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_SP_NUM		= 8;		/* Egybites értékek száma*/
	sT[0].sMOT[13].nIEC_DP_NUM			= 0;
	sT[0].sMOT[13].nNMNum      			= 0;

/* Szombathely átjátszó -------------------------------------------------*/
sT[0].sTI[14].nType = TYP_MOT;

	sT[0].sMOT[14].nIEC_SP				= 441;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_SP_NUM			= 8;		/* Egybites értékek száma*/
	sT[0].sMOT[14].nIEC_DP_NUM			= 0;
	sT[0].sMOT[14].nNMNum      			= 0;

/* Szombathely-Sághi út -------------------------------------------------*/
sT[0].sTI[15].nType = TYP_TAL;
	/*sT[0].sTAL[15].nTableNumPar		= 2;*/
	sT[0].sTAL[15].nIEC_SP       		= 510;
	/*sT[0].sTAL[15].nIEC_ElsoZarlatCim	= 510;*/
	sT[0].sTAL[15].nIEC_OsszevontHiba	= 542;
	sT[0].sTAL[15].nIEC_MT_KommHiba	= 505;
	sT[0].sTAL[15].nIEC_DP       		= 69;
	sT[0].sTAL[15].nIEC_DP_FSZ1  		= 73;
	sT[0].sTAL[15].nIEC_NM			= 77;
	sT[0].sTAL[15].nNMNum		  		= 4;
	sT[0].sTAL[15].nIEC_DP_2BIT1 		= 77;
	sT[0].sTAL[15].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[15].nIEC_DP_2BIT_BENT1	= 913;

/* Szombathely-MESZÖV ---------------------------------------------------*/
sT[0].sTI[16].nType = TYP_TAL;
	/*sT[0].sTAL[16].nTableNumPar		= 2;*/
	sT[0].sTAL[16].nIEC_SP       		= 461;
	/*sT[0].sTAL[16].nIEC_ElsoZarlatCim	= 461;*/
	sT[0].sTAL[16].nIEC_OsszevontHiba	= 493;
	sT[0].sTAL[16].nIEC_MT_KommHiba	= 456;
	sT[0].sTAL[16].nIEC_DP       		= 60;
	sT[0].sTAL[16].nIEC_DP_FSZ1  		= 64;
	sT[0].sTAL[16].nIEC_NM			= 73;
	sT[0].sTAL[16].nNMNum		  		= 4;
	sT[0].sTAL[16].nIEC_DP_2BIT1 		= 68;
	sT[0].sTAL[16].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[16].nIEC_DP_2BIT_BENT1	= 913;

/* Sárvár-Kórház 20 kV-os tok -------------------------------------------*/
sT[0].sTI[17].nType = TYP_TAL;
	/*sT[0].sTAL[17].nTableNumPar		= 2;*/
	sT[0].sTAL[17].nIEC_SP       		= 546;
	/*sT[0].sTAL[17].nIEC_ElsoZarlatCim	= 546;*/
	sT[0].sTAL[17].nIEC_OsszevontHiba	= 578;
	sT[0].sTAL[17].nIEC_MT_KommHiba	= 579;
	sT[0].sTAL[17].nIEC_DP       		= 78;
	sT[0].sTAL[17].nIEC_DP_FSZ1  		= 82;
	sT[0].sTAL[17].nIEC_NM			= 81;
	sT[0].sTAL[17].nNMNum		  		= 4;

/* Sárvár-Szatmár 2. Tr. ------------------------------------------------*/
sT[0].sTI[18].nType = TYP_TAL;
	/*sT[0].sTAL[18].nTableNumPar		= 2;*/
	sT[0].sTAL[18].nIEC_SP       		= 582;
	/*sT[0].sTAL[18].nIEC_ElsoZarlatCim	= 582;*/
	sT[0].sTAL[18].nIEC_OsszevontHiba	= 614;
	sT[0].sTAL[18].nIEC_MT_KommHiba	= 615;
	sT[0].sTAL[18].nIEC_DP       		= 86;
	sT[0].sTAL[18].nIEC_DP_FSZ1  		= 90;
	sT[0].sTAL[18].nIEC_NM			= 85;
	sT[0].sTAL[18].nNMNum		  		= 4;
	sT[0].sTAL[18].nIEC_DP_2BIT1 		= 94;
	sT[0].sTAL[18].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[18].nIEC_DP_2BIT_BENT1	= 913;

/* Sárvár-Vadkert 20 kV-os tok ------------------------------------------*/
sT[0].sTI[19].nType = TYP_TAL;
	/*sT[0].sTAL[19].nTableNumPar		= 2;*/
	sT[0].sTAL[19].nIEC_SP       		= 618;
	/*sT[0].sTAL[19].nIEC_ElsoZarlatCim	= 618;*/
	sT[0].sTAL[19].nIEC_OsszevontHiba	= 650;
	sT[0].sTAL[19].nIEC_MT_KommHiba	= 651;
	sT[0].sTAL[19].nIEC_DP       		= 95;
	sT[0].sTAL[19].nIEC_DP_FSZ1  		= 99;
	sT[0].sTAL[19].nIEC_NM			= 89;
	sT[0].sTAL[19].nNMNum		  		= 4;

/* Sárvár-Fürdö tr. -----------------------------------------------------*/
sT[0].sTI[20].nType = TYP_TAL;
	/*sT[0].sTAL[20].nTableNumPar		= 2;*/
	sT[0].sTAL[20].nIEC_SP       		= 654;
	/*sT[0].sTAL[20].nIEC_ElsoZarlatCim	= 654;*/
	sT[0].sTAL[20].nIEC_OsszevontHiba	= 686;
	sT[0].sTAL[20].nIEC_MT_KommHiba	= 687;
	sT[0].sTAL[20].nIEC_DP       		= 103;
	sT[0].sTAL[20].nIEC_DP_FSZ1  		= 107;
	sT[0].sTAL[20].nIEC_NM			= 93;
	sT[0].sTAL[20].nNMNum		  		= 4;
	sT[0].sTAL[20].nIEC_DP_2BIT1 		= 111;
	sT[0].sTAL[20].nIEC_DP_2BIT2 		= 112;
	sT[0].sTAL[20].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[20].nIEC_DP_2BIT_BENT1	= 913;
	sT[0].sTAL[20].nIEC_DP_2BIT_KINT2	= 926;
	sT[0].sTAL[20].nIEC_DP_2BIT_BENT2	= 927;

/* Zalaegerszeg - Praktiker ---------------------------------------------*/
sT[0].sTI[21].nType = TYP_TAL;
	/*sT[0].sTAL[21].nTableNumPar		= 2;*/
	sT[0].sTAL[21].nIEC_SP       		= 690;
	/*sT[0].sTAL[21].nIEC_ElsoZarlatCim	= 690;*/
	sT[0].sTAL[21].nIEC_OsszevontHiba	= 722;
	sT[0].sTAL[21].nIEC_MT_KommHiba	= 720;
	sT[0].sTAL[21].nIEC_DP       		= 113;
	sT[0].sTAL[21].nIEC_DP_FSZ1  		= 117;
	sT[0].sTAL[21].nIEC_NM			= 97;
	sT[0].sTAL[21].nNMNum		  		= 4;
	sT[0].sTAL[21].nIEC_DP_2BIT1 		= 121;
	sT[0].sTAL[21].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[21].nIEC_DP_2BIT_BENT1	= 913;
	sT[0].sTAL[21].nKommStatusNum		= 2;

/* Bükfürdö - Golf ------------------------------------------------------*/
sT[0].sTI[22].nType = TYP_TAL;
	/*sT[0].sTAL[22].nTableNumPar		= 2;*/
	sT[0].sTAL[22].nIEC_SP       		= 752;
	/*sT[0].sTAL[22].nIEC_ElsoZarlatCim	= 752;*/
	sT[0].sTAL[22].nIEC_OsszevontHiba	= 784;
	sT[0].sTAL[22].nIEC_MT_KommHiba	= 785;
	sT[0].sTAL[22].nIEC_DP       		= 122;
	sT[0].sTAL[22].nIEC_DP_FSZ1  		= 126;
	sT[0].sTAL[22].nIEC_NM			= 101;
	sT[0].sTAL[22].nNMNum		  		= 4;
	sT[0].sTAL[22].nIEC_DP_2BIT1 		= 130;
	sT[0].sTAL[22].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[22].nIEC_DP_2BIT_BENT1	= 913;

/* Mosonmagyaróvár átjátszó ---------------------------------------------*/
sT[0].sTI[23].nType = TYP_MOT;

	sT[0].sMOT[23].nIEC_SP				= 734;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_SP_NUM			= 8;		/* Egybites értékek száma*/
	sT[0].sMOT[23].nIEC_DP_NUM			= 0;
	sT[0].sMOT[23].nNMNum      			= 0;

/* Mosonszolnok ---------------------------------------------------------*/
sT[0].sTI[24].nType = TYP_TAL;
	/*sT[0].sTAL[24].nTableNumPar		= 2;*/
	sT[0].sTAL[24].nIEC_SP       		= 786;
	/*sT[0].sTAL[24].nIEC_ElsoZarlatCim	= 786;*/
	sT[0].sTAL[24].nIEC_OsszevontHiba	= 818;
	sT[0].sTAL[24].nIEC_MT_KommHiba	= 819;
	sT[0].sTAL[24].nIEC_DP       		= 131;
	sT[0].sTAL[24].nIEC_DP_FSZ1  		= 135;
	sT[0].sTAL[24].nIEC_NM			= 105;
	sT[0].sTAL[24].nNMNum		  		= 9;

/* Mór ESMAR ------------------------------------------------------------*/
sT[0].sTI[25].nType = TYP_TAL;
	/*sT[0].sTAL[25].nTableNumPar		= 2;*/
	sT[0].sTAL[25].nIEC_SP       		= 822;
	/*sT[0].sTAL[25].nIEC_ElsoZarlatCim	= 822;*/
	sT[0].sTAL[25].nIEC_OsszevontHiba	= 854;
	sT[0].sTAL[25].nIEC_MT_KommHiba	= 855;
	sT[0].sTAL[25].nIEC_DP       		= 139;
	sT[0].sTAL[25].nIEC_DP_FSZ1  		= 143;
	sT[0].sTAL[25].nIEC_NM			= 118;
	sT[0].sTAL[25].nNMNum		  		= 4;

/* Mór Benteller --------------------------------------------------------*/
sT[0].sTI[26].nType = TYP_TAL;
	/*sT[0].sTAL[26].nTableNumPar		= 2;*/
	sT[0].sTAL[26].nIEC_SP       		= 858;
	/*sT[0].sTAL[26].nIEC_ElsoZarlatCim	= 858;*/
	sT[0].sTAL[26].nIEC_OsszevontHiba	= 890;
	sT[0].sTAL[26].nIEC_MT_KommHiba	= 891;
	sT[0].sTAL[26].nIEC_DP       		= 147;
	sT[0].sTAL[26].nIEC_DP_FSZ1  		= 151;
	sT[0].sTAL[26].nIEC_NM			= 122;
	sT[0].sTAL[26].nNMNum		  		= 4;
	
/* Szombathely, Jabil --------------------------------------------------------*/
sT[0].sTI[27].nType = TYP_MOT;
	
	sT[0].sMOT[27].nIEC_SP				= 5535;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[27].nIEC_DP				= 763;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_DP_NUM			= 7;   		/* Két bites értékek száma*/
	sT[0].sMOT[27].nIEC_NM				= 176;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[27].nNMNum				= 2;		/* Analóg mérések száma*/
	
/* Komarom, Itsia ----------------------------------------------*/
sT[0].sTI[28].nType = TYP_TAL;
	/*sT[0].sTAL[28].nTableNumPar		= 2;*/
	sT[0].sTAL[28].nIEC_SP       		= 5379;
	/*sT[0].sTAL[28].nIEC_ElsoZarlatCim	= 5223;*/
	sT[0].sTAL[28].nIEC_OsszevontHiba	= 5411;
	sT[0].sTAL[28].nIEC_MT_KommHiba	= 5412;
	sT[0].sTAL[28].nIEC_DP       		= 739;
	sT[0].sTAL[28].nIEC_DP_FSZ1  		= 743;
	sT[0].sTAL[28].nIEC_NM				= 891;
	sT[0].sTAL[28].nNMNum		  		= 4;
	sT[0].sTAL[28].nIEC_DP_2BIT1 		= 747;
	sT[0].sTAL[28].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[28].nIEC_DP_2BIT_BENT1	= 912;

/* Tatabánya-Szent Borbála Kórház ---------------------------------------*/
sT[0].sTI[29].nType = TYP_MOT;

	/*sT[0].sMOT[29].nTableNumPar			= 2;		 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[29].nIEC_SP				= 905;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_SP_NUM			= 15;		/* Egybites értékek száma*/
	sT[0].sMOT[29].nIEC_DP				= 163;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[29].nIEC_NM				= 135;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[29].nNMNum					= 9;		/* Analóg mérések száma*/
	
/* Vasvar, regioho ----------------------------------------------------------*/
sT[0].sTI[30].nType = TYP_MOT;

	/*sT[0].sMOT[30].nTableNumPar			= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[30].nIEC_SP				= 5641;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_SP_NUM			= 12;		/* Egybites értékek száma*/
	sT[0].sMOT[30].nIEC_DP				= 792;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_DP_NUM			= 6;   		/* Két bites értékek száma*/
	sT[0].sMOT[30].nIEC_NM				= 925;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[30].nNMNum				= 7;		/* Analóg mérések száma*/
	
/* 81-61 TMOK -----------------------------------------------------------*/
sT[0].sTI[31].nType = TYP_TMOK;

	sT[0].sMOT[31].nIEC_SP				= 5655;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_DP				= 186;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_NM				= 68;		/* Mérések IEC kezdõcíme */
/* Sárvár kórház gázmotor --------------------------------------------------------*/
sT[0].sTI[32].nType = TYP_TAL;
	/*sT[0].sTAL[32].nTableNumPar		= 2;*/
	sT[0].sTAL[32].nIEC_SP       		= 5671;
	/*sT[0].sTAL[32].nIEC_ElsoZarlatCim	= 858;*/
	sT[0].sTAL[32].nIEC_OsszevontHiba	= 5703;
	sT[0].sTAL[32].nIEC_MT_KommHiba	= 5704;
	sT[0].sTAL[32].nIEC_DP       		= 798;
	sT[0].sTAL[32].nIEC_DP_FSZ1  		= 802;
	sT[0].sTAL[32].nIEC_NM			= 932;
	sT[0].sTAL[32].nNMNum		  		= 9;

/* Mosonmagyaróvár szélerömüvek -----------------------------------------*/
sT[0].sTI[33].nType = TYP_TAL;
	/*sT[0].sTAL[33].nTableNumPar			= 2;*/
	sT[0].sTAL[33].nIEC_SP       		= 1000;
	/*sT[0].sTAL[33].nIEC_ElsoZarlatCim	= 1000;*/
	sT[0].sTAL[33].nIEC_OsszevontHiba	= 1032;
	sT[0].sTAL[33].nIEC_MT_KommHiba		= 1033;
	sT[0].sTAL[33].nIEC_DP       		= 188;
	sT[0].sTAL[33].nIEC_DP_FSZ1  		= 192;
	sT[0].sTAL[33].nIEC_NM				= 180;
	sT[0].sTAL[33].nNMNum		  		= 19;
	sT[0].sTAL[33].nIEC_DP_12BIT1		= 196;
	sT[0].sTAL[33].nIEC_DP_12BIT2		= 197;
	sT[0].sTAL[33].nIEC_DP_12BIT3		= 198;
	sT[0].sTAL[33].nIEC_DP_2BIT_BK1		= 912;
	sT[0].sTAL[33].nIEC_DP_2BIT_BK2		= 913;
	sT[0].sTAL[33].nIEC_DP_2BIT_BK3		= 920;
	sT[0].sTAL[33].nKommStatusNum		= 4;
	sT[0].sTAL[33].nSP_EXTRA_OFFSET		= 1037;
	sT[0].sTAL[33].nSP_EXTRA_NUM		= 3;

/* Mosonmagyaróvár TESCO ------------------------------------------------*/
sT[0].sTI[34].nType = TYP_TAL;
	/*sT[0].sTAL[34].nTableNumPar			= 2;*/
	sT[0].sTAL[34].nIEC_SP       		= 1043;
	/*sT[0].sTAL[34].nIEC_ElsoZarlatCim	= 1043;*/
	sT[0].sTAL[34].nIEC_OsszevontHiba	= 1075;
	sT[0].sTAL[34].nIEC_MT_KommHiba		= 1076;
	sT[0].sTAL[34].nIEC_DP       		= 199;
	sT[0].sTAL[34].nIEC_DP_FSZ1  		= 203;
	sT[0].sTAL[34].nIEC_NM				= 199;
	sT[0].sTAL[34].nNMNum		  		= 4;

/* Szombathely-Babits u. ------------------------------------------------*/
sT[0].sTI[36].nType = TYP_TAL;
	/*sT[0].sTAL[36].nTableNumPar			= 2;*/
	sT[0].sTAL[36].nIEC_SP       		= 1117;
	/*sT[0].sTAL[36].nIEC_ElsoZarlatCim	= 1117;*/
	sT[0].sTAL[36].nIEC_OsszevontHiba	= 1149;
	sT[0].sTAL[36].nIEC_MT_KommHiba		= 1150;
	sT[0].sTAL[36].nIEC_DP       		= 217;
	sT[0].sTAL[36].nIEC_DP_FSZ1  		= 221;
	sT[0].sTAL[36].nIEC_NM				= 208;
	sT[0].sTAL[36].nNMNum		  		= 4;
	sT[0].sTAL[36].nIEC_DP_2BIT1 		= 225;
	sT[0].sTAL[36].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[36].nIEC_DP_2BIT_BENT1	= 913;

/* Szombathely-Pozsonyi u. ----------------------------------------------*/
sT[0].sTI[37].nType = TYP_TAL;
	/*sT[0].sTAL[37].nTableNumPar		= 2;*/
	sT[0].sTAL[37].nIEC_SP       		= 1154;
	/*sT[0].sTAL[37].nIEC_ElsoZarlatCim	= 1154;*/
	sT[0].sTAL[37].nIEC_OsszevontHiba	= 1186;
	sT[0].sTAL[37].nIEC_MT_KommHiba	= 1187;
	sT[0].sTAL[37].nIEC_DP       		= 226;
	sT[0].sTAL[37].nIEC_DP_FSZ1  		= 230;
	sT[0].sTAL[37].nIEC_NM			= 212;
	sT[0].sTAL[37].nNMNum		  		= 4;
	sT[0].sTAL[37].nIEC_DP_2BIT1 		= 234;
	sT[0].sTAL[37].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[37].nIEC_DP_2BIT_BENT1	= 913;

/* Szombathely-Szabadka u. ----------------------------------------------*/
sT[0].sTI[38].nType = TYP_TAL;
	/*sT[0].sTAL[38].nTableNumPar		= 2;*/
	sT[0].sTAL[38].nIEC_SP       		= 1191;
	/*sT[0].sTAL[38].nIEC_ElsoZarlatCim	= 1191;*/
	sT[0].sTAL[38].nIEC_OsszevontHiba	= 1223;
	sT[0].sTAL[38].nIEC_MT_KommHiba	= 1224;
	sT[0].sTAL[38].nIEC_DP       		= 235;
	sT[0].sTAL[38].nIEC_DP_FSZ1  		= 239;
	sT[0].sTAL[38].nIEC_NM			= 216;
	sT[0].sTAL[38].nNMNum		  		= 4;
	sT[0].sTAL[38].nIEC_DP_2BIT1 		= 243;
	sT[0].sTAL[38].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[38].nIEC_DP_2BIT_BENT1	= 913;

/* NOKIA, Komarom - TALUS -----------------------------------------------*/
sT[0].sTI[39].nType = TYP_TAL;
	/*sT[0].sTAL[39].nTableNumPar			= 2;*/
	sT[0].sTAL[39].nIEC_SP       		= 1250;
	/*sT[0].sTAL[39].nIEC_ElsoZarlatCim	= 1250;*/
	sT[0].sTAL[39].nIEC_OsszevontHiba	= 1282;
	sT[0].sTAL[39].nIEC_MT_KommHiba		= 1283;
	sT[0].sTAL[39].nIEC_DP       		= 250;
	sT[0].sTAL[39].nIEC_DP_FSZ1  		= 254;
	sT[0].sTAL[39].nIEC_NM				= 220;
	sT[0].sTAL[39].nNMNum		  		= 4;
	sT[0].sTAL[39].nIEC_DP_2BIT1 		= 258;
	sT[0].sTAL[39].nIEC_DP_2BIT2 		= 259;
	sT[0].sTAL[39].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[39].nIEC_DP_2BIT_BENT1	= 912;
	sT[0].sTAL[39].nIEC_DP_2BIT_KINT2	= 925;
	sT[0].sTAL[39].nIEC_DP_2BIT_BENT2	= 920;
	sT[0].sTAL[39].nSP_EXTRA_NUM		= 11;
	sT[0].sTAL[39].nSP_EXTRA_OFFSET		= 4751;
		
	
/* Buk TMOK, 45-01 -----------------------------------------------------------*/
sT[0].sTI[40].nType = TYP_TMOK;

	sT[0].sMOT[40].nIEC_SP				= 1367;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_DP				= 265;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_NM				= 260;		/* Mérések IEC kezdõcíme */

/* 40-01 TMOK -----------------------------------------------------------*/
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 1383;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_DP				= 266;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_NM				= 242;		/* Mérések IEC kezdõcíme */

/* 40-04 TMOK -----------------------------------------------------------*/
sT[0].sTI[42].nType = TYP_TMOK;

	sT[0].sMOT[42].nIEC_SP				= 1399;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_DP				= 267;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_NM				= 245;		/* Mérések IEC kezdõcíme */

/* 40-93 TMOK -----------------------------------------------------------*/
sT[0].sTI[43].nType = TYP_TMOK;

	sT[0].sMOT[43].nIEC_SP				= 1415;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_DP				= 268;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_NM				= 248;		/* Mérések IEC kezdõcíme */

/* 40-80 TMOK -----------------------------------------------------------*/
sT[0].sTI[44].nType = TYP_TMOK;

	sT[0].sMOT[44].nIEC_SP				= 1431;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_DP				= 269;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_NM				= 251;		/* Mérések IEC kezdõcíme */

/* 40-37 TMOK -----------------------------------------------------------*/
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 1447;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_DP				= 270;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_NM				= 254;		/* Mérések IEC kezdõcíme */

/* 12-54 TMOK -----------------------------------------------------------*/
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 1463;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_DP				= 271;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_NM				= 257;		/* Mérések IEC kezdõcíme */

/* Koszeg, gazmotor ------------------------------------------*/
sT[0].sTI[47].nType = TYP_TAL;
	/*sT[0].sTAL[47].nTableNumPar		= 2;*/
	sT[0].sTAL[47].nIEC_SP       		= 5708;
	/*sT[0].sTAL[47].nIEC_ElsoZarlatCim	= 618;*/
	sT[0].sTAL[47].nIEC_OsszevontHiba	= 5740;
	sT[0].sTAL[47].nIEC_MT_KommHiba		= 5741;
	sT[0].sTAL[47].nIEC_DP       		= 806;
	sT[0].sTAL[47].nIEC_DP_FSZ1  		= 810;
	sT[0].sTAL[47].nIEC_NM				= 941;
	sT[0].sTAL[47].nNMNum		  		= 9;
	sT[0].sTAL[47].nIEC_DP_2BIT1 		= 814;
	sT[0].sTAL[47].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[47].nIEC_DP_2BIT_BENT1	= 913;


/*Hetfo ---------------------------------------------------------------------------------------------------------*/

/* 12-89 TMOK -----------------------------------------------------------*/
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 1479;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_DP				= 272;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_NM				= 263;		/* Mérések IEC kezdõcíme */

/* 42-44 TMOK -----------------------------------------------------------*/
sT[0].sTI[49].nType = TYP_TMOK;

	sT[0].sMOT[49].nIEC_SP				= 1527;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_DP				= 273;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_NM				= 266;		/* Mérések IEC kezdõcíme */

/* 15-03 TMOK -----------------------------------------------------------*/
sT[0].sTI[50].nType = TYP_TMOK;

	sT[0].sMOT[50].nIEC_SP				= 1575;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_DP				= 278;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_NM				= 281;		/* Mérések IEC kezdõcíme */

/* 41-50 TMOK -----------------------------------------------------------*/
sT[0].sTI[51].nType = TYP_TMOK;

	sT[0].sMOT[51].nIEC_SP				= 1511;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_DP				= 274;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_NM				= 269;		/* Mérések IEC kezdõcíme */

/* 12-05 TMOK -----------------------------------------------------------*/
sT[0].sTI[52].nType = TYP_TMOK;

	sT[0].sMOT[52].nIEC_SP				= 1287;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_DP				= 260;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_NM				= 224;		/* Mérések IEC kezdõcíme */

/* 18-949 TMOK -----------------------------------------------------------*/
sT[0].sTI[53].nType = TYP_TMOK;

	sT[0].sMOT[53].nIEC_SP				= 1543;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_DP				= 276;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_NM				= 275;		/* Mérések IEC kezdõcíme */

/* 15-02 TMOK -----------------------------------------------------------*/
sT[0].sTI[54].nType = TYP_TMOK;

	sT[0].sMOT[54].nIEC_SP				= 1559;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_DP				= 277;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_NM				= 278;		/* Mérések IEC kezdõcíme */


/* 15-15 TMOK -----------------------------------------------------------*/
sT[0].sTI[55].nType = TYP_TMOK;

	sT[0].sMOT[55].nIEC_SP				= 1591;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_DP				= 279;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_NM				= 284;		/* Mérések IEC kezdõcíme */

/* 41-87, 41-62 Dupla PM6 TMOK ----------------------------------------------------*/
sT[0].sTI[56].nType = TYP_TMOK;

	sT[0].sMOT[56].nIEC_SP				= 1671;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[56].nIEC_DP				= 284;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[56].nIEC_NM				= 299;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[56].nNMNum					= 4;		/* Analóg mérések száma*/

/* 41-63 TMOK -----------------------------------------------------------*/
sT[0].sTI[57].nType = TYP_TMOK;

	sT[0].sMOT[57].nIEC_SP				= 1703;		/* Egybites értékek IEC kezdõcíme*/
	/* sT[0].sMOT[57].nIEC_SP_NUM			= 16;		Egybites értékek száma*/
	sT[0].sMOT[57].nIEC_DP				= 286;		/* Kétbites értékek IEC kezdõcíme*/
	/* sT[0].sMOT[57].nIEC_DP_NUM			= 1;   		 Két bites értékek száma*/
	sT[0].sMOT[57].nIEC_NM				= 996;		/* Mérések IEC kezdõcíme */
	/* sT[0].sMOT[57].nNMNum					= 3;		 Analóg mérések száma*/

/* Csutortok, pentek ---------------------------------------------------------------------------------------------------------*/
/* 15-00 TMOK -----------------------------------------------------------*/
sT[0].sTI[58].nType = TYP_TMOK;

	sT[0].sMOT[58].nIEC_SP				= 1351;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_DP				= 264;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_NM				= 236;		/* Mérések IEC kezdõcíme */

/* 15-06 TMOK -----------------------------------------------------------*/
sT[0].sTI[59].nType = TYP_TMOK;

	sT[0].sMOT[59].nIEC_SP				= 1623;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_DP				= 281;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_NM				= 290;		/* Mérések IEC kezdõcíme */

/* 14-02 TMOK -----------------------------------------------------------*/
sT[0].sTI[60].nType = TYP_TMOK;

	sT[0].sMOT[60].nIEC_SP				= 1639;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_DP				= 282;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_NM				= 293;		/* Mérések IEC kezdõcíme */

/* 14-05 TMOK -----------------------------------------------------------*/
sT[0].sTI[61].nType = TYP_TMOK;

	sT[0].sMOT[61].nIEC_SP				= 1655;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_DP				= 283;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_NM				= 296;		/* Mérések IEC kezdõcíme */

/* 12-33 TMOK -----------------------------------------------------------*/
sT[0].sTI[62].nType = TYP_TMOK;

	sT[0].sMOT[62].nIEC_SP				= 1303;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_DP				= 261;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_NM				= 227;		/* Mérések IEC kezdõcíme */

/* 12-34 TMOK -----------------------------------------------------------*/
sT[0].sTI[63].nType = TYP_TMOK;

	sT[0].sMOT[63].nIEC_SP				= 1319;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_DP				= 262;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_NM				= 230;		/* Mérések IEC kezdõcíme */

/* R1002 atjatszo, Tata -----------------------------------------------------------*/
sT[0].sTI[64].nType = TYP_TMOK;

	/*sT[0].sMOT[64].nTableNumPar			= 2;		 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[64].nIEC_SP				= 1719;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_SP_NUM			= 4;		/* Egybites értékek száma*/

/* R1003 Tata, Biocalor -----------------------------------------------------------*/
sT[0].sTI[65].nType = TYP_TAL;

		/*sT[0].sTAL[65].nTableNumPar		= 2;*/
		sT[0].sTAL[65].nIEC_SP       		= 1750;
		/*sT[0].sTAL[65].nIEC_ElsoZarlatCim	= 1750;*/
		sT[0].sTAL[65].nIEC_OsszevontHiba	= 1782;
		sT[0].sTAL[65].nIEC_MT_KommHiba	= 1783;
		sT[0].sTAL[65].nIEC_DP       		= 287;
		sT[0].sTAL[65].nIEC_DP_FSZ1  		= 291;
		sT[0].sTAL[65].nIEC_NM			= 305;
		sT[0].sTAL[65].nNMNum		  		= 9;
		sT[0].sTAL[65].nIEC_DP_2BIT1 		= 295;
		sT[0].sTAL[65].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[65].nIEC_DP_2BIT_BENT1	= 913;

/* 12-51 TMOK -----------------------------------------------------------*/
sT[0].sTI[66].nType = TYP_TMOK;

	sT[0].sMOT[66].nIEC_SP				= 1607;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_DP				= 280;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_NM				= 287;		/* Mérések IEC kezdõcíme */

/* 14-44 TMOK -----------------------------------------------------------*/
sT[0].sTI[67].nType = TYP_TMOK;

	sT[0].sMOT[67].nIEC_SP				= 1335;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_DP				= 263;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_NM				= 233;		/* Mérések IEC kezdõcíme */

/* 64-26 TMOK -----------------------------------------------------------*/
sT[0].sTI[68].nType = TYP_TMOK;

	sT[0].sMOT[68].nIEC_SP				= 1787;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_DP				= 296;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_NM				= 314;		/* Mérések IEC kezdõcíme */

/* Bukfurdo, Radison hotel 1. resz -----------------------------------------------------------*/
sT[0].sTI[69].nType = TYP_TAL;

		/*sT[0].sTAL[69].nTableNumPar		= 2;*/
		sT[0].sTAL[69].nIEC_SP       		= 1080;
		/*sT[0].sTAL[69].nIEC_ElsoZarlatCim	= 1080;*/
		sT[0].sTAL[69].nIEC_OsszevontHiba	= 1112;
		sT[0].sTAL[69].nIEC_MT_KommHiba	= 1113;
		sT[0].sTAL[69].nIEC_DP       		= 207;
		sT[0].sTAL[69].nIEC_DP_FSZ1  		= 211;
		sT[0].sTAL[69].nIEC_NM			= 203;
		sT[0].sTAL[69].nNMNum		  		= 4;
		sT[0].sTAL[69].nIEC_DP_2BIT1 		= 215;
		sT[0].sTAL[69].nIEC_DP_2BIT2 		= 216;
		sT[0].sTAL[69].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[69].nIEC_DP_2BIT_BENT1	= 912;
		sT[0].sTAL[69].nIEC_DP_2BIT_KINT2	= 925;
		sT[0].sTAL[69].nIEC_DP_2BIT_BENT2	= 920;

/* Bukfurdo, Radison hotel 2. resz -----------------------------------------------------------*/
sT[0].sTI[70].nType = TYP_TAL;

		/*sT[0].sTAL[70].nTableNumPar		= 2;*/
		sT[0].sTAL[70].nIEC_SP       		= 1803;
		/*sT[0].sTAL[70].nIEC_ElsoZarlatCim	= 1803;*/
		sT[0].sTAL[70].nIEC_OsszevontHiba	= 1835;
		sT[0].sTAL[70].nIEC_MT_KommHiba	= 1836;
		sT[0].sTAL[70].nKommStatusNum		= 6;
		sT[0].sTAL[70].nIEC_DP       		= 297;
		sT[0].sTAL[70].nIEC_DP_FSZ1  		= 301;
		sT[0].sTAL[70].nIEC_NM			= 317;
		sT[0].sTAL[70].nNMNum		  		= 14;
		sT[0].sTAL[70].nSP_EXTRA_NUM		= 6;
		sT[0].sTAL[70].nSP_EXTRA_OFFSET	= 1844;
		sT[0].sTAL[70].nDP_EXTRA_NUM		= 4;
		sT[0].sTAL[70].nDP_EXTRA_OFFSET	= 308;

/* 43. het --------------------------------------------------------------*/
/* 41-78 TMOK -----------------------------------------------------------*/
sT[0].sTI[71].nType = TYP_TMOK;

	sT[0].sMOT[71].nIEC_SP				= 1972;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_DP				= 312;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_NM				= 331;		/* Mérések IEC kezdõcíme */

 /* 41-80 TMOK -----------------------------------------------------------*/
sT[0].sTI[72].nType = TYP_TMOK;

	sT[0].sMOT[72].nIEC_SP				= 1860;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_DP				= 313;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_NM				= 334;		/* Mérések IEC kezdõcíme */

 /* 41-66 TMOK -----------------------------------------------------------*/
sT[0].sTI[73].nType = TYP_TMOK;

	sT[0].sMOT[73].nIEC_SP				= 1876;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_DP				= 314;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_NM				= 337;		/* Mérések IEC kezdõcíme */

 /* 41-54 TMOK -----------------------------------------------------------*/
sT[0].sTI[74].nType = TYP_TMOK;

	sT[0].sMOT[74].nIEC_SP				= 1892;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_DP				= 315;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_NM				= 340;		/* Mérések IEC kezdõcíme */

 /* 41-60 TMOK -----------------------------------------------------------*/
sT[0].sTI[75].nType = TYP_TMOK;

	sT[0].sMOT[75].nIEC_SP				= 1908;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_DP				= 316;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_NM				= 343;		/* Mérések IEC kezdõcíme */


 /* 41-61 TMOK -----------------------------------------------------------*/
sT[0].sTI[76].nType = TYP_TMOK;

	sT[0].sMOT[76].nIEC_SP				= 1924;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_DP				= 317;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_NM				= 346;		/* Mérések IEC kezdõcíme */

 /* 40-88 TMOK -----------------------------------------------------------*/
sT[0].sTI[77].nType = TYP_TMOK;

	sT[0].sMOT[77].nIEC_SP				= 1940;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_DP				= 318;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_NM				= 349;		/* Mérések IEC kezdõcíme */

 /* 40-13 (regi 40-84) TMOK -----------------------------------------------------------*/
sT[0].sTI[78].nType = TYP_TMOK;

	sT[0].sMOT[78].nIEC_SP				= 1956;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_DP				= 319;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_NM				= 352;		/* Mérések IEC kezdõcíme */

 /* 41-24 TMOK -----------------------------------------------------------*/
sT[0].sTI[79].nType = TYP_TMOK;

	sT[0].sMOT[79].nIEC_SP				= 2000;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_DP				= 320;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_NM				= 355;		/* Mérések IEC kezdõcíme */

 /* 41-27 TMOK -----------------------------------------------------------*/
sT[0].sTI[80].nType = TYP_TMOK;

	sT[0].sMOT[80].nIEC_SP				= 2016;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[80].nIEC_DP				= 321;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[80].nIEC_NM				= 358;		/* Mérések IEC kezdõcíme */

 /* 40-58 TMOK -----------------------------------------------------------*/
sT[0].sTI[81].nType = TYP_TMOK;

	sT[0].sMOT[81].nIEC_SP				= 2032;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_DP				= 322;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_NM				= 361;		/* Mérések IEC kezdõcíme */

/* 42-60 TMOK ----------------------------------------------------------*/
sT[0].sTI[82].nType = TYP_TMOK;

	sT[0].sMOT[82].nIEC_SP				= 4547;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_DP				= 570;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_NM				= 785;		/* Mérések IEC kezdõcíme */

 /* 41-20 TMOK -----------------------------------------------------------*/
sT[0].sTI[83].nType = TYP_TMOK;

	sT[0].sMOT[83].nIEC_SP				= 2064;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_DP				= 324;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_NM				= 367;		/* Mérések IEC kezdõcíme */

 /* 44-09 TMOK -----------------------------------------------------------*/
sT[0].sTI[84].nType = TYP_TMOK;

	sT[0].sMOT[84].nIEC_SP				= 2080;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_DP				= 325;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_NM				= 370;		/* Mérések IEC kezdõcíme */

 /* 41-19 TMOK -----------------------------------------------------------*/
sT[0].sTI[85].nType = TYP_TMOK;

	sT[0].sMOT[85].nIEC_SP				= 2096;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_DP				= 326;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_NM				= 373;		/* Mérések IEC kezdõcíme */

 /* 41-92 TMOK -----------------------------------------------------------*/
sT[0].sTI[86].nType = TYP_TMOK;

	sT[0].sMOT[86].nIEC_SP				= 2112;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_DP				= 327;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_NM				= 1008;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[86].nNMNum				= 4;		/* Analóg mérések száma*/

 /* 41-26 TMOK -----------------------------------------------------------*/
sT[0].sTI[87].nType = TYP_TMOK;

	sT[0].sMOT[87].nIEC_SP				= 2128;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_DP				= 328;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_NM				= 379;		/* Mérések IEC kezdõcíme */

 /* 41-34 TMOK -----------------------------------------------------------*/
sT[0].sTI[88].nType = TYP_TMOK;

	sT[0].sMOT[88].nIEC_SP				= 2144;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_DP				= 329;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_NM				= 382;		/* Mérések IEC kezdõcíme */

 /* 40-40 TMOK -----------------------------------------------------------*/
sT[0].sTI[89].nType = TYP_TMOK;

	sT[0].sMOT[89].nIEC_SP				= 2160;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_DP				= 330;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_NM				= 385;		/* Mérések IEC kezdõcíme */

 /* 40-79 TMOK -----------------------------------------------------------*/
sT[0].sTI[90].nType = TYP_TMOK;

	sT[0].sMOT[90].nIEC_SP				= 2176;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_DP				= 331;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_NM				= 388;		/* Mérések IEC kezdõcíme */

 /* 60-50 TMOK -----------------------------------------------------------*/
sT[0].sTI[91].nType = TYP_TMOK;

	sT[0].sMOT[91].nIEC_SP				= 1728;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_DP				= 332;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_NM				= 391;		/* Mérések IEC kezdõcíme */

 /* 41-41 TMOK -----------------------------------------------------------*/
sT[0].sTI[92].nType = TYP_TMOK;

	sT[0].sMOT[92].nIEC_SP				= 2298;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_DP				= 339;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_NM				= 412;		/* Mérések IEC kezdõcíme */

/* 40-73 TMOK -----------------------------------------------------------*/
sT[0].sTI[93].nType = TYP_TMOK;

	sT[0].sMOT[93].nIEC_SP				= 2266;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_DP				= 337;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_NM				= 406;		/* Mérések IEC kezdõcíme */

/* 41-48 TMOK -----------------------------------------------------------*/
sT[0].sTI[94].nType = TYP_TMOK;

	sT[0].sMOT[94].nIEC_SP				= 2282;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_DP				= 338;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_NM				= 409;		/* Mérések IEC kezdõcíme */

/* 48-411 TMOK -----------------------------------------------------------*/
sT[0].sTI[95].nType = TYP_TMOK;

	sT[0].sMOT[95].nIEC_SP				= 2192;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[95].nIEC_DP				= 333;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[95].nIEC_NM				= 394;		/* Mérések IEC kezdõcíme */

/* 48-642 TMOK -----------------------------------------------------------*/
sT[0].sTI[96].nType = TYP_TMOK;

	sT[0].sMOT[96].nIEC_SP				= 2208;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_DP				= 334;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_NM				= 397;		/* Mérések IEC kezdõcíme */

/* 41-36 TMOK -----------------------------------------------------------*/
sT[0].sTI[97].nType = TYP_TMOK;

	sT[0].sMOT[97].nIEC_SP				= 2314;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_DP				= 340;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_NM				= 415;		/* Mérések IEC kezdõcíme */

/* 41-04 TMOK -----------------------------------------------------------*/
sT[0].sTI[98].nType = TYP_TMOK;

	sT[0].sMOT[98].nIEC_SP				= 2224;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_DP				= 335;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_NM				= 400;		/* Mérések IEC kezdõcíme */

/* 44-04 TMOK -----------------------------------------------------------*/
sT[0].sTI[99].nType = TYP_TMOK;

	sT[0].sMOT[99].nIEC_SP				= 2250;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_DP				= 336;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_NM				= 403;		/* Mérések IEC kezdõcíme */

/* 41-35 TMOK -----------------------------------------------------------*/
sT[0].sTI[100].nType = TYP_TMOK;

	sT[0].sMOT[100].nIEC_SP				= 2378;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_DP				= 344;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_NM				= 427;		/* Mérések IEC kezdõcíme */

/* 41-95 TMOK -----------------------------------------------------------*/
sT[0].sTI[101].nType = TYP_TMOK;

	sT[0].sMOT[101].nIEC_SP				= 2330;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_DP				= 341;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_NM				= 418;		/* Mérések IEC kezdõcíme */

/* 41-33 TMOK -----------------------------------------------------------*/
sT[0].sTI[102].nType = TYP_TMOK;

	sT[0].sMOT[102].nIEC_SP				= 2346;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_DP				= 342;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_NM				= 421;		/* Mérések IEC kezdõcíme */

/* 43-07 TMOK -----------------------------------------------------------*/
sT[0].sTI[103].nType = TYP_TMOK;

	sT[0].sMOT[103].nIEC_SP				= 2426;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_DP				= 347;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_NM				= 436;		/* Mérések IEC kezdõcíme */

/* 44-03 TMOK -----------------------------------------------------------*/
sT[0].sTI[104].nType = TYP_TMOK;

	sT[0].sMOT[104].nIEC_SP				= 2442;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_DP				= 348;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_NM				= 439;		/* Mérések IEC kezdõcíme */

/* R1004 Szekesfehervar, Szent Gyorgy korhaz -----------------------------------------------------------*/
sT[0].sTI[105].nType = TYP_TAL;

		/*sT[0].sTAL[105].nTableNumPar			= 2;*/
		sT[0].sTAL[105].nIEC_SP       		= 2458;
		/*sT[0].sTAL[105].nIEC_ElsoZarlatCim	= 2458;*/
		sT[0].sTAL[105].nIEC_OsszevontHiba	= 2490;
		sT[0].sTAL[105].nIEC_MT_KommHiba		= 2491;
		sT[0].sTAL[105].nKommStatusNum		= 2;
		sT[0].sTAL[105].nIEC_DP       		= 349;
		sT[0].sTAL[105].nIEC_DP_FSZ1  		= 353;
		sT[0].sTAL[105].nIEC_NM				= 442;
		sT[0].sTAL[105].nNMNum		  		= 9;
		sT[0].sTAL[105].nIEC_DP_2BIT1 		= 357;
		sT[0].sTAL[105].nIEC_DP_12BIT1		= 358;
		sT[0].sTAL[105].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[105].nIEC_DP_2BIT_BENT1	= 913;
		sT[0].sTAL[105].nIEC_DP_2BIT_BK1		= 920;

/* R1005, Szombathely Mikes ut -----------------------------------------------------------*/
sT[0].sTI[106].nType = TYP_TAL;

		/*sT[0].sTAL[106].nTableNumPar			= 2;*/
		sT[0].sTAL[106].nIEC_SP       		= 2500;
		/*sT[0].sTAL[106].nIEC_ElsoZarlatCim	= 2500;*/
		sT[0].sTAL[106].nIEC_OsszevontHiba	= 2532;
		sT[0].sTAL[106].nIEC_MT_KommHiba		= 2533;
		sT[0].sTAL[106].nIEC_DP       		= 359;
		sT[0].sTAL[106].nIEC_DP_FSZ1  		= 363;
		sT[0].sTAL[106].nIEC_NM				= 451;
		sT[0].sTAL[106].nNMNum		  		= 9;
		sT[0].sTAL[106].nIEC_DP_2BIT1 		= 367;
		sT[0].sTAL[106].nIEC_DP_2BIT_KINT1	= 925;
		sT[0].sTAL[106].nIEC_DP_2BIT_BENT1	= 926;

/* R1006, Oroszlany VGV -----------------------------------------------------------*/
sT[0].sTI[107].nType = TYP_TAL;

		/*sT[0].sTAL[107].nTableNumPar			= 2;*/
		sT[0].sTAL[107].nIEC_SP       		= 2537;
		/*sT[0].sTAL[107].nIEC_ElsoZarlatCim	= 2537;*/
		sT[0].sTAL[107].nIEC_OsszevontHiba	= 2569;
		sT[0].sTAL[107].nIEC_MT_KommHiba		= 2570;
		sT[0].sTAL[107].nIEC_DP       		= 368;
		sT[0].sTAL[107].nIEC_DP_FSZ1  		= 372;
		sT[0].sTAL[107].nIEC_NM				= 460;
		sT[0].sTAL[107].nNMNum		  		= 4;

/* R1007, Almasfuzito, Timfoldgyar -----------------------------------------------------------*/
sT[0].sTI[108].nType = TYP_MOT;

	/*sT[0].sMOT[108].nTableNumPar			= 2;		 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[108].nIEC_SP				= 2574;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_SP_NUM			= 8;		/* Egybites értékek száma*/
	sT[0].sMOT[108].nIEC_DP				= 376;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[108].nIEC_NM				= 464;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[108].nNMNum				= 5;		/* Analóg mérések száma*/


/* Bukfurdo Gold Hotel  ------------------------------------------------*/
sT[0].sTI[109].nType = TYP_TAL;
	/*sT[0].sTAL[109].nTableNumPar		= 2;*/
	sT[0].sTAL[109].nIEC_SP       		= 3926;
	/*sT[0].sTAL[109].nIEC_ElsoZarlatCim	= 3926;*/
	sT[0].sTAL[109].nIEC_OsszevontHiba	= 3958;
	sT[0].sTAL[109].nIEC_MT_KommHiba	= 3959;
	sT[0].sTAL[109].nIEC_DP       		= 512;
	sT[0].sTAL[109].nIEC_DP_FSZ1  		= 516;
	sT[0].sTAL[109].nIEC_NM				= 696;
	sT[0].sTAL[109].nNMNum		  		= 4;
	sT[0].sTAL[109].nIEC_DP_2BIT1 		= 520;
	sT[0].sTAL[109].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[109].nIEC_DP_2BIT_BENT1	= 913;

/* Bukfurdo Hedvig Hotel  ------------------------------------------------*/
sT[0].sTI[110].nType = TYP_TAL;
	/*sT[0].sTAL[110].nTableNumPar		= 2;*/
	sT[0].sTAL[110].nIEC_SP       		= 3963;
	/*sT[0].sTAL[110].nIEC_ElsoZarlatCim	= 3963;*/
	sT[0].sTAL[110].nIEC_OsszevontHiba	= 3995;
	sT[0].sTAL[110].nIEC_MT_KommHiba	= 3996;
	sT[0].sTAL[110].nIEC_DP       		= 522;
	sT[0].sTAL[110].nIEC_DP_FSZ1  		= 526;
	sT[0].sTAL[110].nIEC_NM				= 700;
	sT[0].sTAL[110].nNMNum		  		= 4;
	sT[0].sTAL[110].nIEC_DP_2BIT1 		= 530;
	sT[0].sTAL[110].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[110].nIEC_DP_2BIT_BENT1	= 913;
	

/* Bukfurdo Répce Hotel  ------------------------------------------------*/
sT[0].sTI[111].nType = TYP_TAL;
	/*sT[0].sTAL[111].nTableNumPar		= 2;*/
	sT[0].sTAL[111].nIEC_SP       		= 4000;
	/*sT[0].sTAL[111].nIEC_ElsoZarlatCim	= 4000;*/
	sT[0].sTAL[111].nIEC_OsszevontHiba	= 4032;
	sT[0].sTAL[111].nIEC_MT_KommHiba	= 4033;
	sT[0].sTAL[111].nIEC_DP       		= 532;
	sT[0].sTAL[111].nIEC_DP_FSZ1  		= 536;
	sT[0].sTAL[111].nIEC_NM				= 704;
	sT[0].sTAL[111].nNMNum		  		= 4;
	sT[0].sTAL[111].nIEC_DP_2BIT1 		= 540;
	sT[0].sTAL[111].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[111].nIEC_DP_2BIT_BENT1	= 913;

/* Szombathely, Derkovits ut -----------------------------------------------------------*/
sT[0].sTI[112].nType = TYP_TMOK;

	/*sT[0].sMOT[112].nTableNumPar			= 2;		 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[112].nIEC_SP				= 2584;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_SP_NUM			= 8;		/* Egybites értékek száma*/


/* 41-93 TMOK -----------------------------------------------------------*/
sT[0].sTI[113].nType = TYP_TMOK;

	sT[0].sMOT[113].nIEC_SP				= 922;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_DP				= 398;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_NM				= 469;		/* Mérések IEC kezdõcíme */

/* 41-51 TMOK -----------------------------------------------------------*/
sT[0].sTI[114].nType = TYP_TMOK;

	sT[0].sMOT[114].nIEC_SP				= 938;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_DP				= 399;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_NM				= 472;		/* Mérések IEC kezdõcíme */

/* 41-64 TMOK -----------------------------------------------------------*/
sT[0].sTI[115].nType = TYP_TMOK;

	sT[0].sMOT[115].nIEC_SP				= 954;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_DP				= 171;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_NM				= 151;		/* Mérések IEC kezdõcíme */

/* 12-30 TMOK -----------------------------------------------------------*/
sT[0].sTI[116].nType = TYP_TMOK;

	sT[0].sMOT[116].nIEC_SP				= 970;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_DP				= 172;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_NM				= 154;		/* Mérések IEC kezdõcíme */

/* 41-65 TMOK -----------------------------------------------------------*/
sT[0].sTI[117].nType = TYP_TMOK;

	sT[0].sMOT[117].nIEC_SP				= 1228;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_DP				= 173;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_NM				= 157;		/* Mérések IEC kezdõcíme */

/* 12-25, 12-57 -----------------------------------------------------------*/

sT[0].sTI[118].nType = TYP_TMOK;

	sT[0].sMOT[118].nIEC_SP				= 2627;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[118].nIEC_DP				= 174;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[118].nIEC_NM				= 126;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[118].nNMNum				= 4;		/* Analóg mérések száma*/
/* 85-01, 85-23 -----------------------------------------------------------*/
sT[0].sTI[119].nType = TYP_TMOK;

	sT[0].sMOT[119].nIEC_SP				= 2394;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[119].nIEC_DP				= 176;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[119].nIEC_NM				= 130;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[119].nNMNum				= 4;		/* Analóg mérések száma*/

/* 86-01, 86-22 -----------------------------------------------------------*/
sT[0].sTI[120].nType = TYP_TMOK;

	sT[0].sMOT[120].nIEC_SP				= 2659;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[120].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[120].nIEC_DP				= 178;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[120].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[120].nIEC_NM				= 160;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[120].nNMNum				= 4;		/* Analóg mérések száma*/

/* 12-68 -----------------------------------------------------------*/
sT[0].sTI[121].nType = TYP_TMOK;

	sT[0].sMOT[121].nIEC_SP				= 2362;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[121].nIEC_DP				= 180;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[121].nIEC_NM				= 164;		/* Mérések IEC kezdõcíme */

/* Szombathely,  Markusovszky kórház -----------------------------------------------------------*/
sT[0].sTI[122].nType = TYP_MOT;

	/*sT[0].sMOT[122].nTableNumPar			= 2;		 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[122].nIEC_SP				= 2691;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[122].nIEC_DP				= 483;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_DP_NUM			= 9;   		/* Két bites értékek száma*/
	sT[0].sMOT[122].nIEC_NM				= 480;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[122].nNMNum				= 7;		/* Analóg mérések száma*/


/* 31-02 TMOK -----------------------------------------------------------*/
sT[0].sTI[123].nType = TYP_TMOK;

	sT[0].sMOT[123].nIEC_SP				= 2707;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_DP				= 400;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_NM				= 487;		/* Mérések IEC kezdõcíme */

/* 31-07 TMOK -----------------------------------------------------------*/
sT[0].sTI[124].nType = TYP_TMOK;

	sT[0].sMOT[124].nIEC_SP				= 2723;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_DP				= 401;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_NM				= 490;		/* Mérések IEC kezdõcíme */

/* 31-34 TMOK -----------------------------------------------------------*/
sT[0].sTI[125].nType = TYP_TMOK;

	sT[0].sMOT[125].nIEC_SP				= 2750;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_DP				= 402;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_NM				= 493;		/* Mérések IEC kezdõcíme */

/* 35-17 TMOK -----------------------------------------------------------*/
sT[0].sTI[126].nType = TYP_TMOK;

	sT[0].sMOT[126].nIEC_SP				= 2766;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[126].nIEC_DP				= 403;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[126].nIEC_NM				= 496;		/* Mérések IEC kezdõcíme */

/* 32-75 TMOK -----------------------------------------------------------*/
sT[0].sTI[127].nType = TYP_TMOK;

	sT[0].sMOT[127].nIEC_SP				= 2782;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_DP				= 404;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_NM				= 499;		/* Mérések IEC kezdõcíme */

/* 34-09 TMOK -----------------------------------------------------------*/
sT[0].sTI[128].nType = TYP_TMOK;

	sT[0].sMOT[128].nIEC_SP				= 2798;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_DP				= 405;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_NM				= 502;		/* Mérések IEC kezdõcíme */

/* 34-16 TMOK -----------------------------------------------------------*/
sT[0].sTI[129].nType = TYP_TMOK;

	sT[0].sMOT[129].nIEC_SP				= 2814;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_DP				= 406;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_NM				= 505;		/* Mérések IEC kezdõcíme */

/* 34-29 TMOK -----------------------------------------------------------*/
sT[0].sTI[130].nType = TYP_TMOK;

	sT[0].sMOT[130].nIEC_SP				= 2830;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_DP				= 407;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_NM				= 508;		/* Mérések IEC kezdõcíme */

/* 34-30 TMOK -----------------------------------------------------------*/
sT[0].sTI[131].nType = TYP_TMOK;

	sT[0].sMOT[131].nIEC_SP				= 2846;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_DP				= 408;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_NM				= 511;		/* Mérések IEC kezdõcíme */

/* 35-02 TMOK -----------------------------------------------------------*/
sT[0].sTI[132].nType = TYP_TMOK;

	sT[0].sMOT[132].nIEC_SP				= 2862;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[132].nIEC_DP				= 409;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[132].nIEC_NM				= 514;		/* Mérések IEC kezdõcíme */

/* 35-24 TMOK -----------------------------------------------------------*/
sT[0].sTI[133].nType = TYP_TMOK;

	sT[0].sMOT[133].nIEC_SP				= 2878;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_DP				= 410;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_NM				= 517;		/* Mérések IEC kezdõcíme */

/* 91-13 TMOK -----------------------------------------------------------*/
sT[0].sTI[134].nType = TYP_TMOK;

	sT[0].sMOT[134].nIEC_SP				= 2894;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_DP				= 411;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_NM				= 520;		/* Mérések IEC kezdõcíme */

/* 91-08 TMOK -----------------------------------------------------------*/
sT[0].sTI[135].nType = TYP_TMOK;

	sT[0].sMOT[135].nIEC_SP				= 2910;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_DP				= 412;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_NM				= 523;		/* Mérések IEC kezdõcíme */

/* 91-58 TMOK -----------------------------------------------------------*/
sT[0].sTI[136].nType = TYP_TMOK;

	sT[0].sMOT[136].nIEC_SP				= 2926;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_DP				= 413;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_NM				= 526;		/* Mérések IEC kezdõcíme */

/* 91-64 TMOK -----------------------------------------------------------*/
sT[0].sTI[137].nType = TYP_TMOK;

	sT[0].sMOT[137].nIEC_SP				= 2942;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_DP				= 414;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_NM				= 529;		/* Mérések IEC kezdõcíme */

/* 91-70 TMOK -----------------------------------------------------------*/
sT[0].sTI[138].nType = TYP_TMOK;

	sT[0].sMOT[138].nIEC_SP				= 2958;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_DP				= 415;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_NM				= 532;		/* Mérések IEC kezdõcíme */

/* 91-90 TMOK -----------------------------------------------------------*/
sT[0].sTI[139].nType = TYP_TMOK;

	sT[0].sMOT[139].nIEC_SP				= 2974;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_DP				= 416;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_NM				= 535;		/* Mérések IEC kezdõcíme */

/* 91-92 TMOK -----------------------------------------------------------*/
sT[0].sTI[140].nType = TYP_TMOK;

	sT[0].sMOT[140].nIEC_SP				= 3000;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_DP				= 417;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_NM				= 538;		/* Mérések IEC kezdõcíme */

/* 91-93 TMOK -----------------------------------------------------------*/
sT[0].sTI[141].nType = TYP_TMOK;

	sT[0].sMOT[141].nIEC_SP				= 3016;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_DP				= 418;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_NM				= 541;		/* Mérések IEC kezdõcíme */

/* 91-98 TMOK -----------------------------------------------------------*/
sT[0].sTI[142].nType = TYP_TMOK;

	sT[0].sMOT[142].nIEC_SP				= 3032;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_DP				= 419;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_NM				= 544;		/* Mérések IEC kezdõcíme */

/* 92-73 TMOK -----------------------------------------------------------*/
sT[0].sTI[143].nType = TYP_TMOK;

	sT[0].sMOT[143].nIEC_SP				= 3048;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_DP				= 420;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_NM				= 547;		/* Mérések IEC kezdõcíme */

/* 92-87 TMOK -----------------------------------------------------------*/
sT[0].sTI[144].nType = TYP_TMOK;

	sT[0].sMOT[144].nIEC_SP				= 3064;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_DP				= 421;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_NM				= 550;		/* Mérések IEC kezdõcíme */

/* Bazita átjátszó -----------------------------------------------------------*/
sT[0].sTI[145].nType = TYP_MOT;

	sT[0].sMOT[145].nIEC_SP				= 3080;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[145].nIEC_DP_NUM			= 0;
	sT[0].sMOT[145].nNMNum      			= 0;

/* Oregkovacshegy átjátszó -----------------------------------------------------------*/
sT[0].sTI[146].nType = TYP_MOT;

	sT[0].sMOT[146].nIEC_SP				= 3087;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[146].nIEC_DP_NUM			= 0;
	sT[0].sMOT[146].nNMNum      		= 0;

/* Kisber,  gazmotor  ----------------------------------------------------------------*/
sT[0].sTI[147].nType = TYP_MOT;

	/*sT[0].sMOT[147].nTableNumPar			= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[147].nIEC_SP				= 3165;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[147].nIEC_DP				= 426;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_DP_NUM			= 10;   		/* Két bites értékek száma*/
	sT[0].sMOT[147].nIEC_NM				= 565;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[147].nNMNum				= 2;		/* Analóg mérések száma*/

/* Baracska átjátszó -----------------------------------------------------------*/
sT[0].sTI[148].nType = TYP_MOT;

	sT[0].sMOT[148].nIEC_SP				= 3094;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[148].nIEC_DP_NUM			= 0;
	sT[0].sMOT[148].nNMNum      			= 0;

/* 30-43 TMOK -----------------------------------------------------------*/
sT[0].sTI[149].nType = TYP_TMOK;

	sT[0].sMOT[149].nIEC_SP				= 3101;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_DP				= 422;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_NM				= 553;		/* Mérések IEC kezdõcíme */

/* 30-67 TMOK -----------------------------------------------------------*/
sT[0].sTI[150].nType = TYP_TMOK;

	sT[0].sMOT[150].nIEC_SP				= 3117;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_DP				= 423;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_NM				= 556;		/* Mérések IEC kezdõcíme */

/* 42-16 TMOK -----------------------------------------------------------*/
sT[0].sTI[151].nType = TYP_TMOK;

	sT[0].sMOT[151].nIEC_SP				= 3133;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_DP				= 424;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_NM				= 559;		/* Mérések IEC kezdõcíme */

/* 30-61 TMOK -----------------------------------------------------------*/
sT[0].sTI[152].nType = TYP_TMOK;

	sT[0].sMOT[152].nIEC_SP				= 3149;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_DP				= 425;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_NM				= 562;		/* Mérések IEC kezdõcíme */


/* R1014, Zalaegerszeg, Flextronics B -----------------------------------------------------------*/
sT[0].sTI[153].nType = TYP_TAL;

		/*sT[0].sTAL[153].nTableNumPar			= 2;*/
		sT[0].sTAL[153].nIEC_SP       		= 3181;
		/*sT[0].sTAL[153].nIEC_ElsoZarlatCim	= 3181;*/
		sT[0].sTAL[153].nIEC_OsszevontHiba	= 3213;
		sT[0].sTAL[153].nIEC_MT_KommHiba		= 3214;
		sT[0].sTAL[153].nIEC_DP       		= 436;
		sT[0].sTAL[153].nIEC_DP_FSZ1  		= 440;
		sT[0].sTAL[153].nIEC_NM				= 567;
		sT[0].sTAL[153].nNMNum		  		= 4;
		sT[0].sTAL[153].nKommStatusNum		= 2;


/* R1015, Zalaegerszeg, Boartech -----------------------------------------------------------*/
sT[0].sTI[154].nType = TYP_TAL;

		/*sT[0].sTAL[154].nTableNumPar			= 2;*/
		sT[0].sTAL[154].nIEC_SP       		= 3250;
		/*sT[0].sTAL[154].nIEC_ElsoZarlatCim	= 3250;*/
		sT[0].sTAL[154].nIEC_OsszevontHiba	= 3282;
		sT[0].sTAL[154].nIEC_MT_KommHiba		= 3283;
		sT[0].sTAL[154].nIEC_DP       		= 444;
		sT[0].sTAL[154].nIEC_DP_FSZ1  		= 448;
		sT[0].sTAL[154].nIEC_NM				= 571;
		sT[0].sTAL[154].nNMNum		  		= 4;

		sT[0].sTAL[154].nIEC_DP_2BIT1 		= 452;
		sT[0].sTAL[154].nIEC_DP_2BIT2 		= 453;
		sT[0].sTAL[154].nIEC_DP_2BIT3 		= 0;
		sT[0].sTAL[154].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[154].nIEC_DP_2BIT_BENT1	= 913;
		sT[0].sTAL[154].nIEC_DP_2BIT_KINT2	= 920;
		sT[0].sTAL[154].nIEC_DP_2BIT_BENT2	= 925;
		sT[0].sTAL[154].nKommStatusNum		= 2;

/* R1016, Zalaegerszeg, Keytech -----------------------------------------------------------*/
sT[0].sTI[155].nType = TYP_TAL;

		/*sT[0].sTAL[155].nTableNumPar			= 2;*/
		sT[0].sTAL[155].nIEC_SP       		= 3287;
		/*sT[0].sTAL[155].nIEC_ElsoZarlatCim	= 3287;*/
		sT[0].sTAL[155].nIEC_OsszevontHiba	= 3319;
		sT[0].sTAL[155].nIEC_MT_KommHiba		= 3320;
		sT[0].sTAL[155].nIEC_DP       		= 454;
		sT[0].sTAL[155].nIEC_DP_FSZ1  		= 458;
		sT[0].sTAL[155].nIEC_NM				= 575;
		sT[0].sTAL[155].nNMNum		  		= 4;

		sT[0].sTAL[155].nIEC_DP_2BIT1 		= 462;
		sT[0].sTAL[155].nIEC_DP_2BIT2 		= 463;
		sT[0].sTAL[155].nIEC_DP_2BIT3 		= 0;
		sT[0].sTAL[155].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[155].nIEC_DP_2BIT_BENT1	= 913;
		sT[0].sTAL[155].nIEC_DP_2BIT_KINT2	= 920;
		sT[0].sTAL[155].nIEC_DP_2BIT_BENT2	= 925;
		sT[0].sTAL[155].nKommStatusNum		= 2;

/* 91-09 TMOK ----------------------------------------------------------*/
sT[0].sTI[156].nType = TYP_TMOK;

	sT[0].sMOT[156].nIEC_SP				= 3218;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_DP				= 464;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_NM				= 579;		/* Mérések IEC kezdõcíme */

/* 91-14 TMOK ----------------------------------------------------------*/
sT[0].sTI[157].nType = TYP_TMOK;

	sT[0].sMOT[157].nIEC_SP				= 3234;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_DP				= 465;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_NM				= 582;		/* Mérések IEC kezdõcíme */

/* 91-57 TMOK ----------------------------------------------------------*/
sT[0].sTI[158].nType = TYP_TMOK;

	sT[0].sMOT[158].nIEC_SP				= 3324;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_DP				= 466;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_NM				= 585;		/* Mérések IEC kezdõcíme */

/* 91-95 TMOK ----------------------------------------------------------*/
sT[0].sTI[159].nType = TYP_TMOK;

	sT[0].sMOT[159].nIEC_SP				= 3340;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_DP				= 467;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_NM				= 588;		/* Mérések IEC kezdõcíme */

/* 99-364 TMOK ----------------------------------------------------------*/
sT[0].sTI[160].nType = TYP_TMOK;

	sT[0].sMOT[160].nIEC_SP				= 3356;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_DP				= 468;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_NM				= 591;		/* Mérések IEC kezdõcíme */

/* 44-01 TMOK ----------------------------------------------------------*/
sT[0].sTI[161].nType = TYP_TMOK;

	sT[0].sMOT[161].nIEC_SP				= 3372;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_DP				= 469;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_NM				= 594;		/* Mérések IEC kezdõcíme */

/* 32-28 TMOK ----------------------------------------------------------*/
sT[0].sTI[162].nType = TYP_TMOK;

	sT[0].sMOT[162].nIEC_SP				= 3388;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_DP				= 470;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_NM				= 597;		/* Mérések IEC kezdõcíme */

/* 32-34 TMOK ----------------------------------------------------------*/
sT[0].sTI[163].nType = TYP_TMOK;

	sT[0].sMOT[163].nIEC_SP				= 3404;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_DP				= 471;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_NM				= 600;		/* Mérések IEC kezdõcíme */

/* 92-13 TMOK ----------------------------------------------------------*/
sT[0].sTI[164].nType = TYP_TMOK;

	sT[0].sMOT[164].nIEC_SP				= 3420;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_DP				= 472;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_NM				= 603;		/* Mérések IEC kezdõcíme */

/* 91-32 TMOK ----------------------------------------------------------*/
sT[0].sTI[165].nType = TYP_TMOK;

	sT[0].sMOT[165].nIEC_SP				= 3436;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_DP				= 473;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_NM				= 606;		/* Mérések IEC kezdõcíme */

/* 91-40 TMOK ----------------------------------------------------------*/
sT[0].sTI[166].nType = TYP_TMOK;

	sT[0].sMOT[166].nIEC_SP				= 3452;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_DP				= 474;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_NM				= 609;		/* Mérések IEC kezdõcíme */

/* 92-59 TMOK ----------------------------------------------------------*/
sT[0].sTI[167].nType = TYP_TMOK;

	sT[0].sMOT[167].nIEC_SP				= 3468;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_DP				= 475;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_NM				= 612;		/* Mérések IEC kezdõcíme */

/* 92-17 TMOK ----------------------------------------------------------*/
sT[0].sTI[168].nType = TYP_TMOK;

	sT[0].sMOT[168].nIEC_SP				= 3484;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_DP				= 476;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_NM				= 615;		/* Mérések IEC kezdõcíme */

/* 92-22 TMOK ----------------------------------------------------------*/
sT[0].sTI[169].nType = TYP_TMOK;

	sT[0].sMOT[169].nIEC_SP				= 3500;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[169].nIEC_DP				= 477;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[169].nIEC_NM				= 618;		/* Mérések IEC kezdõcíme */

/* 92-28 TMOK ----------------------------------------------------------*/
sT[0].sTI[170].nType = TYP_TMOK;

	sT[0].sMOT[170].nIEC_SP				= 3516;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[170].nIEC_DP				= 478;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[170].nIEC_NM				= 621;		/* Mérések IEC kezdõcíme */

/* 92-30 TMOK ----------------------------------------------------------*/
sT[0].sTI[171].nType = TYP_TMOK;

	sT[0].sMOT[171].nIEC_SP				= 3532;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[171].nIEC_DP				= 479;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[171].nIEC_NM				= 624;		/* Mérések IEC kezdõcíme */

/* 91-45 TMOK ----------------------------------------------------------*/
sT[0].sTI[172].nType = TYP_TMOK;

	sT[0].sMOT[172].nIEC_SP				= 3548;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_DP				= 480;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_NM				= 627;		/* Mérések IEC kezdõcíme */

/* 91-16 TMOK ----------------------------------------------------------*/
sT[0].sTI[173].nType = TYP_TMOK;

	sT[0].sMOT[173].nIEC_SP				= 3564;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_DP				= 481;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_NM				= 630;		/* Mérések IEC kezdõcíme */

/* 91-17 TMOK ----------------------------------------------------------*/
sT[0].sTI[174].nType = TYP_TMOK;

	sT[0].sMOT[174].nIEC_SP				= 3580;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_DP				= 482;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_NM				= 633;		/* Mérések IEC kezdõcíme */

/* 91-18 TMOK ----------------------------------------------------------*/
sT[0].sTI[175].nType = TYP_TMOK;

	sT[0].sMOT[175].nIEC_SP				= 3596;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[175].nIEC_DP				= 492;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[175].nIEC_NM				= 636;		/* Mérések IEC kezdõcíme */

/* 91-60 TMOK ----------------------------------------------------------*/
sT[0].sTI[176].nType = TYP_TMOK;

	sT[0].sMOT[176].nIEC_SP				= 3612;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_DP				= 493;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_NM				= 639;		/* Mérések IEC kezdõcíme */

/* 91-82 TMOK ----------------------------------------------------------*/
sT[0].sTI[177].nType = TYP_TMOK;

	sT[0].sMOT[177].nIEC_SP				= 3628;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_DP				= 494;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_NM				= 642;		/* Mérések IEC kezdõcíme */

/* 92-29 TMOK ----------------------------------------------------------*/
sT[0].sTI[178].nType = TYP_TMOK;

	sT[0].sMOT[178].nIEC_SP				= 3644;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_DP				= 495;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_NM				= 645;		/* Mérések IEC kezdõcíme */

/* 31-18 TMOK ----------------------------------------------------------*/
sT[0].sTI[179].nType = TYP_TMOK;

	sT[0].sMOT[179].nIEC_SP				= 1495;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_DP				= 380;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_NM				= 475;		/* Mérések IEC kezdõcíme */

/* 86-10 TMOK ----------------------------------------------------------*/
sT[0].sTI[180].nType = TYP_TMOK;

	sT[0].sMOT[180].nIEC_SP				= 3660;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_DP				= 496;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_NM				= 648;		/* Mérések IEC kezdõcíme */

/* 86-29 TMOK ----------------------------------------------------------*/
sT[0].sTI[181].nType = TYP_TMOK;

	sT[0].sMOT[181].nIEC_SP				= 3676;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_DP				= 497;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_NM				= 651;		/* Mérések IEC kezdõcíme */

/* 86-48 TMOK ----------------------------------------------------------*/
sT[0].sTI[182].nType = TYP_TMOK;

	sT[0].sMOT[182].nIEC_SP				= 3692;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_DP				= 498;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_NM				= 654;		/* Mérések IEC kezdõcíme */

/* 86-62 TMOK ----------------------------------------------------------*/
sT[0].sTI[183].nType = TYP_TMOK;

	sT[0].sMOT[183].nIEC_SP				= 3708;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[183].nIEC_DP				= 499;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[183].nIEC_NM				= 657;		/* Mérések IEC kezdõcíme */

/* 86-63 TMOK ----------------------------------------------------------*/
sT[0].sTI[184].nType = TYP_TMOK;

	sT[0].sMOT[184].nIEC_SP				= 3724;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_DP				= 500;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_NM				= 660;		/* Mérések IEC kezdõcíme */

/* 86-76 TMOK ----------------------------------------------------------*/
sT[0].sTI[185].nType = TYP_TMOK;

	sT[0].sMOT[185].nIEC_SP				= 3750;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[185].nIEC_DP				= 501;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[185].nIEC_NM				= 663;		/* Mérések IEC kezdõcíme */

/* 81-11 TMOK ----------------------------------------------------------*/
sT[0].sTI[186].nType = TYP_TMOK;

	sT[0].sMOT[186].nIEC_SP				= 3766;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_DP				= 502;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_NM				= 666;		/* Mérések IEC kezdõcíme */

/* 81-12 TMOK ----------------------------------------------------------*/
sT[0].sTI[187].nType = TYP_TMOK;

	sT[0].sMOT[187].nIEC_SP				= 3782;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_DP				= 503;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_NM				= 669;		/* Mérések IEC kezdõcíme */

/* 81-50 TMOK ----------------------------------------------------------*/
sT[0].sTI[188].nType = TYP_TMOK;

	sT[0].sMOT[188].nIEC_SP				= 3798;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[188].nIEC_DP				= 504;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[188].nIEC_NM				= 672;		/* Mérések IEC kezdõcíme */

/* 81-87 TMOK ----------------------------------------------------------*/
sT[0].sTI[189].nType = TYP_TMOK;

	sT[0].sMOT[189].nIEC_SP				= 3814;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[189].nIEC_DP				= 505;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[189].nIEC_NM				= 675;		/* Mérések IEC kezdõcíme */

/* 85-13 TMOK ----------------------------------------------------------*/
sT[0].sTI[190].nType = TYP_TMOK;

	sT[0].sMOT[190].nIEC_SP				= 3830;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_DP				= 506;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_NM				= 678;		/* Mérések IEC kezdõcíme */

/* 85-15 TMOK ----------------------------------------------------------*/
sT[0].sTI[191].nType = TYP_TMOK;

	sT[0].sMOT[191].nIEC_SP				= 3846;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_DP				= 507;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_NM				= 681;		/* Mérések IEC kezdõcíme */

/* 85-29 TMOK ----------------------------------------------------------*/
sT[0].sTI[192].nType = TYP_TMOK;

	sT[0].sMOT[192].nIEC_SP				= 3862;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_DP				= 508;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_NM				= 684;		/* Mérések IEC kezdõcíme */

/* 85-50 TMOK ----------------------------------------------------------*/
sT[0].sTI[193].nType = TYP_TMOK;

	sT[0].sMOT[193].nIEC_SP				= 3878;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_DP				= 509;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_NM				= 687;		/* Mérések IEC kezdõcíme */

/* 85-90 TMOK ----------------------------------------------------------*/
sT[0].sTI[194].nType = TYP_TMOK;

	sT[0].sMOT[194].nIEC_SP				= 3894;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_DP				= 510;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_NM				= 690;		/* Mérések IEC kezdõcíme */

/* 85-93 TMOK ----------------------------------------------------------*/
sT[0].sTI[195].nType = TYP_TMOK;

	sT[0].sMOT[195].nIEC_SP				= 3910;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_DP				= 511;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_NM				= 693;		/* Mérések IEC kezdõcíme */
	
/* 12-36 TMOK ----------------------------------------------------------*/
sT[0].sTI[196].nType = TYP_TMOK;

	sT[0].sMOT[196].nIEC_SP				= 4037;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[196].nIEC_DP				= 542;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[196].nIEC_NM				= 708;		/* Mérések IEC kezdõcíme */

/* 12-66 TMOK ----------------------------------------------------------*/
sT[0].sTI[197].nType = TYP_TMOK;

	sT[0].sMOT[197].nIEC_SP				= 4053;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[197].nIEC_DP				= 543;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[197].nIEC_NM				= 711;		/* Mérések IEC kezdõcíme */

/* 20-10 TMOK ----------------------------------------------------------*/
sT[0].sTI[198].nType = TYP_TMOK;

	sT[0].sMOT[198].nIEC_SP				= 4069;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_DP				= 544;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_NM				= 714;		/* Mérések IEC kezdõcíme */
	
/* 41-82 TMOK ----------------------------------------------------------*/
sT[0].sTI[199].nType = TYP_TMOK;

	sT[0].sMOT[199].nIEC_SP				= 4085;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_DP				= 545;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_NM				= 717;		/* Mérések IEC kezdõcíme */

/* 41-52 TMOK ----------------------------------------------------------*/
sT[0].sTI[200].nType = TYP_TMOK;

	sT[0].sMOT[200].nIEC_SP				= 4101;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_DP				= 546;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_NM				= 720;		/* Mérések IEC kezdõcíme */

/* Szombathely Sas utca, Talus----------------------------------------------*/
sT[0].sTI[201].nType = TYP_TAL;
	/*sT[0].sTAL[201].nTableNumPar		= 2;*/
	sT[0].sTAL[201].nIEC_SP       		= 4117;
	/*sT[0].sTAL[201].nIEC_ElsoZarlatCim	= 4117;*/
	sT[0].sTAL[201].nIEC_OsszevontHiba	= 4149;
	sT[0].sTAL[201].nIEC_MT_KommHiba	= 4150;
	sT[0].sTAL[201].nIEC_DP       		= 547;
	sT[0].sTAL[201].nIEC_DP_FSZ1  		= 551;
	sT[0].sTAL[201].nIEC_NM				= 723;
	sT[0].sTAL[201].nNMNum		  		= 4;
	
/* 92-32 TMOK ----------------------------------------------------------*/
sT[0].sTI[202].nType = TYP_TMOK;

	sT[0].sMOT[202].nIEC_SP				= 4154;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_DP				= 381;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_NM				= 727;		/* Mérések IEC kezdõcíme */

/* 41-59 TMOK ----------------------------------------------------------*/
sT[0].sTI[203].nType = TYP_TMOK;

	sT[0].sMOT[203].nIEC_SP				= 4170;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_DP				= 382;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_NM				= 730;		/* Mérések IEC kezdõcíme */

/* 32-82 TMOK ----------------------------------------------------------*/
sT[0].sTI[204].nType = TYP_TMOK;

	sT[0].sMOT[204].nIEC_SP				= 4186;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_DP				= 383;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_NM				= 733;		/* Mérések IEC kezdõcíme */

/* 21-57, 21-58 -----------------------------------------------------------*/

sT[0].sTI[205].nType = TYP_TMOK;

	sT[0].sMOT[205].nIEC_SP				= 4202;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[205].nIEC_DP				= 384;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[205].nIEC_NM				= 736;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[205].nNMNum				= 4;		/* Analóg mérések száma*/

/* 21-39 TMOK ----------------------------------------------------------*/
sT[0].sTI[206].nType = TYP_TMOK;

	sT[0].sMOT[206].nIEC_SP				= 2048;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_DP				= 181;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_NM				= 1004;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[206].nNMNum				= 4;		/* Analóg mérések száma*/

/* 21-88 TMOK ----------------------------------------------------------*/
sT[0].sTI[207].nType = TYP_TMOK;

	sT[0].sMOT[207].nIEC_SP				= 4236;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_DP				= 184;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_NM				= 364;		/* Mérések IEC kezdõcíme */

/* 20-07 TMOK ----------------------------------------------------------*/
sT[0].sTI[208].nType = TYP_TMOK;

	sT[0].sMOT[208].nIEC_SP				= 2594;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_DP				= 182;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_NM				= 430;		/* Mérések IEC kezdõcíme */

/* 20-31 TMOK ----------------------------------------------------------*/
sT[0].sTI[209].nType = TYP_TMOK;

	sT[0].sMOT[209].nIEC_SP				= 2610;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[209].nIEC_DP				= 183;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[209].nIEC_NM				= 433;		/* Mérések IEC kezdõcíme */

/* Tatabanya, Nivo ----------------------------------------------------------*/
sT[0].sTI[210].nType = TYP_MOT;

	/*sT[0].sMOT[210].nTableNumPar			= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[210].nIEC_SP				= 5588;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[210].nIEC_DP				= 779;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[210].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[210].nNMNum				= 0;		/* Analóg mérések száma*/

/* Movar, sportcsarnok ----------------------------------------------*/
sT[0].sTI[211].nType = TYP_TAL;
	/*sT[0].sTAL[211].nTableNumPar		= 2;*/
	sT[0].sTAL[211].nIEC_SP       		= 5604;
	/*sT[0].sTAL[211].nIEC_ElsoZarlatCim	= 5223;*/
	sT[0].sTAL[211].nIEC_OsszevontHiba	= 5636;
	sT[0].sTAL[211].nIEC_MT_KommHiba	= 5637;
	sT[0].sTAL[211].nIEC_DP       		= 783;
	sT[0].sTAL[211].nIEC_DP_FSZ1  		= 787;
	sT[0].sTAL[211].nIEC_NM				= 921;
	sT[0].sTAL[211].nNMNum		  		= 4;
	sT[0].sTAL[211].nIEC_DP_2BIT1 		= 791;
	sT[0].sTAL[211].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[211].nIEC_DP_2BIT_BENT1	= 913;
	

/* 21-81 TMOK ----------------------------------------------------------*/
sT[0].sTI[212].nType = TYP_TMOK;

	sT[0].sMOT[212].nIEC_SP				= 4284;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[212].nIEC_DP				= 346;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[212].nIEC_NM				= 147;		/* Mérések IEC kezdõcíme */

/* 91-38 TMOK ----------------------------------------------------------*/
sT[0].sTI[213].nType = TYP_TMOK;

	sT[0].sMOT[213].nIEC_SP				= 4300;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_DP				= 555;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_NM				= 740;		/* Mérések IEC kezdõcíme */

/* 91-50 TMOK ----------------------------------------------------------*/
sT[0].sTI[214].nType = TYP_TMOK;

	sT[0].sMOT[214].nIEC_SP				= 4316;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_DP				= 556;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_NM				= 743;		/* Mérések IEC kezdõcíme */

/* 92-12 TMOK ----------------------------------------------------------*/
sT[0].sTI[215].nType = TYP_TMOK;

	sT[0].sMOT[215].nIEC_SP				= 4332;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[215].nIEC_DP				= 557;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[215].nIEC_NM				= 746;		/* Mérések IEC kezdõcíme */

/* 92-53 TMOK ----------------------------------------------------------*/
sT[0].sTI[216].nType = TYP_TMOK;

	sT[0].sMOT[216].nIEC_SP				= 4348;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[216].nIEC_DP				= 558;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[216].nIEC_NM				= 749;		/* Mérések IEC kezdõcíme */

/* 92-62 TMOK ----------------------------------------------------------*/
sT[0].sTI[217].nType = TYP_TMOK;

	sT[0].sMOT[217].nIEC_SP				= 4364;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[217].nIEC_DP				= 559;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[217].nIEC_NM				= 752;		/* Mérések IEC kezdõcíme */

/* 92-34 TMOK ----------------------------------------------------------*/
sT[0].sTI[218].nType = TYP_TMOK;

	sT[0].sMOT[218].nIEC_SP				= 4380;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[218].nIEC_DP				= 560;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[218].nIEC_NM				= 755;		/* Mérések IEC kezdõcíme */

/* 92-39 TMOK ----------------------------------------------------------*/
sT[0].sTI[219].nType = TYP_TMOK;

	sT[0].sMOT[219].nIEC_SP				= 4396;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[219].nIEC_DP				= 561;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[219].nIEC_NM				= 1012;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[219].nNMNum      			= 4;		/* Mérések száma */

/* 42-76 TMOK ----------------------------------------------------------*/
sT[0].sTI[220].nType = TYP_TMOK;

	sT[0].sMOT[220].nIEC_SP				= 4412;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[220].nIEC_DP				= 562;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[220].nIEC_NM				= 761;		/* Mérések IEC kezdõcíme */

/* 42-67 TMOK ----------------------------------------------------------*/
sT[0].sTI[221].nType = TYP_TMOK;

	sT[0].sMOT[221].nIEC_SP				= 4428;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[221].nIEC_DP				= 563;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[221].nIEC_NM				= 764;		/* Mérések IEC kezdõcíme */

/* 42-69 TMOK ----------------------------------------------------------*/
sT[0].sTI[222].nType = TYP_TMOK;

	sT[0].sMOT[222].nIEC_SP				= 4444;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[222].nIEC_DP				= 564;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[222].nIEC_NM				= 767;		/* Mérések IEC kezdõcíme */

/* 42-71 TMOK ----------------------------------------------------------*/
sT[0].sTI[223].nType = TYP_TMOK;

	sT[0].sMOT[223].nIEC_SP				= 4460;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[223].nIEC_DP				= 565;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[223].nIEC_NM				= 770;		/* Mérések IEC kezdõcíme */

/* Kondorfa átjátszó -----------------------------------------------------------*/
sT[0].sTI[224].nType = TYP_TMOK;

	sT[0].sMOT[224].nIEC_SP				= 4476;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[224].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[224].nIEC_DP_NUM			= 0;
	sT[0].sMOT[224].nNMNum      		= 0;


/* 42-68 TMOK ----------------------------------------------------------*/
sT[0].sTI[225].nType = TYP_TMOK;

	sT[0].sMOT[225].nIEC_SP				= 4483;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[225].nIEC_DP				= 566;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[225].nIEC_NM				= 773;		/* Mérések IEC kezdõcíme */

/* 42-83 TMOK ----------------------------------------------------------*/
sT[0].sTI[226].nType = TYP_TMOK;

	sT[0].sMOT[226].nIEC_SP				= 4499;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[226].nIEC_DP				= 567;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[226].nIEC_NM				= 776;		/* Mérések IEC kezdõcíme */

/* 42-80 TMOK ----------------------------------------------------------*/
sT[0].sTI[227].nType = TYP_TMOK;

	sT[0].sMOT[227].nIEC_SP				= 4515;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[227].nIEC_DP				= 568;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[227].nIEC_NM				= 779;		/* Mérések IEC kezdõcíme */

/* 42-74 TMOK ----------------------------------------------------------*/
sT[0].sTI[228].nType = TYP_TMOK;

	sT[0].sMOT[228].nIEC_SP				= 4531;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[228].nIEC_DP				= 569;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[228].nIEC_NM				= 782;		/* Mérések IEC kezdõcíme */

/* KOMÁROM NOKIA ST1, TALUS -----------------------------------------------------------*/
sT[0].sTI[229].nType = TYP_TAL;

		/*sT[0].sTAL[229].nTableNumPar		= 2;*/
		sT[0].sTAL[229].nIEC_SP       		= 4563;
		/*sT[0].sTAL[229].nIEC_ElsoZarlatCim	= 4563;*/
		sT[0].sTAL[229].nIEC_OsszevontHiba	= 4595;
		sT[0].sTAL[229].nIEC_MT_KommHiba	= 4596;
		sT[0].sTAL[229].nKommStatusNum		= 2;		
		sT[0].sTAL[229].nIEC_DP       		= 571;
		sT[0].sTAL[229].nIEC_DP_FSZ1  		= 575;
		sT[0].sTAL[229].nIEC_NM				= 788;
		sT[0].sTAL[229].nNMNum		  		= 4;
		sT[0].sTAL[229].nSP_EXTRA_NUM		= 9;
		sT[0].sTAL[229].nSP_EXTRA_OFFSET	= 4599;
		sT[0].sTAL[229].nIEC_DP_2BIT1 		= 579;
		sT[0].sTAL[229].nIEC_DP_2BIT2 		= 580;
		sT[0].sTAL[229].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[229].nIEC_DP_2BIT_BENT1	= 912;
		sT[0].sTAL[229].nIEC_DP_2BIT_KINT2	= 925;
		sT[0].sTAL[229].nIEC_DP_2BIT_BENT2	= 920;
	
		
/* KOMÁROM PERLOS, TALUS -----------------------------------------------------------*/
sT[0].sTI[230].nType = TYP_TAL;

		/*sT[0].sTAL[230].nTableNumPar		= 2;*/
		sT[0].sTAL[230].nIEC_SP       		= 4610;
		/*sT[0].sTAL[230].nIEC_ElsoZarlatCim	= 4610;*/
		sT[0].sTAL[230].nIEC_OsszevontHiba	= 4642;
		sT[0].sTAL[230].nIEC_MT_KommHiba	= 4643;
		sT[0].sTAL[230].nKommStatusNum		= 2;
		sT[0].sTAL[230].nIEC_DP       		= 583;
		sT[0].sTAL[230].nIEC_DP_FSZ1  		= 587;
		sT[0].sTAL[230].nIEC_NM				= 792;
		sT[0].sTAL[230].nNMNum		  		= 4;
		sT[0].sTAL[230].nSP_EXTRA_NUM		= 9;
		sT[0].sTAL[230].nSP_EXTRA_OFFSET	= 4646;
		sT[0].sTAL[230].nIEC_DP_2BIT1 		= 591;
		sT[0].sTAL[230].nIEC_DP_2BIT2 		= 592;
		sT[0].sTAL[230].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[230].nIEC_DP_2BIT_BENT1	= 912;
		sT[0].sTAL[230].nIEC_DP_2BIT_KINT2	= 925;
		sT[0].sTAL[230].nIEC_DP_2BIT_BENT2	= 920;
	

/* KOMÁROM SUNARROW, TALUS -----------------------------------------------------------*/
sT[0].sTI[231].nType = TYP_TAL;

		/*sT[0].sTAL[231].nTableNumPar		= 2;*/
		sT[0].sTAL[231].nIEC_SP       		= 4657;
		/*sT[0].sTAL[231].nIEC_ElsoZarlatCim	= 4657;*/
		sT[0].sTAL[231].nIEC_OsszevontHiba	= 4689;
		sT[0].sTAL[231].nIEC_MT_KommHiba	= 4690;
		sT[0].sTAL[231].nKommStatusNum		= 2;
		sT[0].sTAL[231].nIEC_DP       		= 595;
		sT[0].sTAL[231].nIEC_DP_FSZ1  		= 599;
		sT[0].sTAL[231].nIEC_NM				= 796;
		sT[0].sTAL[231].nNMNum		  		= 4;
		sT[0].sTAL[231].nSP_EXTRA_NUM		= 9;
		sT[0].sTAL[231].nSP_EXTRA_OFFSET	= 4693;
		sT[0].sTAL[231].nIEC_DP_2BIT1 		= 603;
		sT[0].sTAL[231].nIEC_DP_2BIT2 		= 604;
		sT[0].sTAL[231].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[231].nIEC_DP_2BIT_BENT1	= 912;
		sT[0].sTAL[231].nIEC_DP_2BIT_KINT2	= 925;
		sT[0].sTAL[231].nIEC_DP_2BIT_BENT2	= 920;
	


/* KOMÁROM FOXCONN, TALUS -----------------------------------------------------------*/
sT[0].sTI[232].nType = TYP_TAL;
		/*sT[0].sTAL[232].nTableNumPar		= 2;*/
		sT[0].sTAL[232].nIEC_SP       		= 4704;
		/*sT[0].sTAL[232].nIEC_ElsoZarlatCim	= 4704;*/
		sT[0].sTAL[232].nIEC_OsszevontHiba	= 4736;
		sT[0].sTAL[232].nIEC_MT_KommHiba	= 4737;
		sT[0].sTAL[232].nKommStatusNum		= 2;
		sT[0].sTAL[232].nIEC_DP       		= 607;
		sT[0].sTAL[232].nIEC_DP_FSZ1  		= 611;
		sT[0].sTAL[232].nIEC_NM				= 800;
		sT[0].sTAL[232].nNMNum		  		= 4;
		sT[0].sTAL[232].nSP_EXTRA_NUM		= 9;
		sT[0].sTAL[232].nSP_EXTRA_OFFSET	= 4740;
		sT[0].sTAL[232].nIEC_DP_2BIT1 		= 615;
		sT[0].sTAL[232].nIEC_DP_2BIT2 		= 616;
		sT[0].sTAL[232].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[232].nIEC_DP_2BIT_BENT1	= 912;
		sT[0].sTAL[232].nIEC_DP_2BIT_KINT2	= 925;
		sT[0].sTAL[232].nIEC_DP_2BIT_BENT2	= 920;
	
	
/* Csörötnek, TALUS, PM810 -----------------------------------------------------------*/
sT[0].sTI[233].nType = TYP_TAL;

		/*sT[0].sTAL[233].nTableNumPar		= 2;*/
		sT[0].sTAL[233].nIEC_SP       		= 4762;
		/*sT[0].sTAL[233].nIEC_ElsoZarlatCim	= 4762;*/
		sT[0].sTAL[233].nIEC_OsszevontHiba	= 4794;
		sT[0].sTAL[233].nIEC_MT_KommHiba	= 4795;
		sT[0].sTAL[233].nIEC_DP       		= 619;
		sT[0].sTAL[233].nIEC_DP_FSZ1  		= 623;
		sT[0].sTAL[233].nIEC_NM				= 812;
		sT[0].sTAL[233].nNMNum		  		= 9;
		sT[0].sTAL[233].nIEC_DP_2BIT1 		= 627;
		sT[0].sTAL[233].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[233].nIEC_DP_2BIT_BENT1	= 913;
				
/* Bük Golf appartman, Talus----------------------------------------------*/
sT[0].sTI[234].nType = TYP_TAL;
	/*sT[0].sTAL[234].nTableNumPar		= 2;*/
	sT[0].sTAL[234].nIEC_SP       		= 4799;
	/*sT[0].sTAL[234].nIEC_ElsoZarlatCim	= 4799;*/
	sT[0].sTAL[234].nIEC_OsszevontHiba	= 4831;
	sT[0].sTAL[234].nIEC_MT_KommHiba	= 4832;
	sT[0].sTAL[234].nIEC_DP       		= 631;
	sT[0].sTAL[234].nIEC_DP_FSZ1  		= 635;
	sT[0].sTAL[234].nIEC_NM				= 808;
	sT[0].sTAL[234].nNMNum		  		= 4;

/* Mor, Talus----------------------------------------------*/
sT[0].sTI[235].nType = TYP_TAL;
	/*sT[0].sTAL[235].nTableNumPar		= 2;*/
	sT[0].sTAL[235].nIEC_SP       		= 4836;
	/*sT[0].sTAL[235].nIEC_ElsoZarlatCim	= 4836;*/
	sT[0].sTAL[235].nIEC_OsszevontHiba	= 4868;
	sT[0].sTAL[235].nIEC_MT_KommHiba	= 4869;
	sT[0].sTAL[235].nIEC_DP       		= 639;
	sT[0].sTAL[235].nIEC_DP_FSZ1  		= 643;
	sT[0].sTAL[235].nIEC_NM				= 821;
	sT[0].sTAL[235].nNMNum		  		= 9;
	
/* 21-21, 21-22 -----------------------------------------------------------*/
sT[0].sTI[236].nType = TYP_TMOK;

	sT[0].sMOT[236].nIEC_SP				= 4873;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[236].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[236].nIEC_DP				= 647;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[236].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[236].nIEC_NM				= 830;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[236].nNMNum				= 4;		/* Analóg mérések száma*/


/* Mosonmagyarovar, Duna lakopark ----------------------------------------------*/
sT[0].sTI[237].nType = TYP_TAL;
	/*sT[0].sTAL[237].nTableNumPar		= 2;*/
	sT[0].sTAL[237].nIEC_SP       		= 4907;
	/*sT[0].sTAL[237].nIEC_ElsoZarlatCim	= 4907;*/
	sT[0].sTAL[237].nIEC_OsszevontHiba	= 4939;
	sT[0].sTAL[237].nIEC_MT_KommHiba	= 4940;
	sT[0].sTAL[237].nIEC_DP       		= 386;
	sT[0].sTAL[237].nIEC_DP_FSZ1  		= 390;
	sT[0].sTAL[237].nIEC_NM				= 804;
	sT[0].sTAL[237].nNMNum		  		= 4;
	sT[0].sTAL[237].nIEC_DP_2BIT1 		= 394;
	sT[0].sTAL[237].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[237].nIEC_DP_2BIT_BENT1	= 913;

/* Mor, Lear ----------------------------------------------*/
sT[0].sTI[238].nType = TYP_TAL;
	/*sT[0].sTAL[238].nTableNumPar		= 2;*/
	sT[0].sTAL[238].nIEC_SP       		= 4944;
	/*sT[0].sTAL[238].nIEC_ElsoZarlatCim	= 4944;*/
	sT[0].sTAL[238].nIEC_OsszevontHiba	= 4976;
	sT[0].sTAL[238].nIEC_MT_KommHiba	= 4977;
	sT[0].sTAL[238].nIEC_DP       		= 649;
	sT[0].sTAL[238].nIEC_DP_FSZ1  		= 653;
	sT[0].sTAL[238].nIEC_NM				= 834;
	sT[0].sTAL[238].nNMNum		  		= 4;

/* Oroszlany, UNIP TALUS  ----------------------------------------------*/
sT[0].sTI[239].nType = TYP_TAL;
	/*sT[0].sTAL[239].nTableNumPar		= 2;*/
	sT[0].sTAL[239].nIEC_SP       		= 4981;
	/*sT[0].sTAL[239].nIEC_ElsoZarlatCim	= 4981;*/
	sT[0].sTAL[239].nIEC_OsszevontHiba	= 5013;
	sT[0].sTAL[239].nIEC_MT_KommHiba	= 5014;
	sT[0].sTAL[239].nIEC_DP       		= 657;
	sT[0].sTAL[239].nIEC_DP_FSZ1  		= 661;
	sT[0].sTAL[239].nIEC_NM				= 838;
	sT[0].sTAL[239].nNMNum		  		= 4;
	
	
/* Ujronafo, TALUS, PM810 -----------------------------------------------------------*/
sT[0].sTI[240].nType = TYP_TAL;

		/*sT[0].sTAL[240].nTableNumPar		= 2;*/
		sT[0].sTAL[240].nIEC_SP       		= 5018;
		/*sT[0].sTAL[240].nIEC_ElsoZarlatCim	= 5018;*/
		sT[0].sTAL[240].nIEC_OsszevontHiba	= 5050;
		sT[0].sTAL[240].nIEC_MT_KommHiba	= 5051;
		sT[0].sTAL[240].nIEC_DP       		= 665;
		sT[0].sTAL[240].nIEC_DP_FSZ1  		= 669;
		sT[0].sTAL[240].nIEC_NM				= 842;
		sT[0].sTAL[240].nNMNum		  		= 9;
		sT[0].sTAL[240].nSP_EXTRA_NUM		= 1;
		sT[0].sTAL[240].nSP_EXTRA_OFFSET	= 5052;
		

/* Vep, TALUS, PM810 -----------------------------------------------------------*/
sT[0].sTI[241].nType = TYP_TAL;

		/*sT[0].sTAL[241].nTableNumPar		= 2;*/
		sT[0].sTAL[241].nIEC_SP       		= 5055;
		/*sT[0].sTAL[241].nIEC_ElsoZarlatCim	= 5055;*/
		sT[0].sTAL[241].nIEC_OsszevontHiba	= 5087;
		sT[0].sTAL[241].nIEC_MT_KommHiba	= 5088;
		sT[0].sTAL[241].nIEC_DP       		= 673;
		sT[0].sTAL[241].nIEC_DP_FSZ1  		= 677;
		sT[0].sTAL[241].nIEC_NM				= 960;
		sT[0].sTAL[241].nNMNum		  		= 13;

/* Bukfurdo, OTP lakopark ----------------------------------------------*/
sT[0].sTI[242].nType = TYP_TAL;
	/*sT[0].sTAL[242].nTableNumPar		= 2;*/
	sT[0].sTAL[242].nIEC_SP       		= 5092;
	/*sT[0].sTAL[242].nIEC_ElsoZarlatCim	= 5092;*/
	sT[0].sTAL[242].nIEC_OsszevontHiba	= 5124;
	sT[0].sTAL[242].nIEC_MT_KommHiba	= 5125;
	sT[0].sTAL[242].nIEC_DP       		= 681;
	sT[0].sTAL[242].nIEC_DP_FSZ1  		= 685;
	sT[0].sTAL[242].nIEC_NM				= 860;
	sT[0].sTAL[242].nNMNum		  		= 4;
	sT[0].sTAL[242].nIEC_DP_2BIT1 		= 689;
	sT[0].sTAL[242].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[242].nIEC_DP_2BIT_BENT1	= 913;

/* Komarom, Perlos III. ----------------------------------------------*/
sT[0].sTI[243].nType = TYP_TAL;
	/*sT[0].sTAL[243].nTableNumPar		= 2;*/
	sT[0].sTAL[243].nIEC_SP       		= 5129;
	/*sT[0].sTAL[243].nIEC_ElsoZarlatCim	= 5129;*/
	sT[0].sTAL[243].nIEC_OsszevontHiba	= 5161;
	sT[0].sTAL[243].nIEC_MT_KommHiba	= 5162;
	sT[0].sTAL[243].nKommStatusNum		= 2;
	sT[0].sTAL[243].nSP_EXTRA_NUM		= 9;
	sT[0].sTAL[243].nSP_EXTRA_OFFSET	= 5165;

	sT[0].sTAL[243].nIEC_DP       		= 690;
	sT[0].sTAL[243].nIEC_DP_FSZ1  		= 694;
	sT[0].sTAL[243].nIEC_NM				= 864;
	sT[0].sTAL[243].nNMNum		  		= 4;
	sT[0].sTAL[243].nIEC_DP_2BIT1 		= 698;
	sT[0].sTAL[243].nIEC_DP_2BIT2 		= 699;
	
	sT[0].sTAL[243].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[243].nIEC_DP_2BIT_BENT1	= 912;
	sT[0].sTAL[243].nIEC_DP_2BIT_KINT2	= 925;
	sT[0].sTAL[243].nIEC_DP_2BIT_BENT2	= 920;
	
/* Komarom, SAVCOR ----------------------------------------------*/
sT[0].sTI[244].nType = TYP_TAL;
	/*sT[0].sTAL[244].nTableNumPar		= 2;*/
	sT[0].sTAL[244].nIEC_SP       		= 5176;
	/*sT[0].sTAL[244].nIEC_ElsoZarlatCim	= 5176;*/
	sT[0].sTAL[244].nIEC_OsszevontHiba	= 5208;
	sT[0].sTAL[244].nIEC_MT_KommHiba	= 5209;
	sT[0].sTAL[244].nKommStatusNum		= 2;
	sT[0].sTAL[244].nSP_EXTRA_NUM		= 9;
	sT[0].sTAL[244].nSP_EXTRA_OFFSET	= 5212;

	sT[0].sTAL[244].nIEC_DP       		= 700;
	sT[0].sTAL[244].nIEC_DP_FSZ1  		= 704;
	sT[0].sTAL[244].nIEC_NM				= 868;
	sT[0].sTAL[244].nNMNum		  		= 4;
	sT[0].sTAL[244].nIEC_DP_2BIT1 		= 708;
	sT[0].sTAL[244].nIEC_DP_2BIT2 		= 709;
	
	sT[0].sTAL[244].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[244].nIEC_DP_2BIT_BENT1	= 912;
	sT[0].sTAL[244].nIEC_DP_2BIT_KINT2	= 925;
	sT[0].sTAL[244].nIEC_DP_2BIT_BENT2	= 920;	
	
/* Kisber, USIN ----------------------------------------------*/
sT[0].sTI[245].nType = TYP_TAL;
	/*sT[0].sTAL[245].nTableNumPar		= 2;*/
	sT[0].sTAL[245].nIEC_SP       		= 5223;
	/*sT[0].sTAL[245].nIEC_ElsoZarlatCim	= 5223;*/
	sT[0].sTAL[245].nIEC_OsszevontHiba	= 5255;
	sT[0].sTAL[245].nIEC_MT_KommHiba	= 5256;
	sT[0].sTAL[245].nKommStatusNum		= 2;

	sT[0].sTAL[245].nIEC_DP       		= 710;
	sT[0].sTAL[245].nIEC_DP_FSZ1  		= 714;
	sT[0].sTAL[245].nIEC_NM				= 872;
	sT[0].sTAL[245].nNMNum		  		= 4;
	
/* 41-57 TMOK ----------------------------------------------------------*/
sT[0].sTI[246].nType = TYP_TMOK;

	sT[0].sMOT[246].nIEC_SP				= 5260;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[246].nIEC_DP				= 718;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[246].nIEC_NM				= 876;		/* Mérések IEC kezdõcíme */


/* Szekesfehervar, Szinhaz 8 csatornas !!! ----------------------------------------------*/
sT[0].sTI[247].nType = TYP_TAL;
	sT[0].sTAL[247].nIEC_SP       		= 5276;
	sT[0].sTAL[247].nIEC_OsszevontHiba	= 5340;
	sT[0].sTAL[247].nIEC_MT_KommHiba	= 5341;
	sT[0].sTAL[247].nKommStatusNum		= 1;
	sT[0].sTAL[247].nLeagNum			= 8;
	

	sT[0].sTAL[247].nIEC_DP       		= 719;
	sT[0].sTAL[247].nIEC_DP_FSZ1  		= 727;
	sT[0].sTAL[247].nIEC_NM				= 879;
	sT[0].sTAL[247].nNMNum		  		= 8;
	sT[0].sTAL[247].nIEC_DP_2BIT1 		= 735;
	sT[0].sTAL[247].nIEC_DP_2BIT2 		= 736;
	
	sT[0].sTAL[247].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[247].nIEC_DP_2BIT_BENT1	= 913;
	sT[0].sTAL[247].nIEC_DP_2BIT_KINT2	= 944;
	sT[0].sTAL[247].nIEC_DP_2BIT_BENT2	= 945;	


/* 41-87, 41-62 Dupla PM6 TMOK ----------------------------------------------------*/
sT[0].sTI[248].nType = TYP_TMOK;

	sT[0].sMOT[248].nIEC_SP				= 5345;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[248].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[248].nIEC_DP				= 737;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[248].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[248].nIEC_NM				= 887;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[248].nNMNum				= 4;		/* Analóg mérések száma*/


/* Komarom, Hansaprint ----------------------------------------------*/
sT[0].sTI[250].nType = TYP_TAL;
	/*sT[0].sTAL[250].nTableNumPar		= 2;*/
	sT[0].sTAL[250].nIEC_SP       		= 5416;
	/*sT[0].sTAL[250].nIEC_ElsoZarlatCim	= 5223;*/
	sT[0].sTAL[250].nIEC_OsszevontHiba	= 5448;
	sT[0].sTAL[250].nIEC_MT_KommHiba	= 5449;
	sT[0].sTAL[250].nIEC_DP       		= 748;
	sT[0].sTAL[250].nIEC_DP_FSZ1  		= 752;
	sT[0].sTAL[250].nIEC_NM				= 895;
	sT[0].sTAL[250].nNMNum		  		= 4;
	sT[0].sTAL[250].nIEC_DP_2BIT1 		= 756;
	sT[0].sTAL[250].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[250].nIEC_DP_2BIT_BENT1	= 912;
	
	sT[0].sTAL[250].nIEC_DP_12BIT1		= 757;
	sT[0].sTAL[250].nIEC_DP_2BIT_BK1	= 920;

/* 85-00, 85-83 NPS-RTU-NPS TMOK ----------------------------------------------------*/
sT[0].sTI[251].nType = TYP_TMOK;

	sT[0].sMOT[251].nIEC_SP				= 5453;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[251].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[251].nIEC_DP				= 758;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[251].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[251].nIEC_NM				= 899;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[251].nNMNum				= 4;		/* Analóg mérések száma*/


/* 12-14 TMOK ----------------------------------------------------------*/
sT[0].sTI[252].nType = TYP_TMOK;

	sT[0].sMOT[252].nIEC_SP				= 5487;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[252].nIEC_DP				= 760;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[252].nIEC_NM				= 992;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[252].nNMNum				= 4;		/* Analóg mérések száma*/

/* 30-23 TMOK ----------------------------------------------------------*/
sT[0].sTI[253].nType = TYP_TMOK;

	sT[0].sMOT[253].nIEC_SP				= 5503;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[253].nIEC_DP				= 761;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[253].nIEC_NM				= 906;		/* Mérések IEC kezdõcíme */

/* 11-10 TMOK ----------------------------------------------------------*/
sT[0].sTI[254].nType = TYP_TMOK;

	sT[0].sMOT[254].nIEC_SP				= 5519;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[254].nIEC_DP				= 762;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[254].nIEC_NM				= 909;		/* Mérések IEC kezdõcíme */


/* Komarom, Hansaprint ----------------------------------------------*/
sT[0].sTI[255].nType = TYP_TAL;
	sT[0].sTAL[255].nIEC_SP       		= 5745;
	sT[0].sTAL[255].nIEC_OsszevontHiba	= 5777;
	sT[0].sTAL[255].nIEC_MT_KommHiba	= 5778;
	sT[0].sTAL[255].nIEC_DP       		= 815;
	sT[0].sTAL[255].nIEC_DP_FSZ1  		= 819;
	sT[0].sTAL[255].nIEC_NM				= 950;
	sT[0].sTAL[255].nNMNum		  		= 4;
	sT[0].sTAL[255].nIEC_DP_2BIT1 		= 823;
	sT[0].sTAL[255].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[255].nIEC_DP_2BIT_BENT1	= 913;
	
/* Tata, Meszes ----------------------------------------------------------*/
sT[0].sTI[256].nType = TYP_MOT;

	/*sT[0].sMOT[256].nTableNumPar			= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[256].nIEC_SP				= 5782;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[256].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[256].nIEC_DP				= 824;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[256].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[256].nIEC_NM				= 954;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[256].nNMNum				= 4;		/* Analóg mérések száma*/
	
/* Székesfehérvár, Pláza ----------------------------------------------------------*/
sT[0].sTI[257].nType = TYP_MOT;

	/*sT[0].sMOT[257].nTableNumPar			= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[257].nIEC_SP				= 5798;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[257].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[257].nIEC_DP				= 832;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[257].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[257].nIEC_NM				= 973;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[257].nNMNum				= 4;		/* Analóg mérések száma*/
/* Székesfehérvár, Deák F. U. ----------------------------------------------------------*/
sT[0].sTI[258].nType = TYP_MOT;

	/*sT[0].sMOT[258].nTableNumPar			= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[258].nIEC_SP				= 5814;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[258].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[258].nIEC_DP				= 840;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[258].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[258].nIEC_NM				= 977;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[258].nNMNum				= 4;		/* Analóg mérések száma*/
/* Székesfehérvár, TESCO ----------------------------------------------------------*/
sT[0].sTI[259].nType = TYP_MOT;

	/*sT[0].sMOT[259].nTableNumPar			= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[259].nIEC_SP				= 5830;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[259].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[259].nIEC_DP				= 848;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[259].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[259].nIEC_NM				= 981;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[259].nNMNum				= 4;		/* Analóg mérések száma*/
/* Székesfehérvár, Dunainjection ----------------------------------------------------------*/
sT[0].sTI[260].nType = TYP_MOT;

	/*sT[0].sMOT[260].nTableNumPar			= 2;	 Egesz paraméterek tábla sorszáma */
	sT[0].sMOT[260].nIEC_SP				= 5848;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[260].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[260].nIEC_DP				= 856;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[260].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[260].nIEC_NM				= 985;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[260].nNMNum				= 4;		/* Analóg mérések száma*/

/* 43-03 TMOK ----------------------------------------------------------*/
sT[0].sTI[261].nType = TYP_TMOK;

	sT[0].sMOT[261].nIEC_SP				= 5864;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[261].nIEC_DP				= 864;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[261].nIEC_NM				= 989;		/* Mérések IEC kezdõcíme */
	
/* 70-45 TMOK ----------------------------------------------------------*/
sT[0].sTI[262].nType = TYP_TMOK;

	sT[0].sMOT[262].nIEC_SP				= 5880;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[262].nIEC_DP				= 865;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[262].nIEC_NM				= 925;		/* Mérések IEC kezdõcíme */

} /* end fnSetDataPar()*/

