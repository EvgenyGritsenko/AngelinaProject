//---------------------------------------------------------------------------

#ifndef Unit17H
#define Unit17H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>  // Подключаем заголовок для std::vector
#include<Unit6.h>
//---------------------------------------------------------------------------

class TForm17 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TRadioGroup *RadioGroup1;
	TButton *Button1;

	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);

public:		// User declarations
	__fastcall TForm17(TComponent* Owner);
	void __fastcall ShowQuestion(int index);  // Объявление метода ShowQuestion
};

extern int currentQuestionIndex;
extern int score;
//---------------------------------------------------------------------------
extern PACKAGE TForm17 *Form17;
//---------------------------------------------------------------------------
#endif
