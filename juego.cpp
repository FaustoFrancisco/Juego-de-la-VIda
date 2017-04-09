//---------------------------------------------------------------------------

#include <vcl.h>
#include <windows.h>
#include <time.h>
#pragma hdrstop

#include "juego.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int delay(int secs)
{
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
  return 0;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	StringGrid1->Cells[0][1]="X";
	StringGrid1->Cells[1][1]="X";
	StringGrid1->Cells[2][1]="X";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	StringGrid1->Cells[0][1]="X";
	StringGrid1->Cells[0][4]="X";
	StringGrid1->Cells[1][0]="X";
	StringGrid1->Cells[2][0]="X";
	StringGrid1->Cells[2][4]="X";
	StringGrid1->Cells[3][0]="X";
	StringGrid1->Cells[3][1]="X";
	StringGrid1->Cells[3][2]="X";
	StringGrid1->Cells[3][3]="X";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	StringGrid1->Cells[0][0]="X";
	StringGrid1->Cells[0][1]="X";
	StringGrid1->Cells[1][0]="X";
	StringGrid1->Cells[1][2]="X";
	StringGrid1->Cells[2][1]="X";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	StringGrid1->Cells[0][1]="X";
	StringGrid1->Cells[0][2]="X";
	StringGrid1->Cells[0][3]="X";
	StringGrid1->Cells[1][0]="X";
	StringGrid1->Cells[1][1]="X";
	StringGrid1->Cells[1][2]="X";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	StringGrid1->Cells[0][0]="X";
	StringGrid1->Cells[0][1]="X";
	StringGrid1->Cells[0][2]="X";
	StringGrid1->Cells[1][0]="X";
	StringGrid1->Cells[2][1]="X";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	StringGrid1->Cells[1][1]="X";
	StringGrid1->Cells[2][1]="X";
	StringGrid1->Cells[2][2]="X";
	StringGrid1->Cells[1][2]="X";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	delay(1);
    Button9->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
		for(ix=0; ix<30; ix++)
		{
			for(iy=0; iy<30; iy++)
			{
				vivos=0;

				if(ix>=30-1)
					ixd=0;
				else
					ixd=ix+1;

				if(iy>=30-1)
					iyi=0;
				else
					iyi=iy+1;

				if(ix<=0)
					ixe=30-1;
				else
					ixe=ix-1;

				if(iy<=0)
					iys=30-1;
				else
					iys=iy-1;
				if(StringGrid1->Cells[ixd][iy]=="X")    vivos++;
				if(StringGrid1->Cells[ixe][iy]=="X")    vivos++;
				if(StringGrid1->Cells[ix][iys]=="X")    vivos++;
				if(StringGrid1->Cells[ix][iyi]=="X")    vivos++;
				if(StringGrid1->Cells[ixd][iys]=="X")   vivos++;
				if(StringGrid1->Cells[ixe][iys]=="X")   vivos++;
				if(StringGrid1->Cells[ixd][iyi]=="X")   vivos++;
				if(StringGrid1->Cells[ixe][iyi]=="X")   vivos++;

				if(StringGrid1->Cells[ix][iy]=="X")
				{
					if(vivos<=1 || vivos>3)
					{
						StringGrid2->Cells[ix][iy]=' ';
					}
					else
					{
						StringGrid2->Cells[ix][iy]='X';
					}

				}else
				{
					if(vivos==3)
					{
						StringGrid2->Cells[ix][iy]='X';
					}
					else
					{

						StringGrid1->Cells[ix][iy]=' ';
					}
				}

			}

		}


		for(ix=0; ix<50; ix++)
		{
			for(iy=0; iy<50; iy++)
			{
				StringGrid1->Cells[ix][iy]=StringGrid2->Cells[ix][iy];
			}
		}

}
//---------------------------------------------------------------------------




