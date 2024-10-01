//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit19.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "FiveLesson.h"

TForm19 *Form19;
//---------------------------------------------------------------------------
__fastcall TForm19::TForm19(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//void __fastcall TForm1::N4Click(TObject *Sender)
//{
//	TForm2 *form = new TForm2(this);
//	form->Show();
//}
////---------------------------------------------------------------------------
//
//void __fastcall TForm1::N5Click(TObject *Sender)
//{
//	TForm3 *form = new TForm3(this);
//	form->Show();
//}
////---------------------------------------------------------------------------
//
//void __fastcall TForm1::N6Click(TObject *Sender)
//{
//	TForm4 *form = new TForm4(this);
//	form->Show();
//}
////---------------------------------------------------------------------------
//
//void __fastcall TForm1::N7Click(TObject *Sender)
//{
//	TForm5 *form = new TForm5(this);
//	form->Show();
//}
void __fastcall TForm19::Button1Click(TObject *Sender)
{
    Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm19::Button2Click(TObject *Sender)
{
    Form3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm19::Button3Click(TObject *Sender)
{
    Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm19::Button5Click(TObject *Sender)
{
	Form5->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm19::Button4Click(TObject *Sender)
{
    Form9->Show();
}
//---------------------------------------------------------------------------
