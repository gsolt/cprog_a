/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1		2007.01.31.	Gergely Zsolt		31-18 utvonal modositas			*
* V2.1.1	2007.04.10.	Gergely Zsolt		Kisber, USIN utvonal modositas: 5/1->5/7			*
* V2.1.2	2007.04.27.	Gergely Zsolt		Tatabanya utvonal modositas: 3/1->3/7			*
* V2.1.3	2007.05.22.	Gergely Zsolt		Tatabanya, NIVO utvonal modositas: 5/3->3/7			*
* V2.1.4	2007.05.29.	Gergely Zsolt		32-34 utvonal modositas: 1/3->1/8			*
* V2.1.5	2007.07.14.	Matus Zsolt			91-64 utvonal modositas: 2/6->2/7			*
* V2.1.6	2009.11.20.	Gergely Zsolt		Székesfehérvár, 4 db kábelköri			*
* V2.1.7	2010.04.13.	Gergely Zsolt		TMOK 70-45			*
* V2.1.8	2010.05.05.	Gergely Zsolt		21-39	5/3 -> 5/8			*
* V2.1.9	2012.01.27.	Gergely Zsolt		42-80	2/1 -> 2/5			*
* V2.1.9	2012.06.20.	Gergely Zsolt		85-13	5/4 -> 5/1			*
* V2.1.10	2012.12.07.	Gergely Zsolt		34-30	1/9 -> 1/6			*
* V2.1.11	2013.04.09.	Gergely Zsolt		Mórhõ	1/1 -> 1/2			*
* V2.1.12	2013.05.29.	Gergely Zsolt		34-30	1/6 -> 1/9			*
* V2.1.13	2013.10.17.	Gergely Zsolt		42-67	2/7 -> 8/2			*
* V2.1.14	2013.11.25.	Gergely Zsolt		Komárom, Frigyes 			*
* V2.1.15	2014.01.29.	Gergely Zsolt		Baracska 1/3 -> LINE2			*
* V2.1.16	2014.08.21.	Gergely Zsolt		31-02, 31-18, 32-82, 35-17 -> 1/8			*
* V2.1.17	2014.09.24.	Gergely Zsolt		Ikervár -> LINE2			*
* V2.1.18	2014.09.29.	Gergely Zsolt		Zalaegerszeg -> LINE2			*
* V2.1.19	2014.10.01.	Gergely Zsolt		Szombathely -> LINE2			*
* V2.1.20	2014.10.06.	Gergely Zsolt		Oroszlány -> LINE2			*
* V2.1.21	2014.10.30.	Gergely Zsolt		Tata -> LINE2			*
* V2.1.22	2014.11.14.	Gergely Zsolt		Kisigmánd -> LINE2			*
* V2.1.23	2014.11.14.	Gergely Zsolt		42-60 , Csörötnek -> 8/1  		*
* V2.1.24	2015.07.21.	Gergely Zsolt		30-61 1/1 -> 9/4  		*
* V2.1.22	2015.10.22.	Gergely Zsolt		Szhely -> LINE2			*
* V2.1.22	2015.11.11.	Gergely Zsolt		MÓVÁR -> LINE2			*



****************************************************************************
* NAME           :  PARS_A.c                                                 *
* DESCRIPTION    :                                         *
* PROCESS        :  
* [C] Copyright Zsolt Gergely,  2003.  All Rights Reserved                 *
*                                                                            *
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/


extern void fnSCTblIndx(int nIECOffset, int *nSCTblIndx, int *nOffset, short **p_col_SCAct);

/**********************************************/
/* Globals                                     */
/**********************************************/
/*extern STATION_DESC_MOT		sMOT[];
extern STATION_DESC_TALUS	sTAL[];
extern STATION_TYPE_INDEX 	sTI[];*/

/*extern COM_PAR				sCP;*/
/*extern STATION_COMM_DATA	sCD[];*/
/*extern RTU_RAD				sRAD;*/
/*extern RTU_RAD_NEW			ST[0].sRAD_K1[0];
extern RTU_RAD_NEW			ST[0].sRAD_K2[0];
extern RTU_RAD_NEW			ST[0].sRAD_K3[0];*/

/*extern RTU_LIN				ST[0].sLIN[0];*/
/*extern unsigned short		nNumOfSites;*/
/*extern unsigned short		ST[0].nSiteList[];
extern unsigned short		ST[0].nLinkList[];*/
/*extern unsigned char		byComStat[];
extern int					nTotalRTU;*/
extern void setdat2(unsigned char *input);


CB_TABLE_INFO   table_ParStat;
short          *p_col_ParStat;

