//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Include/dask.h"
#include "PCI9111.h"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *btnInitialisationCarte;
	TLabel *Label1;
	TButton *Button1;
	TEdit *Edit1;
	TButton *Ecriture;
	TEdit *Edit2;
	void __fastcall btnInitialisationCarteClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall EcritureClick(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);

	PCI9111 *maCarte;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
