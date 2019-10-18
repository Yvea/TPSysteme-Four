//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "PCI9111.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	maCarte = new(PCI9111);
	ID_Card = -1;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::btnInitialisationCarteClick(TObject *Sender)
{
	ID_Card = maCarte->Initialisation();
	
	if(ID_Card == -1)
	{
		Label1->Color = clRed;
	}
	else
	{
		Label1->Color = clGreen;
	}
	
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
 	float Tension_lu = maCarte->Acquisition();
 	Edit1->Text=Tension_lu;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::EcritureClick(TObject *Sender)
{
	maCarte->Ecriture(Edit2->Text.ToDouble());
}
//---------------------------------------------------------------------------