/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setd2"   , setdat2},  	
   {0      , 0 }
};
*/
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
/* Statikus site tabla feltoltes												*/
/****************************************************************************/
void setdat2(unsigned char *input)
{
unsigned short	nSiteId[100];
unsigned char	cLinkId[100];
unsigned char	message[500];
int				nI;

unsigned short	nSiteIdCheck[100];




	
	

	TOTAL_PAR			*ST;
	
	ST = (TOTAL_PAR *)input;
	
	/* Statisztikak */				
	if (MOSCAD_get_table_info (4,&table_ParStat)!=0 )
   		{
        MOSCAD_sprintf(message,"No valid information in table: %d",4);
        MOSCAD_error(message );
        return;
   		}
	p_col_ParStat = (short *)(table_ParStat.ColDataPtr[0]);				
	


/*nNumOfSites=250;*/
ST[0].nSiteList[0]		=13; 	ST[0].nLinkList[0]		=RSLINK3;		/*RTUALL*/
ST[0].nSiteList[1]		=2; 	ST[0].nLinkList[1]		=LINE2; 		/*Székesfehérvár RTU, 			SZVAR*/
ST[0].nSiteList[2]		=1; 	ST[0].nLinkList[2]		=RADIO9_4; 		/*Mór RTU, RADIO1_2				SZVAR*/
ST[0].nSiteList[3]		=4; 	ST[0].nLinkList[3]		=RADIO2_6; 		/*Zalaegerszeg - TESCO, 		ZALA*/
ST[0].nSiteList[4]		=5; 	ST[0].nLinkList[4]		=LINE2; 		/*Zalaegerszeg - ÜIK*/
ST[0].nSiteList[5]		=307; 	ST[0].nLinkList[5]		=RADIO2_7; 		/*Zalaegerszeg - GE gazmotor	ZALA*/
ST[0].nSiteList[6]		=6; 	ST[0].nLinkList[6]		=RADIO9_1; 		/*Szvár-AUCHAN, RADIO1_1 		SZVAR*/
ST[0].nSiteList[7]		=7; 	ST[0].nLinkList[7]		=RADIO3_6; 		/*Oroszlány - ZENON, RADIO3_6	ORNY*/
ST[0].nSiteList[8]		=8; 	ST[0].nLinkList[8]		=LINE2; 		/*Oroszlány átjátszó*/
ST[0].nSiteList[9]		=9; 	ST[0].nLinkList[9]		=RADIO4_1; 		/*Sárvár - Rábahö, RADIO4_1		IK*/
ST[0].nSiteList[10]		=10; 	ST[0].nLinkList[10]		=LINE2; 		/*Ikervár átjátszó*/
ST[0].nSiteList[11]		=11; 	ST[0].nLinkList[11]		=RADIO4_2; 		/*Celld-Prometheus, RADIO4_1	IK*/
ST[0].nSiteList[12]		=12; 	ST[0].nLinkList[12]		=RADIO5_1; 		/*Komárom RTU, 					IG*/
ST[0].nSiteList[13]		=14; 	ST[0].nLinkList[13]		=LINE2; 		/*Igmánd átjátszó*/
ST[0].nSiteList[14]		=15; 	ST[0].nLinkList[14]		=LINE2; 		/*Szombathely átjátszó*/
ST[0].nSiteList[15]		=16; 	ST[0].nLinkList[15]		=RADIO6_6; 		/*Szombathely-Sághi út, 		SZOM*/
ST[0].nSiteList[16]		=17; 	ST[0].nLinkList[16]		=RADIO6_1; 		/*Szombathely-MESZÖV, RADIO6_1	SZOM*/
ST[0].nSiteList[17]		=18; 	ST[0].nLinkList[17]		=RADIO4_1; 		/*Sárvár-Kórház 20 kV-os tok, 	IK*/
ST[0].nSiteList[18]		=19; 	ST[0].nLinkList[18]		=RADIO4_1; 		/*Sárvár-Szatmár 2. Tr., 		IK*/
ST[0].nSiteList[19]		=20; 	ST[0].nLinkList[19]		=RADIO4_1; 		/*Sárvár-Vadkert 20 kV-os tok, 	IK*/
ST[0].nSiteList[20]		=21; 	ST[0].nLinkList[20]		=RADIO4_1; 		/*Sárvár-Fürdö tr., 			IK */
ST[0].nSiteList[21]		=22; 	ST[0].nLinkList[21]		=RADIO2_6; 		/*Zalaegerszeg - Praktiker, 	ZALA*/
ST[0].nSiteList[22]		=23; 	ST[0].nLinkList[22]		=RADIO6_2; 		/*Bükfürdö - Golf, RADIO6_2		SZOM*/
ST[0].nSiteList[23]		=24; 	ST[0].nLinkList[23]		=LINE2; 		/*Mosonmagyaróvár átjátszó*/
ST[0].nSiteList[24]		=25; 	ST[0].nLinkList[24]		=RADIO7_1; 		/*Mosonszolnok, RADIO7_1		MOS*/
ST[0].nSiteList[25]		=26; 	ST[0].nLinkList[25]		=RADIO9_4; 		/*Mór ESMAR, 					SZVAR*/
ST[0].nSiteList[26]		=27; 	ST[0].nLinkList[26]		=RADIO9_4; 		/*Mór Benteller, 				SZVAR*/
ST[0].nSiteList[27]		=306; 	ST[0].nLinkList[27]		=RADIO6_6;		/*Szombathely, Jabil			SZOM*/
ST[0].nSiteList[28]		=300; 	ST[0].nLinkList[28]		=RADIO5_5;		/*Komarom, Itsia				IG*/
ST[0].nSiteList[29]		=30; 	ST[0].nLinkList[29]		=RADIO3_7; 		/*Tatabánya-Szent Borbála Kórház,ORNY*/
ST[0].nSiteList[30]		=310; 	ST[0].nLinkList[30]		=RADIO2_7;		/*Vasvar, Regioho				ZALA*/
ST[0].nSiteList[31]		=312; 	ST[0].nLinkList[31]		=RADIO5_2;		/*81-61 NPS						IG*/
ST[0].nSiteList[32]		=311; 	ST[0].nLinkList[32]		=RADIO4_1;		/*Sárvár kórház gázmotor		IK*/
ST[0].nSiteList[33]		=34; 	ST[0].nLinkList[33]		=RADIO7_1; 		/*Mosonmagyaróvár szélerömüvek, MOS*/
ST[0].nSiteList[34]		=35; 	ST[0].nLinkList[34]		=RADIO7_1; 		/*Mosonmagyaróvár TESCO, 		MOS*/
ST[0].nSiteList[36]		=37; 	ST[0].nLinkList[36]		=RADIO6_6; 		/*Szombathely-Babits u., 		SZOM*/
ST[0].nSiteList[37]		=38; 	ST[0].nLinkList[37]		=RADIO6_1; 		/*Szombathely-Pozsonyi u., 		SZOM*/
ST[0].nSiteList[38]		=39; 	ST[0].nLinkList[38]		=RADIO6_1; 		/*Szombathely-Szabadka u., 		SZOM*/
ST[0].nSiteList[39]		=40; 	ST[0].nLinkList[39]		=RADIO5_5; 		/*Komárom-NOKIA, 				IG*/
ST[0].nSiteList[40]		=65; 	ST[0].nLinkList[40]		=RADIO6_2; 		/*45-01,		 				SZOM*/
ST[0].nSiteList[41]		=51; 	ST[0].nLinkList[41]		=RADIO6_1; 		/*40-01,			 			SZOM*/
ST[0].nSiteList[42]		=55; 	ST[0].nLinkList[42]		=RADIO6_6; 		/*40-04,			 			SZOM*/
ST[0].nSiteList[43]		=54; 	ST[0].nLinkList[43]		=RADIO6_6; 		/*40-93,			 			SZOM*/
ST[0].nSiteList[44]		=53; 	ST[0].nLinkList[44]		=RADIO6_1; 		/*40-80, 						SZOM*/
ST[0].nSiteList[45]		=50; 	ST[0].nLinkList[45]		=RADIO6_1; 		/*40-37,			 			SZOM*/
ST[0].nSiteList[46]		=49; 	ST[0].nLinkList[46]		=RADIO7_1; 		/*12-54,		 				MOS*/
ST[0].nSiteList[47]		=313; 	ST[0].nLinkList[47]		=RADIO6_1; 		/*Koszeg, gazmotor				SZOM*/
ST[0].nSiteList[48]		=43; 	ST[0].nLinkList[48]		=RADIO7_1; 		/*12-89, gyártelep, 			MOS*/
ST[0].nSiteList[49]		=3067; 	ST[0].nLinkList[49]		=RADIO2_4; 		/*42-44, 						ZALA*/
ST[0].nSiteList[50]		=47; 	ST[0].nLinkList[50]		=RADIO7_1; 		/*15-03, Dunakiliti, 			MOS*/
ST[0].nSiteList[51]		=52; 	ST[0].nLinkList[51]		=RADIO6_6; 		/*41-50, Herény, 				SZOM*/
ST[0].nSiteList[52]		=46; 	ST[0].nLinkList[52]		=RADIO7_1; 		/*12-05,	 					MOS*/
ST[0].nSiteList[53]		=44; 	ST[0].nLinkList[53]		=RADIO7_1; 		/*18-949, Arak, 				MOS*/
ST[0].nSiteList[54]		=48; 	ST[0].nLinkList[54]		=RADIO7_1; 		/*15-02, Dunakiliti, 			MOS*/
ST[0].nSiteList[55]		=73; 	ST[0].nLinkList[55]		=RADIO7_1; 		/*15-15, Dunakiliti, 			MOS*/
ST[0].nSiteList[56]		=1000; 	ST[0].nLinkList[56]		=RADIO6_2; 		/*41-87, TMOK, 					SZOM*/
ST[0].nSiteList[57]		=1001; 	ST[0].nLinkList[57]		=RADIO6_2; 		/*41-63, TMOK, 					SZOM*/
ST[0].nSiteList[58]		=74; 	ST[0].nLinkList[58]		=RADIO7_1; 		/*15-00,	 					MOS*/
ST[0].nSiteList[59]		=76; 	ST[0].nLinkList[59]		=RADIO7_1; 		/*15-06, Püski, 				MOS*/
ST[0].nSiteList[60]		=75; 	ST[0].nLinkList[60]		=RADIO7_1; 		/*14-02, Mosonszolnok, 			MOS*/
ST[0].nSiteList[61]		=77; 	ST[0].nLinkList[61]		=RADIO7_1; 		/*14-05, Mosonszolnok ÁG, 		MOS*/
ST[0].nSiteList[62]		=86; 	ST[0].nLinkList[62]		=RADIO7_1; 		/*12-33,	 					MOS*/
ST[0].nSiteList[63]		=85; 	ST[0].nLinkList[63]		=RADIO7_1; 		/*12-34,	 					MOS*/
ST[0].nSiteList[64]		=1002; 	ST[0].nLinkList[64]		=LINE2; 		/*Tata, rádiós ismétlö, 		IG*/
ST[0].nSiteList[65]		=1003; 	ST[0].nLinkList[65]		=RADIO5_2; 		/*Tata, Biocalor, 				IG*/
ST[0].nSiteList[66]		=87; 	ST[0].nLinkList[66]		=RADIO7_1; 		/*12-51, Mosonmagyaróvár, 		MOS*/
ST[0].nSiteList[67]		=88; 	ST[0].nLinkList[67]		=RADIO7_1; 		/*14-44,	 					MOS*/
ST[0].nSiteList[68]		=3045; 	ST[0].nLinkList[68]		=RADIO4_4; 		/*64-26, Cellhö, 				IK*/
ST[0].nSiteList[69]		=36; 	ST[0].nLinkList[69]		=RADIO6_1; 		/*Bükfürdö Radison Hotel 1. rész, 	SZOM*/
ST[0].nSiteList[70]		=36; 	ST[0].nLinkList[70]		=RADIO6_1; 		/*Bükfürdö Radison Hotel 2. rész, 	SZOM*/
ST[0].nSiteList[71]		=3055; 	ST[0].nLinkList[71]		=RADIO6_1; 		/*41-78, Köszeg nyugat 1, 			SZOM*/
ST[0].nSiteList[72]		=3057; 	ST[0].nLinkList[72]		=RADIO6_6; 		/*41-80, Köszeg nyugat 2, 			SZOM*/
ST[0].nSiteList[73]		=3056; 	ST[0].nLinkList[73]		=RADIO6_1; 		/*41-66, Köszegfalva-Lukácsháza,	SZOM*/
ST[0].nSiteList[74]		=89; 	ST[0].nLinkList[74]		=RADIO6_6; 		/*41-54, Lukácsháza-Köszegdoroszló,	SZOM*/
ST[0].nSiteList[75]		=100; 	ST[0].nLinkList[75]		=RADIO6_2; 		/*41-60, Szakony 1,				SZOM*/
ST[0].nSiteList[76]		=101; 	ST[0].nLinkList[76]		=RADIO6_2; 		/*41-61, Szakony 2, 			SZOM*/
ST[0].nSiteList[77]		=102; 	ST[0].nLinkList[77]		=RADIO6_6; 		/*40-88, Szombathely,			SZOM*/
ST[0].nSiteList[78]		=103; 	ST[0].nLinkList[78]		=RADIO6_6; 		/*40-13  (regi 40-84), Szombathely-Ólad,		SZOM*/
ST[0].nSiteList[79]		=104; 	ST[0].nLinkList[79]		=RADIO4_1; 		/*41-24, Balozsameggyes,		IK*/
ST[0].nSiteList[80]		=105; 	ST[0].nLinkList[80]		=RADIO4_1; 		/*41-27, Bejcgyertyános,		IK*/
ST[0].nSiteList[81]		=108; 	ST[0].nLinkList[81]		=RADIO6_1; 		/*40-58, Perint,				SZOM*/
ST[0].nSiteList[82]		=277; 	ST[0].nLinkList[82]		=RADIO8_1; 		/*42-60  						SZVAR*/
ST[0].nSiteList[83]		=112; 	ST[0].nLinkList[83]		=RADIO4_1; 		/*41-20, Megyehíd,				IK*/
ST[0].nSiteList[84]		=113; 	ST[0].nLinkList[84]		=RADIO4_1; 		/*44-09, Péterfapuszta			IK*/
ST[0].nSiteList[85]		=116; 	ST[0].nLinkList[85]		=RADIO6_1; 		/*41-19, Kenéz					SZOM*/
ST[0].nSiteList[86]		=117; 	ST[0].nLinkList[86]		=RADIO6_1; 		/*41-92, Salköveskút			SZOM*/
ST[0].nSiteList[87]		=120; 	ST[0].nLinkList[87]		=RADIO4_1; 		/*41-26, Zsennye,				IK*/
ST[0].nSiteList[88]		=121; 	ST[0].nLinkList[88]		=RADIO4_1; 		/*41-34, Sárvár,				IK*/
ST[0].nSiteList[89]		=124; 	ST[0].nLinkList[89]		=RADIO6_6; 		/*40-40, Gyöngyöshermán,		SZOM*/
ST[0].nSiteList[90]		=125; 	ST[0].nLinkList[90]		=RADIO6_6; 		/*40-79, Táplánszentkereszt,	SZOM*/
ST[0].nSiteList[91]		=3046; 	ST[0].nLinkList[91]		=RADIO4_1; 		/*60-50, Pósfa,					IK*/
ST[0].nSiteList[92]		=140; 	ST[0].nLinkList[92]		=RADIO4_1; 		/*41-41, Ikervár,				IK*/
ST[0].nSiteList[93]		=132; 	ST[0].nLinkList[93]		=RADIO6_1; 		/*40-73, Szombathely,			SZOM*/
ST[0].nSiteList[94]		=133; 	ST[0].nLinkList[94]		=RADIO6_6; 		/*41-48, Szombathely,				IK*/
ST[0].nSiteList[95]		=128; 	ST[0].nLinkList[95]		=RADIO4_1; 		/*48-411, Ikervár,				IK*/
ST[0].nSiteList[96]		=129; 	ST[0].nLinkList[96]		=RADIO4_1; 		/*48-642, Ikervár,				IK*/
ST[0].nSiteList[97]		=141; 	ST[0].nLinkList[97]		=RADIO4_4; 		/*41-36, Pósfa,					IK*/
ST[0].nSiteList[98]		=137; 	ST[0].nLinkList[98]		=RADIO4_1; 		/*41-04, Ikervár,				IK*/
ST[0].nSiteList[99]		=144; 	ST[0].nLinkList[99]		=RADIO4_1; 		/*44-04, Ikervár,				IK*/
ST[0].nSiteList[100]		=145; 	ST[0].nLinkList[100]		=RADIO4_1; 		/*41-35, Pósfa,					IK*/
ST[0].nSiteList[101]		=148; 	ST[0].nLinkList[101]		=RADIO6_2; 		/*41-95, Ikervár,				IK*/
ST[0].nSiteList[102]		=149; 	ST[0].nLinkList[102]		=RADIO4_3; 		/*41-33, Ikervár,				IK*/
ST[0].nSiteList[103]		=155; 	ST[0].nLinkList[103]		=RADIO4_2; 		/*43-07, Ikervár,				IK*/
ST[0].nSiteList[104]		=156; 	ST[0].nLinkList[104]		=RADIO4_2; 		/*44-03, Ikervár,				IK*/
ST[0].nSiteList[105]		=1004; 	ST[0].nLinkList[105]		=RADIO1_1; 		/*Szvár-Szent György Kórház		SZVAR*/
ST[0].nSiteList[106]		=1005; 	ST[0].nLinkList[106]		=RADIO6_6; 		/*Szhely, Mikes úti gázmotor	SZOM*/
ST[0].nSiteList[107]		=1006; 	ST[0].nLinkList[107]		=RADIO3_6; 		/*Oroszlány, VGV,				ORNY*/
ST[0].nSiteList[108]		=1007; 	ST[0].nLinkList[108]		=RADIO5_2; 		/*Almásfüzitö, Timföldgyár		IG*/
ST[0].nSiteList[109]		=250; 	ST[0].nLinkList[109]		=RADIO6_2; 		/*Bukfurdo Gold Hotel 			SZOM*/
ST[0].nSiteList[110]		=249; 	ST[0].nLinkList[110]		=RADIO6_2; 		/*Bukfurdo Hedvig Hotel 		SZOM*/
ST[0].nSiteList[111]		=251; 	ST[0].nLinkList[111]		=RADIO6_2; 		/*Bukfurdo Répce Hotel 			SZOM*/
ST[0].nSiteList[112]		=1011; 	ST[0].nLinkList[112]		=RADIO6_6; 		/*Szombathely, Derkovits u.		SZOM*/
ST[0].nSiteList[113]		=167; 	ST[0].nLinkList[113]		=RADIO6_2; 		/*41-93, Horvátzsidány			SZOM*/
ST[0].nSiteList[114]		=240; 	ST[0].nLinkList[114]		=RADIO6_6; 		/*41-51, Köszeg					SZOM*/
ST[0].nSiteList[115]		=164; 	ST[0].nLinkList[115]		=RADIO6_2; 		/*41-64							SZOM*/
ST[0].nSiteList[116]		=168; 	ST[0].nLinkList[116]		=RADIO7_1; 		/*12-30							MOS*/
ST[0].nSiteList[117]		=169; 	ST[0].nLinkList[117]		=RADIO6_6; 		/*41-65							SZOM*/
ST[0].nSiteList[118]		=170; 	ST[0].nLinkList[118]		=RADIO7_1; 		/*12-25, Hegyeshalom			MOS*/
ST[0].nSiteList[119]		=163; 	ST[0].nLinkList[119]		=RADIO5_1; 		/*85-01, Komárom				IG*/
ST[0].nSiteList[120]		=171; 	ST[0].nLinkList[120]		=RADIO5_1; 		/*86-01, Komárom				IG*/
ST[0].nSiteList[121]		=172; 	ST[0].nLinkList[121]		=RADIO7_1; 		/*12-68							MOS*/
ST[0].nSiteList[122]		=1012; 	ST[0].nLinkList[122]		=RADIO6_6; 		/*Szhely, Markusowsky kórház	SZOM*/
ST[0].nSiteList[123]		=173; 	ST[0].nLinkList[123]		=RADIO1_8; 		/*31-02, Székesfehérvár			SZVAR*/
ST[0].nSiteList[124]		=174; 	ST[0].nLinkList[124]		=RADIO1_1; 		/*31-07, Székesfehérvár			SZVAR*/ 
ST[0].nSiteList[125]		=175; 	ST[0].nLinkList[125]		=RADIO1_1; 		/*31-34, Székesfehérvár			SZVAR*/
ST[0].nSiteList[126]		=176; 	ST[0].nLinkList[126]		=RADIO1_8; 		/*35-17, Székesfehérvár			SZVAR*/
ST[0].nSiteList[127]		=177; 	ST[0].nLinkList[127]		=RADIO1_1; 		/*32-75, Székesfehérvár			SZVAR*/
ST[0].nSiteList[128]		=178; 	ST[0].nLinkList[128]		=RADIO9_4; 		/* 34-09, Morhö					SZVAR*/ 
ST[0].nSiteList[129]		=179; 	ST[0].nLinkList[129]		=RADIO9_4; 		/* 34-16, Morhö					SZVAR*/
ST[0].nSiteList[130]		=180; 	ST[0].nLinkList[130]		=RADIO9_6; 		/* 34-29, 34-18					SZVAR*/
ST[0].nSiteList[131]		=181; 	ST[0].nLinkList[131]		=RADIO9_7; 		/* 34-30, Morhö					SZVAR*/
ST[0].nSiteList[132]		=182; 	ST[0].nLinkList[132]		=RADIO9_1; 		/*35-02, Székesfehérvár			SZVAR*/
ST[0].nSiteList[133]		=183; 	ST[0].nLinkList[133]		=RADIO1_1; 		/*35-24, Székesfehérvár			SZVAR*/
ST[0].nSiteList[134]		=184; 	ST[0].nLinkList[134]		=RADIO2_6; 		/*91-13, Zalaegerszeg			ZALA*/
ST[0].nSiteList[135]		=185; 	ST[0].nLinkList[135]		=RADIO2_7; 		/*91-08, Zalaegerszeg			ZALA*/
ST[0].nSiteList[136]		=186; 	ST[0].nLinkList[136]		=RADIO2_7; 		/*91-58, Zalaegerszeg			ZALA*/
ST[0].nSiteList[137]		=187; 	ST[0].nLinkList[137]		=RADIO2_7; 		/*91-64, Zalaegerszeg			ZALA*/
ST[0].nSiteList[138]		=188; 	ST[0].nLinkList[138]		=RADIO2_6; 		/*91-70, Zalaegerszeg			ZALA*/
ST[0].nSiteList[139]		=189; 	ST[0].nLinkList[139]		=RADIO2_6; 		/*91-90, Zalaegerszeg			ZALA*/
ST[0].nSiteList[140]		=190; 	ST[0].nLinkList[140]		=RADIO2_6; 		/*91-92, Zalaegerszeg			ZALA*/
ST[0].nSiteList[141]		=191; 	ST[0].nLinkList[141]		=RADIO2_6; 		/*91-93, Zalaegerszeg			ZALA*/
ST[0].nSiteList[142]		=192; 	ST[0].nLinkList[142]		=RADIO2_6; 		/*91-98, Zalaegerszeg			ZALA*/
ST[0].nSiteList[143]		=193; 	ST[0].nLinkList[143]		=RADIO2_6; 		/*92-73, Zalaegerszeg			ZALA*/
ST[0].nSiteList[144]		=194; 	ST[0].nLinkList[144]		=RADIO2_6; 		/*92-87, Zalaegerszeg			ZALA*/
ST[0].nSiteList[145]		=198; 	ST[0].nLinkList[145]		=RADIO2_6; 		/*Bazita átjátszó				ZALA*/
ST[0].nSiteList[146]		=213; 	ST[0].nLinkList[146]		=RADIO5_1; 		/*Öregkovácshegy átjátszó		IG*/
ST[0].nSiteList[147]		=1013; 	ST[0].nLinkList[147]		=RADIO5_1; 		/*Kisbér, gázmotor				IG*/
ST[0].nSiteList[148]		=245; 	ST[0].nLinkList[148]		=LINE2; 		/*Baracska átjátszó				SZVAR*/
ST[0].nSiteList[149]		=195; 	ST[0].nLinkList[149]		=RADIO9_1; 		/*30-43, Székesfehérvár			SZVAR*/
ST[0].nSiteList[150]		=197; 	ST[0].nLinkList[150]		=RADIO9_1; 		/*30-67, Székesfehérvár			SZVAR*/
ST[0].nSiteList[151]		=223; 	ST[0].nLinkList[151]		=RADIO2_6; 		/*42-16, 						ZALA*/
ST[0].nSiteList[152]		=196; 	ST[0].nLinkList[152]		=RADIO9_4; 		/*30-61, Székesfehérvár			SZVAR*/
ST[0].nSiteList[153]		=1014; 	ST[0].nLinkList[153]		=RADIO2_6; 		/*R1014, Zalaeg, Flextronics B	ZALA*/
ST[0].nSiteList[154]		=1015; 	ST[0].nLinkList[154]		=RADIO2_6; 		/*R1015, Zalaeg, Boartech		ZALA*/
ST[0].nSiteList[155]		=1016; 	ST[0].nLinkList[155]		=RADIO2_6; 		/*R1016, Zalaeg, Keytech		ZALA*/
ST[0].nSiteList[156]		=242; 	ST[0].nLinkList[156]		=RADIO2_6; 		/*91-09 TMOK					ZALA*/
ST[0].nSiteList[157]		=199; 	ST[0].nLinkList[157]		=RADIO2_6; 		/*91-14 TMOK					ZALA*/
ST[0].nSiteList[158]		=206; 	ST[0].nLinkList[158]		=RADIO2_6; 		/*91-57 TMOK					ZALA*/
ST[0].nSiteList[159]		=237; 	ST[0].nLinkList[159]		=RADIO2_6; 		/*91-95 TMOK					ZALA*/
ST[0].nSiteList[160]		=239; 	ST[0].nLinkList[160]		=RADIO2_6; 		/*99-364						ZALA*/
ST[0].nSiteList[161]		=236; 	ST[0].nLinkList[161]		=RADIO4_2; 		/*44-01 TMOK					IK*/
ST[0].nSiteList[162]		=3097; 	ST[0].nLinkList[162]		=RADIO1_8; 		/*32-28 TMOK					SZVAR*/
ST[0].nSiteList[163]		=3098; 	ST[0].nLinkList[163]		=RADIO1_8; 		/*32-34 TMOK					SZVAR*/
ST[0].nSiteList[164]		=238; 	ST[0].nLinkList[164]		=RADIO8_5; 		/*92-13 TMOK					ZALA*/
ST[0].nSiteList[165]		=203; 	ST[0].nLinkList[165]		=RADIO2_6; 		/*91-32 TMOK					ZALA*/
ST[0].nSiteList[166]		=204; 	ST[0].nLinkList[166]		=RADIO2_7; 		/*91-40 TMOK					ZALA*/
ST[0].nSiteList[167]		=212; 	ST[0].nLinkList[167]		=RADIO2_7; 		/*92-59 TMOK					ZALA*/
ST[0].nSiteList[168]		=244; 	ST[0].nLinkList[168]		=RADIO8_5; 		/*92-17 TMOK					ZALA*/
ST[0].nSiteList[169]		=243; 	ST[0].nLinkList[169]		=RADIO8_5; 		/*92-22 TMOK					ZALA*/
ST[0].nSiteList[170]		=209; 	ST[0].nLinkList[170]		=RADIO8_5; 		/*92-28 TMOK					ZALA*/
ST[0].nSiteList[171]		=211; 	ST[0].nLinkList[171]		=RADIO8_5; 		/*92-30 TMOK					ZALA*/
ST[0].nSiteList[172]		=205; 	ST[0].nLinkList[172]		=RADIO2_7; 		/*91-45 TMOK					ZALA*/
ST[0].nSiteList[173]		=200; 	ST[0].nLinkList[173]		=RADIO2_7; 		/*91-16 TMOK					ZALA*/
ST[0].nSiteList[174]		=201; 	ST[0].nLinkList[174]		=RADIO2_7; 		/*91-17 TMOK					ZALA*/
ST[0].nSiteList[175]		=202; 	ST[0].nLinkList[175]		=RADIO2_7; 		/*91-18 TMOK					ZALA*/
ST[0].nSiteList[176]		=207; 	ST[0].nLinkList[176]		=RADIO2_7; 		/*91-60 TMOK					ZALA*/
ST[0].nSiteList[177]		=208; 	ST[0].nLinkList[177]		=RADIO2_7; 		/*91-82 TMOK					ZALA*/
ST[0].nSiteList[178]		=210; 	ST[0].nLinkList[178]		=RADIO8_5; 		/*92-29 TMOK					ZALA*/
ST[0].nSiteList[179]		=248; 	ST[0].nLinkList[179]		=RADIO1_8; 		/*31-18 TMOK					SZVAR*/
ST[0].nSiteList[180]		=229; 	ST[0].nLinkList[180]		=RADIO5_1; 		/*86-10 TMOK					IG*/
ST[0].nSiteList[181]		=230; 	ST[0].nLinkList[181]		=RADIO5_1; 		/*86-29 TMOK					IG*/
ST[0].nSiteList[182]		=231; 	ST[0].nLinkList[182]		=RADIO5_1; 		/*86-48 TMOK					IG*/
ST[0].nSiteList[183]		=232; 	ST[0].nLinkList[183]		=RADIO5_1; 		/*86-62 TMOK					IG*/
ST[0].nSiteList[184]		=233; 	ST[0].nLinkList[184]		=RADIO5_1; 		/*86-63 TMOK					IG*/
ST[0].nSiteList[185]		=234; 	ST[0].nLinkList[185]		=RADIO5_1; 		/*86-76 TMOK					IG*/
ST[0].nSiteList[186]		=246; 	ST[0].nLinkList[186]		=RADIO5_3; 		/*81-11 TMOK					IG*/
ST[0].nSiteList[187]		=247; 	ST[0].nLinkList[187]		=RADIO5_3; 		/*81-12 TMOK					IG*/
ST[0].nSiteList[188]		=218; 	ST[0].nLinkList[188]		=RADIO5_2; 		/*81-50 TMOK					IG*/
ST[0].nSiteList[189]		=220; 	ST[0].nLinkList[189]		=RADIO5_2; 		/*81-87 TMOK					IG*/
ST[0].nSiteList[190]		=214; 	ST[0].nLinkList[190]		=RADIO5_1; 		/*85-13 TMOK					IG*/
ST[0].nSiteList[191]		=224; 	ST[0].nLinkList[191]		=RADIO5_4; 		/*85-15 TMOK					IG*/
ST[0].nSiteList[192]		=225; 	ST[0].nLinkList[192]		=RADIO5_4; 		/*85-29 TMOK					IG*/
ST[0].nSiteList[193]		=226; 	ST[0].nLinkList[193]		=RADIO5_2; 		/*85-50 TMOK					IG*/
ST[0].nSiteList[194]		=227; 	ST[0].nLinkList[194]		=RADIO5_1; 		/*85-90 TMOK					IG*/
ST[0].nSiteList[195]		=228; 	ST[0].nLinkList[195]		=RADIO5_1; 		/*85-93 TMOK					IG*/
ST[0].nSiteList[196]		=252; 	ST[0].nLinkList[196]		=RADIO7_1; 		/*12-36 TMOK					MOS*/
ST[0].nSiteList[197]		=253; 	ST[0].nLinkList[197]		=RADIO7_1; 		/*12-66 TMOK					MOS*/
ST[0].nSiteList[198]		=254; 	ST[0].nLinkList[198]		=RADIO5_3; 		/*20-10 TMOK					IG*/
ST[0].nSiteList[199]		=3139; 	ST[0].nLinkList[199]		=RADIO6_1; 		/*41-82 TMOK					SZOM*/
ST[0].nSiteList[200]		=255; 	ST[0].nLinkList[200]		=RADIO6_1; 		/*41-52 TMOK					SZOM*/
ST[0].nSiteList[201]		=256; 	ST[0].nLinkList[201]		=RADIO6_6; 		/*Szombathely Sas utca, Talus 	SZOM*/
ST[0].nSiteList[202]		=257; 	ST[0].nLinkList[202]		=RADIO8_5; 		/*92-32 TMOK					ZALA*/
ST[0].nSiteList[203]		=258; 	ST[0].nLinkList[203]		=RADIO6_2; 		/*41-59 TMOK					SZOM*/
ST[0].nSiteList[204]		=259; 	ST[0].nLinkList[204]		=RADIO9_1; 		/*32-82 TMOK					SZVAR*/
ST[0].nSiteList[205]		=260; 	ST[0].nLinkList[205]		=RADIO5_3; 		/*21-57, 21-58 			IG*/
ST[0].nSiteList[206]		=5049; 	ST[0].nLinkList[206]		=RADIO5_8; 		/*21-39 TMOK					IG*/
ST[0].nSiteList[207]		=3133; 	ST[0].nLinkList[207]		=RADIO5_3; 		/*21-88 TMOK					IG*/
ST[0].nSiteList[208]		=3109; 	ST[0].nLinkList[208]		=RADIO5_3; 		/*20-07 TMOK					IG*/
ST[0].nSiteList[209]		=3111; 	ST[0].nLinkList[209]		=RADIO5_3; 		/*20-31 TMOK					IG*/
ST[0].nSiteList[210]		=308; 	ST[0].nLinkList[210]		=RADIO3_7; 		/*Tatabanya, Nivo				ORNY*/
ST[0].nSiteList[211]		=309; 	ST[0].nLinkList[211]		=RADIO7_1; 		/*Movar, sportcsarnok			MOS*/
ST[0].nSiteList[212]		=3131; 	ST[0].nLinkList[212]		=RADIO5_7; 		/*21-81 TMOK					IG*/
ST[0].nSiteList[213]		=261; 	ST[0].nLinkList[213]		=RADIO2_7; 		/*91-38 TMOK					ZALA*/
ST[0].nSiteList[214]		=262; 	ST[0].nLinkList[214]		=RADIO2_7; 		/*91-50 TMOK					ZALA*/
ST[0].nSiteList[215]		=263; 	ST[0].nLinkList[215]		=RADIO2_7; 		/*92-12 TMOK					ZALA*/
ST[0].nSiteList[216]		=264; 	ST[0].nLinkList[216]		=RADIO2_7; 		/*92-53 TMOK					ZALA*/
ST[0].nSiteList[217]		=265; 	ST[0].nLinkList[217]		=RADIO2_7; 		/*92-62 TMOK					ZALA*/
ST[0].nSiteList[218]		=266; 	ST[0].nLinkList[218]		=RADIO8_6; 		/*92-34 TMOK					ZALA*/
ST[0].nSiteList[219]		=267; 	ST[0].nLinkList[219]		=RADIO2_7; 		/*92-39 TMOK					ZALA*/
ST[0].nSiteList[220]		=268; 	ST[0].nLinkList[220]		=RADIO8_2; 		/*42-76 TMOK					ZALA*/
ST[0].nSiteList[221]		=269; 	ST[0].nLinkList[221]		=RADIO2_7; 		/*42-67 TMOK					ZALA*/
ST[0].nSiteList[222]		=270; 	ST[0].nLinkList[222]		=RADIO8_2; 		/*42-69 TMOK					ZALA*/
ST[0].nSiteList[223]		=271; 	ST[0].nLinkList[223]		=RADIO8_2; 		/*42-71 TMOK					ZALA*/
ST[0].nSiteList[224]		=272; 	ST[0].nLinkList[224]		=RADIO8_1; 		/*Kondorfa átjátszó				ZALA*/
ST[0].nSiteList[225]		=273; 	ST[0].nLinkList[225]		=RADIO2_7; 		/*42-68 TMOK					ZALA*/
ST[0].nSiteList[226]		=274; 	ST[0].nLinkList[226]		=RADIO8_2; 		/*42-83 TMOK					ZALA*/
ST[0].nSiteList[227]		=275; 	ST[0].nLinkList[227]		=RADIO8_4; 		/*42-80 TMOK					ZALA*/
ST[0].nSiteList[228]		=276; 	ST[0].nLinkList[228]		=RADIO8_2; 		/*42-74 TMOK					ZALA*/
ST[0].nSiteList[229]		=278; 	ST[0].nLinkList[229]		=RADIO5_5; 		/*KOMÁROM NOKIA ST1, TALUS		IG*/
ST[0].nSiteList[230]		=279; 	ST[0].nLinkList[230]		=RADIO5_1; 		/*KOMÁROM PERLOS,    TALUS		IG*/
ST[0].nSiteList[231]		=280; 	ST[0].nLinkList[231]		=RADIO5_5; 		/*KOMÁROM SUNARROW,  TALUS		IG*/
ST[0].nSiteList[232]		=281; 	ST[0].nLinkList[232]		=RADIO5_5; 		/*KOMÁROM FOXCONN,   TALUS		IG*/
ST[0].nSiteList[233]		=282; 	ST[0].nLinkList[233]		=RADIO8_1; 		/*Csörötnek, TALUS				ZALA*/
ST[0].nSiteList[234]		=283; 	ST[0].nLinkList[234]		=RADIO6_2; 		/*Bük Golf appartman, TALUS		SZOM*/
ST[0].nSiteList[235]		=284; 	ST[0].nLinkList[235]		=RADIO9_4; 		/*Mor, Talus		, Radio1_2	SZVAR*/
ST[0].nSiteList[236]		=9999; 	ST[0].nLinkList[236]		=RADIO5_9; 		/*21-21, 21-22		, Radio5_9	IG*/
ST[0].nSiteList[237]		=289; 	ST[0].nLinkList[237]		=RADIO7_1; 		/*Movar,Duna lakopark, Radio7_1	MOS*/
ST[0].nSiteList[238]		=1017; 	ST[0].nLinkList[238]		=RADIO9_4; 		/*Mor, Lear, TALUS     Radio1_2 SZVAR*/
ST[0].nSiteList[239]		=290; 	ST[0].nLinkList[239]		=RADIO3_6; 		/*Oroszlany,UNIP TALUS Radio3_6	ORNY*/
ST[0].nSiteList[240]		=291; 	ST[0].nLinkList[240]		=RADIO7_1; 		/*Ujronafo,TALUS,PM810 Radio7_1	MOS*/
ST[0].nSiteList[241]		=292; 	ST[0].nLinkList[241]		=RADIO6_1; 		/*Vep, TALUS,PM810 Radio6_1		SZOM*/
ST[0].nSiteList[242]		=293; 	ST[0].nLinkList[242]		=RADIO6_2; 		/*Bükfurdo OTP lakopark, TALUS	SZOM*/
ST[0].nSiteList[243]		=294; 	ST[0].nLinkList[243]		=RADIO5_5; 		/*Komarom,Perlos III. TALUS		IG*/
ST[0].nSiteList[244]		=295; 	ST[0].nLinkList[244]		=RADIO5_5; 		/*Komarom, SAVCOR TALUS, 		IG*/
ST[0].nSiteList[245]		=296; 	ST[0].nLinkList[245]		=RADIO5_1; 		/*Kisber, USIN - ORTECH TALUS, PM810		IG*/
ST[0].nSiteList[246]		=297; 	ST[0].nLinkList[246]		=RADIO6_1; 		/*41-57 TMOK					SZOM*/
ST[0].nSiteList[247]		=298; 	ST[0].nLinkList[247]		=RADIO1_1; 		/*Szekesfehervar, szinhaz		SZVAR*/
ST[0].nSiteList[248]		=299; 	ST[0].nLinkList[248]		=RADIO1_1; 		/*31-58, 31-63					SZVAR*/
ST[0].nSiteList[249]		=0; 	ST[0].nLinkList[249]		=RSLINK3; 		/* RTUALL */







/*for (nI=0;nI<MAX_RTU;nI++)
{
	byComStat[nI] = 0;
}


   MOSCAD_set_sitetable(nNumOfSites,ST[0].nSiteList,ST[0].nLinkList,byComStat);*/




/****************************************************************************/
/* Dinamikus site tabla feltoltese											*/
/****************************************************************************/

	
/*-------------------------------*/
/* Clear the dynamic site table. */
/*-------------------------------*/
MOSCAD_init_sitetable(); 
nSiteIdCheck[0] = 301;
nSiteIdCheck[1] = 302;
nSiteIdCheck[2] = 303;
nSiteIdCheck[3] = 304;
nSiteIdCheck[4] = 305;
nSiteIdCheck[5] = 5355;
nSiteIdCheck[6] = 315;
nSiteIdCheck[7] = 316;
nSiteIdCheck[8] = 317;
nSiteIdCheck[9] = 318;

nSiteIdCheck[10] = 319;
nSiteIdCheck[11] = 5359;
nSiteIdCheck[12] = 320;

/* 250--------------------------------------------------------------------------259*/
/* 250 Komarom, Hansaprint	RADIO5_5		IG			*/ MOSCAD_add_new_site(301,RADIO5_5);		
/* 251 85-00,85-83							IG			*/ MOSCAD_add_new_site(302,RADIO5_1);
/* 252 12-14								MOS			*/ MOSCAD_add_new_site(303,RADIO7_1);
/* 253 30-23								SZVAR		*/ MOSCAD_add_new_site(304,RADIO1_1);
/* 254 11-10								MOS			*/ MOSCAD_add_new_site(305,RADIO7_1);
/* 255 Sárvár, HUKE							IK			*/ MOSCAD_add_new_site(5355,RADIO4_1);
/* 256 Tata, Meszes							IG			*/ MOSCAD_add_new_site(315,RADIO5_2);
/* 257 Székesfehérvár, Pláza				SZVAR		*/ MOSCAD_add_new_site(316,RADIO9_1);
/* 258 Székesfehérvár, Deák F. utca			SZVAR		*/ MOSCAD_add_new_site(317,RADIO1_1);
/* 259 Székesfehérvár, TESCO				SZVAR		*/ MOSCAD_add_new_site(318,RADIO9_1);
/* 260--------------------------------------269*/
/* 260 Székesfehérvár, Dunainjection		SZVAR		*/ MOSCAD_add_new_site(319,RADIO9_1);
/* 261 43-03								IK			*/ MOSCAD_add_new_site(5359,RADIO4_1);
/* 262 70-45								IK			*/ MOSCAD_add_new_site(320,RADIO4_1);

	



p_col_ParStat[16] = 0;	/* Assuming good dynamic site table */
p_col_ParStat[17] = 1;
for (nI=0;nI<13;nI++)
{
	MOSCAD_find_siteid (250 + nI, &nSiteId[nI], &cLinkId[nI]);
        MOSCAD_sprintf(message,"nI: %d, site ID: %d",nI+250,nSiteId[nI]);
        MOSCAD_error(message );
	
		MOSCAD_find_siteid (250 + nI, &nSiteId[nI], &cLinkId[nI]);
		p_col_ParStat[27+nI] = nSiteId[nI];

	
	
if ( (nSiteId[nI]!=nSiteIdCheck[nI]) && (p_col_ParStat[16] == 0) )
	{
		p_col_ParStat[16] = nI;
		p_col_ParStat[17] = nSiteId[nI];
	} /* end if */
	
} /* end for */

/****************************************************************************/
/* Parancskuldes parameterei      											*/
/****************************************************************************/

/*int		nI;
int 			nSCTblIndx;
int 			nOffset;
short			*p_col_DCAct;
short			*p_col_SCAct;*/
	
	

/* IEC cimnek megfelelo RTU cimek -----------------------------------------------------------------------*/
/* Ha valamelyik darabszam = 0, akkor olyan tipusu parancs nem tartozik az RTU-hoz */
        	
         	





/*Nyugta inicializalas*/

/*for (nI=0;nI<sCP.nRtuNum && nI<MAX_RTU;nI++)
{
	if (sCP.sCPR[nI].nAckNum>0)
		{
 		fnSCTblIndx(sCP.sCPR[nI].nAckStart, &nSCTblIndx, &nOffset, &p_col_SCAct);

		p_col_SCAct[sCP.sCPR[nI].nAckStart-nOffset] = 1;
		}
}*/


/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* K1 : ZALA, IK */
ST[0].sRAD_K1[0].nRtuNumRad = 90;
ST[0].sRAD_K1[0].nIndx[0]=3; /*3*/
ST[0].sRAD_K1[0].nIndx[1]=9;
ST[0].sRAD_K1[0].nIndx[2]=11; /*11*/
ST[0].sRAD_K1[0].nIndx[3]=17; /*17*/
ST[0].sRAD_K1[0].nIndx[4]=18;
ST[0].sRAD_K1[0].nIndx[5]=19;
ST[0].sRAD_K1[0].nIndx[6]=20;
ST[0].sRAD_K1[0].nIndx[7]=21;
ST[0].sRAD_K1[0].nIndx[8]=49;
ST[0].sRAD_K1[0].nIndx[9]=68;
ST[0].sRAD_K1[0].nIndx[10]=79;
ST[0].sRAD_K1[0].nIndx[11]=80;
ST[0].sRAD_K1[0].nIndx[12]=83;
ST[0].sRAD_K1[0].nIndx[13]=84;
ST[0].sRAD_K1[0].nIndx[14]=87;
ST[0].sRAD_K1[0].nIndx[15]=88;
ST[0].sRAD_K1[0].nIndx[16]=92;
ST[0].sRAD_K1[0].nIndx[17]=94;
ST[0].sRAD_K1[0].nIndx[18]=95;
ST[0].sRAD_K1[0].nIndx[19]=96;
ST[0].sRAD_K1[0].nIndx[20]=97;
ST[0].sRAD_K1[0].nIndx[21]=98;
ST[0].sRAD_K1[0].nIndx[22]=99;
ST[0].sRAD_K1[0].nIndx[23]=100;
ST[0].sRAD_K1[0].nIndx[24]=101;
ST[0].sRAD_K1[0].nIndx[25]=102;
ST[0].sRAD_K1[0].nIndx[26]=103;
ST[0].sRAD_K1[0].nIndx[27]=104;
ST[0].sRAD_K1[0].nIndx[28]=134;
ST[0].sRAD_K1[0].nIndx[29]=135;
ST[0].sRAD_K1[0].nIndx[30]=136;
ST[0].sRAD_K1[0].nIndx[31]=137;
ST[0].sRAD_K1[0].nIndx[32]=138;
ST[0].sRAD_K1[0].nIndx[33]=139;
ST[0].sRAD_K1[0].nIndx[34]=140;
ST[0].sRAD_K1[0].nIndx[35]=141;
ST[0].sRAD_K1[0].nIndx[36]=142;
ST[0].sRAD_K1[0].nIndx[37]=143;
ST[0].sRAD_K1[0].nIndx[38]=144;
ST[0].sRAD_K1[0].nIndx[39]=145;
ST[0].sRAD_K1[0].nIndx[40]=151;
ST[0].sRAD_K1[0].nIndx[41]=153;
ST[0].sRAD_K1[0].nIndx[42]=154;
ST[0].sRAD_K1[0].nIndx[43]=155;
ST[0].sRAD_K1[0].nIndx[44]=156;
ST[0].sRAD_K1[0].nIndx[45]=157;
ST[0].sRAD_K1[0].nIndx[46]=158;
ST[0].sRAD_K1[0].nIndx[47]=159;
ST[0].sRAD_K1[0].nIndx[48]=160;
ST[0].sRAD_K1[0].nIndx[49]=161;
ST[0].sRAD_K1[0].nIndx[50]=164;
ST[0].sRAD_K1[0].nIndx[51]=165;
ST[0].sRAD_K1[0].nIndx[52]=166;
ST[0].sRAD_K1[0].nIndx[53]=167;
ST[0].sRAD_K1[0].nIndx[54]=168;
ST[0].sRAD_K1[0].nIndx[55]=169;
ST[0].sRAD_K1[0].nIndx[56]=170;
ST[0].sRAD_K1[0].nIndx[57]=171;
ST[0].sRAD_K1[0].nIndx[58]=172;
ST[0].sRAD_K1[0].nIndx[59]=173;
ST[0].sRAD_K1[0].nIndx[60]=174;
ST[0].sRAD_K1[0].nIndx[61]=175;
ST[0].sRAD_K1[0].nIndx[62]=176;
ST[0].sRAD_K1[0].nIndx[63]=177;
ST[0].sRAD_K1[0].nIndx[64]=178;
ST[0].sRAD_K1[0].nIndx[65]=202;
ST[0].sRAD_K1[0].nIndx[66]=213;
ST[0].sRAD_K1[0].nIndx[67]=214;
ST[0].sRAD_K1[0].nIndx[68]=215;
ST[0].sRAD_K1[0].nIndx[69]=216;
ST[0].sRAD_K1[0].nIndx[70]=217;
ST[0].sRAD_K1[0].nIndx[71]=218;
ST[0].sRAD_K1[0].nIndx[72]=219;
ST[0].sRAD_K1[0].nIndx[73]=220;
ST[0].sRAD_K1[0].nIndx[74]=221;
ST[0].sRAD_K1[0].nIndx[75]=222;
ST[0].sRAD_K1[0].nIndx[76]=223;
ST[0].sRAD_K1[0].nIndx[77]=224;
ST[0].sRAD_K1[0].nIndx[78]=225;
ST[0].sRAD_K1[0].nIndx[79]=226;
ST[0].sRAD_K1[0].nIndx[80]=227;
ST[0].sRAD_K1[0].nIndx[81]=228;
ST[0].sRAD_K1[0].nIndx[82]=233;
ST[0].sRAD_K1[0].nIndx[83]=91;
ST[0].sRAD_K1[0].nIndx[84]=5;
ST[0].sRAD_K1[0].nIndx[85]=30;
ST[0].sRAD_K1[0].nIndx[86]=32;
ST[0].sRAD_K1[0].nIndx[87]=255;
ST[0].sRAD_K1[0].nIndx[88]=261;
ST[0].sRAD_K1[0].nIndx[89]=262;


/* K2 : SZOM, MOS */
ST[0].sRAD_K2[0].nRtuNumRad = 80; /*77*/

ST[0].sRAD_K2[0].nIndx[0]=15;/*15*/
ST[0].sRAD_K2[0].nIndx[1]=16;
ST[0].sRAD_K2[0].nIndx[2]=22; /*22*/
ST[0].sRAD_K2[0].nIndx[3]=24; /*24*/
ST[0].sRAD_K2[0].nIndx[4]=33;
ST[0].sRAD_K2[0].nIndx[5]=34;
ST[0].sRAD_K2[0].nIndx[6]=35;
ST[0].sRAD_K2[0].nIndx[7]=36;
ST[0].sRAD_K2[0].nIndx[8]=37;
ST[0].sRAD_K2[0].nIndx[9]=38;
ST[0].sRAD_K2[0].nIndx[10]=40;
ST[0].sRAD_K2[0].nIndx[11]=41;
ST[0].sRAD_K2[0].nIndx[12]=42;
ST[0].sRAD_K2[0].nIndx[13]=43;
ST[0].sRAD_K2[0].nIndx[14]=44;
ST[0].sRAD_K2[0].nIndx[15]=45;
ST[0].sRAD_K2[0].nIndx[16]=46;
ST[0].sRAD_K2[0].nIndx[17]=48;
ST[0].sRAD_K2[0].nIndx[18]=50;
ST[0].sRAD_K2[0].nIndx[19]=51;
ST[0].sRAD_K2[0].nIndx[20]=52;
ST[0].sRAD_K2[0].nIndx[21]=53;
ST[0].sRAD_K2[0].nIndx[22]=54;
ST[0].sRAD_K2[0].nIndx[23]=55;
ST[0].sRAD_K2[0].nIndx[24]=56;
ST[0].sRAD_K2[0].nIndx[25]=57;
ST[0].sRAD_K2[0].nIndx[26]=58;
ST[0].sRAD_K2[0].nIndx[27]=59;
ST[0].sRAD_K2[0].nIndx[28]=60;
ST[0].sRAD_K2[0].nIndx[29]=61;
ST[0].sRAD_K2[0].nIndx[30]=62;
ST[0].sRAD_K2[0].nIndx[31]=63;
ST[0].sRAD_K2[0].nIndx[32]=66;
ST[0].sRAD_K2[0].nIndx[33]=67;
ST[0].sRAD_K2[0].nIndx[34]=69;
ST[0].sRAD_K2[0].nIndx[35]=70;
ST[0].sRAD_K2[0].nIndx[36]=71;
ST[0].sRAD_K2[0].nIndx[37]=72;
ST[0].sRAD_K2[0].nIndx[38]=73;
ST[0].sRAD_K2[0].nIndx[39]=74;
ST[0].sRAD_K2[0].nIndx[40]=75;
ST[0].sRAD_K2[0].nIndx[41]=76;
ST[0].sRAD_K2[0].nIndx[42]=77;
ST[0].sRAD_K2[0].nIndx[43]=78;
ST[0].sRAD_K2[0].nIndx[44]=81;
ST[0].sRAD_K2[0].nIndx[45]=85;
ST[0].sRAD_K2[0].nIndx[46]=86;
ST[0].sRAD_K2[0].nIndx[47]=89;
ST[0].sRAD_K2[0].nIndx[48]=90;
ST[0].sRAD_K2[0].nIndx[49]=93;
ST[0].sRAD_K2[0].nIndx[50]=106;
ST[0].sRAD_K2[0].nIndx[51]=109;
ST[0].sRAD_K2[0].nIndx[52]=110;
ST[0].sRAD_K2[0].nIndx[53]=111;
ST[0].sRAD_K2[0].nIndx[54]=112;
ST[0].sRAD_K2[0].nIndx[55]=113;
ST[0].sRAD_K2[0].nIndx[56]=114;
ST[0].sRAD_K2[0].nIndx[57]=115;
ST[0].sRAD_K2[0].nIndx[58]=116;
ST[0].sRAD_K2[0].nIndx[59]=117;
ST[0].sRAD_K2[0].nIndx[60]=118;
ST[0].sRAD_K2[0].nIndx[61]=121;
ST[0].sRAD_K2[0].nIndx[62]=122;
ST[0].sRAD_K2[0].nIndx[63]=196;
ST[0].sRAD_K2[0].nIndx[64]=197;
ST[0].sRAD_K2[0].nIndx[65]=199;
ST[0].sRAD_K2[0].nIndx[66]=200;
ST[0].sRAD_K2[0].nIndx[67]=201;
ST[0].sRAD_K2[0].nIndx[68]=234;
ST[0].sRAD_K2[0].nIndx[69]=237;
ST[0].sRAD_K2[0].nIndx[70]=240;
ST[0].sRAD_K2[0].nIndx[71]=241;
ST[0].sRAD_K2[0].nIndx[72]=242;
ST[0].sRAD_K2[0].nIndx[73]=246;
ST[0].sRAD_K2[0].nIndx[74]=252;
ST[0].sRAD_K2[0].nIndx[75]=254;
ST[0].sRAD_K2[0].nIndx[76]=203;
ST[0].sRAD_K2[0].nIndx[77]=27;
ST[0].sRAD_K2[0].nIndx[78]=211;
ST[0].sRAD_K2[0].nIndx[79]=47;


/* K3 : SZVAR, ORNY, IG */
ST[0].sRAD_K3[0].nRtuNumRad = 86;

ST[0].sRAD_K3[0].nIndx[0]=1;/*1*/
ST[0].sRAD_K3[0].nIndx[1]=2; 
ST[0].sRAD_K3[0].nIndx[2]=6; /*6*/
ST[0].sRAD_K3[0].nIndx[3]=7; /*7*/
ST[0].sRAD_K3[0].nIndx[4]=12;
ST[0].sRAD_K3[0].nIndx[5]=25;
ST[0].sRAD_K3[0].nIndx[6]=26;
ST[0].sRAD_K3[0].nIndx[7]=39;
ST[0].sRAD_K3[0].nIndx[8]=64;
ST[0].sRAD_K3[0].nIndx[9]=65;
ST[0].sRAD_K3[0].nIndx[10]=107;
ST[0].sRAD_K3[0].nIndx[11]=108;
ST[0].sRAD_K3[0].nIndx[12]=119;
ST[0].sRAD_K3[0].nIndx[13]=120;
ST[0].sRAD_K3[0].nIndx[14]=123;
ST[0].sRAD_K3[0].nIndx[15]=124;
ST[0].sRAD_K3[0].nIndx[16]=125;
ST[0].sRAD_K3[0].nIndx[17]=126;
ST[0].sRAD_K3[0].nIndx[18]=127;
ST[0].sRAD_K3[0].nIndx[19]=128;
ST[0].sRAD_K3[0].nIndx[20]=129;
ST[0].sRAD_K3[0].nIndx[21]=130;
ST[0].sRAD_K3[0].nIndx[22]=131;
ST[0].sRAD_K3[0].nIndx[23]=132;
ST[0].sRAD_K3[0].nIndx[24]=133;
ST[0].sRAD_K3[0].nIndx[25]=146;
ST[0].sRAD_K3[0].nIndx[26]=147;
ST[0].sRAD_K3[0].nIndx[27]=148;
ST[0].sRAD_K3[0].nIndx[28]=149;
ST[0].sRAD_K3[0].nIndx[29]=150;
ST[0].sRAD_K3[0].nIndx[30]=152;
ST[0].sRAD_K3[0].nIndx[31]=162;
ST[0].sRAD_K3[0].nIndx[32]=163;
ST[0].sRAD_K3[0].nIndx[33]=179;
ST[0].sRAD_K3[0].nIndx[34]=180;
ST[0].sRAD_K3[0].nIndx[35]=181;
ST[0].sRAD_K3[0].nIndx[36]=182;
ST[0].sRAD_K3[0].nIndx[37]=183;
ST[0].sRAD_K3[0].nIndx[38]=184;
ST[0].sRAD_K3[0].nIndx[39]=185;
ST[0].sRAD_K3[0].nIndx[40]=186;
ST[0].sRAD_K3[0].nIndx[41]=187;
ST[0].sRAD_K3[0].nIndx[42]=188;
ST[0].sRAD_K3[0].nIndx[43]=189;
ST[0].sRAD_K3[0].nIndx[44]=190;
ST[0].sRAD_K3[0].nIndx[45]=191;
ST[0].sRAD_K3[0].nIndx[46]=192;
ST[0].sRAD_K3[0].nIndx[47]=193;
ST[0].sRAD_K3[0].nIndx[48]=194;
ST[0].sRAD_K3[0].nIndx[49]=195;
ST[0].sRAD_K3[0].nIndx[50]=198;
ST[0].sRAD_K3[0].nIndx[51]=204;
ST[0].sRAD_K3[0].nIndx[52]=205;
ST[0].sRAD_K3[0].nIndx[53]=206;
ST[0].sRAD_K3[0].nIndx[54]=207;
ST[0].sRAD_K3[0].nIndx[55]=208;
ST[0].sRAD_K3[0].nIndx[56]=209;
ST[0].sRAD_K3[0].nIndx[57]=210;
ST[0].sRAD_K3[0].nIndx[58]=211;
ST[0].sRAD_K3[0].nIndx[59]=212;
ST[0].sRAD_K3[0].nIndx[60]=229;
ST[0].sRAD_K3[0].nIndx[61]=230;
ST[0].sRAD_K3[0].nIndx[62]=231;
ST[0].sRAD_K3[0].nIndx[63]=232;
ST[0].sRAD_K3[0].nIndx[64]=235;
ST[0].sRAD_K3[0].nIndx[65]=238;
ST[0].sRAD_K3[0].nIndx[66]=239;
ST[0].sRAD_K3[0].nIndx[67]=243;
ST[0].sRAD_K3[0].nIndx[68]=244;
ST[0].sRAD_K3[0].nIndx[69]=245;
ST[0].sRAD_K3[0].nIndx[70]=247;
ST[0].sRAD_K3[0].nIndx[71]=248;
ST[0].sRAD_K3[0].nIndx[72]=28;
ST[0].sRAD_K3[0].nIndx[73]=250;
ST[0].sRAD_K3[0].nIndx[74]=251;
ST[0].sRAD_K3[0].nIndx[75]=253;
ST[0].sRAD_K3[0].nIndx[76]=236;
ST[0].sRAD_K3[0].nIndx[77]=29;
ST[0].sRAD_K3[0].nIndx[78]=105;
ST[0].sRAD_K3[0].nIndx[79]=210;
ST[0].sRAD_K3[0].nIndx[80]=31;
ST[0].sRAD_K3[0].nIndx[81]=256;
ST[0].sRAD_K3[0].nIndx[82]=257;
ST[0].sRAD_K3[0].nIndx[83]=258;
ST[0].sRAD_K3[0].nIndx[84]=259;
ST[0].sRAD_K3[0].nIndx[85]=260;






/*RST[0].sLIN[0]K RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 7;
ST[0].sLIN[0].nIndx[0]=1;
ST[0].sLIN[0].nIndx[1]=4;
ST[0].sLIN[0].nIndx[2]=8;
ST[0].sLIN[0].nIndx[3]=10;
ST[0].sLIN[0].nIndx[4]=13;
ST[0].sLIN[0].nIndx[5]=14;
ST[0].sLIN[0].nIndx[6]=23;




} /* end fnSetComPar()*/

