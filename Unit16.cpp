//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit16.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm16 *Form16;
//---------------------------------------------------------------------------
__fastcall TForm16::TForm16(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm16::Button1Click(TObject *Sender)
{
    if (Edit1->Text.IsEmpty() || Edit2->Text.IsEmpty())
    {
        ShowMessage("����������, ��������� �������� ������ � ������ ��� ������");
        return;
    }

    try
    {
        UnicodeString input = Edit1->Text;
        UnicodeString searchStr = Edit2->Text;
        UnicodeString replaceStr = Edit3->Text;

        // ������ ���������
        input = StringReplace(input, searchStr, replaceStr, TReplaceFlags() << rfReplaceAll);

		Label1->Caption = "���������: " + input;
        Label2->Caption = Edit1->Text;
    }
    catch (...)
    {
        ShowMessage("������ ��������� ������");
    }
}
//---------------------------------------------------------------------------
