#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


void tablo(char oyunAlani[10][10])
{
printf("\n");
printf("  --a-- --b-- --c-- --d-- --e-- --f-- --g-- --h-- --i-- --j--\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 1  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[0][0],oyunAlani[0][1],oyunAlani[0][2],oyunAlani[0][3],oyunAlani[0][4],oyunAlani[0][5],oyunAlani[0][6],oyunAlani[0][7],oyunAlani[0][8],oyunAlani[0][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 2  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[1][0],oyunAlani[1][1],oyunAlani[1][2],oyunAlani[1][3],oyunAlani[1][4],oyunAlani[1][5],oyunAlani[1][6],oyunAlani[1][7],oyunAlani[1][8],oyunAlani[1][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 3  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[2][0],oyunAlani[2][1],oyunAlani[2][2],oyunAlani[2][3],oyunAlani[2][4],oyunAlani[2][5],oyunAlani[2][6],oyunAlani[2][7],oyunAlani[2][8],oyunAlani[2][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 4  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[3][0],oyunAlani[3][1],oyunAlani[3][2],oyunAlani[3][3],oyunAlani[3][4],oyunAlani[3][5],oyunAlani[3][6],oyunAlani[3][7],oyunAlani[3][8],oyunAlani[3][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 5  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[4][0],oyunAlani[4][1],oyunAlani[4][2],oyunAlani[4][3],oyunAlani[4][4],oyunAlani[4][5],oyunAlani[4][6],oyunAlani[4][7],oyunAlani[4][8],oyunAlani[4][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 6  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[5][0],oyunAlani[5][1],oyunAlani[5][2],oyunAlani[5][3],oyunAlani[5][4],oyunAlani[5][5],oyunAlani[5][6],oyunAlani[5][7],oyunAlani[5][8],oyunAlani[5][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 7  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[6][0],oyunAlani[6][1],oyunAlani[6][2],oyunAlani[6][3],oyunAlani[6][4],oyunAlani[6][5],oyunAlani[6][6],oyunAlani[6][7],oyunAlani[6][8],oyunAlani[6][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 8  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[7][0],oyunAlani[7][1],oyunAlani[7][2],oyunAlani[7][3],oyunAlani[7][4],oyunAlani[7][5],oyunAlani[7][6],oyunAlani[7][7],oyunAlani[7][8],oyunAlani[7][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf(" 9  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[8][0],oyunAlani[8][1],oyunAlani[8][2],oyunAlani[8][3],oyunAlani[8][4],oyunAlani[8][5],oyunAlani[8][6],oyunAlani[8][7],oyunAlani[8][8],oyunAlani[8][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
printf(" |     |     |     |     |     |     |     |     |     |     |\n");
printf("10  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",oyunAlani[9][0],oyunAlani[9][1],oyunAlani[9][2],oyunAlani[9][3],oyunAlani[9][4],oyunAlani[9][5],oyunAlani[9][6],oyunAlani[9][7],oyunAlani[9][8],oyunAlani[9][9]);
printf(" |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");

}

	
	
	
	
 int main()
{
	bastanbasla:
char dizi[10][10];
char oyunAlani[10][10];
char satir[1],c;

int gemicesidi,sayac=1;
int Gemi1durum=1,Gemi2durum=1,Gemi3durum=1,Gemi4durum=1;



for (int x=0; x<=9; x++)
{
  for(int y=0;y<=9;y++)
  dizi[x][y]='\0';
}
 
for(int z=0;z<=9;z++)
{
  for(int t=0;t<=9;t++)
  oyunAlani[z][t]='\0';
}



while(1)
{
gemicesidi=1;
dolu:
srand(time(NULL));
int y=rand()%10,x=rand()%10,i=0;


 
	if(gemicesidi==1)
	{
	  if(y>5)
	  {
		   for(int i=y;i>=y-4;i--)
		   {
			   	if(dizi[x][i] !='\0')
			   	{
			   		goto dolu;
				}
		   }
		   for(int i=y;i>=y-4;i--)
		   {
		   	dizi[x][i]='S';
		    					//  oyunAlani[x][i]=dizi[x][i]; // Geminin nerede olduðunu görebilmem için kullanýðým kod..
		   }
	   gemicesidi++;
	  }
	  if(y<=5)
	  {
		  	for(int i=y;i<=y+4;i++)
		   {
			   	if(dizi[i][x] !='\0')
			   	{
			   		goto dolu;
				}
		   }
		   for(int i=y;i<=y+4;i++)
		   {
		   	 dizi[i][x]='S';
		     					//oyunAlani[i][x]=dizi[i][x];   // Geminin nerede olduðunu görebilmem için kullanýðým kod..
		   }
		  
	   gemicesidi++;
	 }
	  
	}
	
	if(gemicesidi==2)
	{
	 
	  if(y>6)
	  {
		  for(int i=y;i>=y-3;i--)
		   {
			   	if(dizi[x][i] !='\0')
			   	{
			   		goto dolu;
				}
		   }
		   for(int i=y;i>=y-3;i--)
		   {
		   	dizi[x][i]='K';
		    				//oyunAlani[x][i]=dizi[x][i];  // Geminin nerede olduðunu görebilmem için kullanýðým kod..
		   }
	   gemicesidi++;
	  }
	  
	  if(y<=6)
	  {	   for(int i=y;i<=y+3;i++)
		   {
			   	if(dizi[i][x] !='\0')
			   	{
			   		goto dolu;
				}
		   }
		   for(int i=y;i<=y+3;i++)
		   {
		   	dizi[i][x]='K';
		    					//oyunAlani[i][x]=dizi[i][x];  // Geminin nerede olduðunu görebilmem için kullanýðým kod..
		   }
	 
	  gemicesidi++;
	 
	  }
	 
	}
	 
	 
	if(gemicesidi==3)
	{
	 
		if(y>7)
		{  for(int i=y;i>=y-2;i--)
		   {
			   	if(dizi[x][i] !='\0')
			   	{
			   		goto dolu;
				}
		   }
		   for(int i=y;i>=y-2;i--)
		   {
		   	dizi[x][i]='D';
		    					//oyunAlani[x][i]=dizi[x][i];  // Geminin nerede olduðunu görebilmem için kullanýðým kod..
		   }
	    gemicesidi++;
	    }
	  
	  if(y<=7)
		{  for(int i=y;i<=y+2;i++)
		   {
			   	if(dizi[i][x] !='\0')
			   	{
			   		goto dolu;
				}
		   }
		   for(int i=y;i<=y+2;i++)
		   {
		   dizi[i][x]='D';
		   						//oyunAlani[i][x]=dizi[i][x];  // Geminin nerede olduðunu görebilmem için kullanýðým kod..
		   }
	   gemicesidi++;
	 
	    }
	 
	}
	 
	if(gemicesidi==4)
	{
	 
	  if(y>7)
		{  for(int i=y;i>=y-2;i--)
		   {
			   	if(dizi[x][i] !='\0')
			   	{
			   	goto dolu;
				}
		   }
		   for(int i=y;i>=y-2;i--)
		   {
		   		dizi[x][i]='P';
		   							//oyunAlani[x][i]=dizi[x][i];  // Geminin nerede olduðunu görebilmem için kullanýðým kod..
		   }
	    break;
	   }
	   
	  if(y<=7)
		{  for(int i=y;i<=y+2;i++)
		   {
			   	if(dizi[i][x] !='\0')
			   	{
			   		goto dolu;
				}
		   }	
		   for(int i=y;i<=y+2;i++)
		   {
		    dizi[i][x]='P';
		    						//oyunAlani[i][x]=dizi[i][x];  // Geminin nerede olduðunu görebilmem için kullanýðým kod..
		   }
	    break;
	   }
	}
}



while(1)
{
	
int z,q;
	do{
	 	
	    tablo(oyunAlani);
	    
	    printf("\n\n");
	    printf("\nLutfen sutun harfini giriniz >>");
	    
	    bos:
	    scanf("%c",&q);
	    if(q==10)goto bos;
	    
	    if((q<97)||(q>106))
	    {
	    printf("\nLutfen a ile j arasinda bir deger giriniz.\n");
	    printf("Devam etmek icin lutfen bir tusa basiniz.\n");
	    getche();
	    system("CLS");
	    }
	 }while((q<97)||(q>106));
	    
	    
	 do{
	    bos2: 
	    printf("\n\nLutfen satir degerini giriniz >>");
	    
	    bo2:
	    gets(satir);
	    if(satir[0]==0)goto bo2;
	    z=atoi(satir);
	    
	    if((z<=0)||(z>10))
	    {
	     printf("\nLutfen 1 ile 10 arasinda bir deger giriniz...\n");
	     printf("Devam etmek icin lutfen bir tusa basiniz..\n");
	     getche();
	     system("CLS");
	     tablo(oyunAlani);
	     printf("\n");
	     printf("\nGirdiginiz sutun harfi >>%c",q);
	    }
	    }while((z<=0)||(z>10));
	 
	 
	if(dizi[z-1][q-97]=='K')
	{
	 dizi[z-1][q-97]='O';
	 oyunAlani[z-1][q-97]='O';
	 
		 if(Gemi2durum==4)
		 {
		  printf("\nBir gemi batirdiniz..\n");
		  printf("Devam etmek icin bir tusa basiniz ..");
		  getche();
		 }
		 
		 if(Gemi2durum<4)
		 {
		  printf("\nTebrikler! Bir gemi vurdunuz..\n");
		  printf("Devam etmek icin bir tusa basiniz ..");
		  getche();
		 }
		 
	 Gemi2durum++;
	 
	}
	else if(dizi[z-1][q-97]=='S')
	    {
	    dizi[z-1][q-97]='O';
	    oyunAlani[z-1][q-97]='O';
		    if(Gemi1durum==5)
		    {
		    printf("\nBir gemi batirdiniz..\n");
		    printf("Devam etmek icin bir tusa basiniz ..");
		    getche();
		    }
		    if(Gemi1durum<5)
		    {
		    printf("\nTebrikler! Bir gemi vurdunuz..\n");
		    printf("Devam etmek icin bir tusa basiniz ..");
		    getche();
		    }
		         
	         Gemi1durum++;
	        }
	else if(dizi[z-1][q-97]=='D')
	    {
	    dizi[z-1][q-97]='O';
	    oyunAlani[z-1][q-97]='O';
	        if(Gemi3durum==3)
	        {
	        printf("\nBir gemi batirdiniz..\n");
	        printf("Devam etmek icin bir tusa basiniz ..");
	        getche();
	        }
	        if(Gemi3durum<3)
	        {
	        printf("\nTebrikler! Bir gemi vurdunuz..\n");
	        printf("Devam etmek icin bir tusa basiniz ..");
	        getche();
	        }
	    Gemi3durum++;
	    }
	else if(dizi[z-1][q-97]=='P')
	    {
	    dizi[z-1][q-97]='O';
	    oyunAlani[z-1][q-97]='O';
		    if(Gemi4durum==3)
		    {
		    printf("\nBir gemi batirdiniz..\n");
		    printf("Devam etmek icin bir tusa basiniz ..");
		    getche();
		    }
		    if(Gemi4durum<3)
		    {
		    printf("\nTebrikler! Bir gemi vurdunuz..\n");
		    printf("Devam etmek icin bir tusa basiniz ..");
		    getche();
		    }
	    Gemi4durum++;
	    }
	else
		{
			if(oyunAlani[z-1][q-97]=='O'||oyunAlani[z-1][q-97]=='X')
			{
			printf("\n\nBuraya atis yapmistiniz. Yeniden deneyin ..\n");
			printf("Devam etmek icin bir tusa basiniz ..");
			}
			else
			{
			oyunAlani[z-1][q-97]='X';
			printf("\nUzgunum Karavana..\n");
			printf("Devam etmek icin bir tusa basiniz ..");
			}
		getche();
		}
		
system("CLS");
sayac++;
	
if(Gemi2durum+Gemi1durum+Gemi3durum+Gemi4durum==19)
{
	printf("\n\n...Tebrikler Oyunu Kazandiniz..\n");
	printf("Yeniden oynamak icin bir tusa basiniz ..");
	getche();
	system("CLS");
	goto bastanbasla;
}


if(sayac==50)
{
	printf("\n\n...Hamle hakkiniz bitti..Savasi kaybettiniz..\n");	
	printf("Yeniden oynamak icin bir tusa basiniz ..");
	getche();
	system("CLS");
	goto bastanbasla;
}
}
}








