//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit14.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm14 *Form14;
//---------------------------------------------------------------------------
__fastcall TForm14::TForm14(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm14::Button1Click(TObject *Sender)
{
    UnicodeString str1 = Edit1->Text;
    UnicodeString str2 = Edit2->Text;

    if (str1 == str2)
        Label1->Caption = "Строки равны";
    else
        Label1->Caption = "Строки не равны";
}
//---------------------------------------------------------------------------
