//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TPomodoroMonteverdi : public TForm
{
__published:	// IDE-managed Components
        TLabel *czas;
        TTimer *timer;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TLabel *Text1;
        TLabel *Label1;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TButton *Button8;
        TLabel *Label2;
        TButton *Button9;
        TButton *Button10;
        TButton *Button11;
        void __fastcall timerTimer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPomodoroMonteverdi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPomodoroMonteverdi *PomodoroMonteverdi;
//---------------------------------------------------------------------------
#endif
