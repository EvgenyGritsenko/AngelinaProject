//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit15.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm15 *Form15;
//---------------------------------------------------------------------------
__fastcall TForm15::TForm15(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm15::Button1Click(TObject *Sender)
{
	if (Edit1->Text.IsEmpty() || Edit2->Text.IsEmpty() || Edit3->Text.IsEmpty())
	{
		ShowMessage("Пожалуйста, заполните все поля");
		return;
	}

	try
	{
		UnicodeString input = Edit1->Text;
		int start = StrToInt(Edit2->Text);
		int length = StrToInt(Edit3->Text);

		UnicodeString substring = input.SubString(start, length);
		Label1->Caption = "Подстрока: " + substring;
	}
	catch (...)
	{
		ShowMessage("Ошибка ввода: проверьте правильность данных");
	}
}
//---------------------------------------------------------------------------
