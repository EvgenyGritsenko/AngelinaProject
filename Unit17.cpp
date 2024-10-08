//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit17.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm17 *Form17;
//---------------------------------------------------------------------------

// ������������� ������ ��������
std::vector<Question> questions = {
	{"����� ����� � C++ Builder ������������ ��� ������ �� ��������?", {"TString", "TForm", "TMemo"}, 0},
	{"����� ����� ������ TStringList ��������� ����� ������ � ������?", {"Add()", "Insert()", "Append()"}, 0},
	{"��� �������� ����� ������ � C++ Builder?", {"Length()", "size()", "strlen()"}, 0},
	{"����� ��������� ������������ ��� ����� � ������ �������������� ������?", {"TEdit", "TMemo", "TListBox"}, 1},
	{"����� ������� ����� �������� ������ � TStringList?", {"Clear()", "Delete()", "Erase()"}, 0},
	{"��� ���������������� ��� ������ � C++ Builder?", {"+", "&", "concat()"}, 0},
	{"����� ����� ������ TStringList ������� ������ �� �������?", {"Remove()", "Delete()", "Erase()"}, 1},
	{"��� ������������� ������ � ������� �������?", {"UpperCase()", "ToUpper()", "Upper()"}, 0},
	{"����� ����� ���� ��������� � ������?", {"Search()", "Pos()", "Find()"}, 1},
	{"��� ������� ��������� �� ������?", {"Copy()", "Extract()", "Substring()"}, 0},
};

int currentQuestionIndex = 0;  // ����������� ����������
int score = 0;

void __fastcall TForm17::ShowQuestion(int index) {
	if (index < static_cast<int>(questions.size())) {
		Label1->Caption = questions[index].question;
		RadioGroup1->Items->Clear();
		for (const auto &option : questions[index].options) {
			RadioGroup1->Items->Add(option);
		}
		RadioGroup1->ItemIndex = -1;
	} else {
		ShowMessage("���� ��������. ��� ���������: " + IntToStr(static_cast<int>(score)) + " �� " + IntToStr(static_cast<int>(questions.size())));
		Close();
	}
}

__fastcall TForm17::TForm17(TComponent* Owner)
	: TForm(Owner)
{
    ShowQuestion(0);
}

void __fastcall TForm17::Button1Click(TObject *Sender)
{
	if (RadioGroup1->ItemIndex == questions[currentQuestionIndex].correctAnswerIndex) {
		score++;
	}
	currentQuestionIndex++;
	ShowQuestion(currentQuestionIndex);
}

void __fastcall TForm17::FormShow(TObject *Sender)
{
	ShowQuestion(0);
}
//---------------------------------------------------------------------------
