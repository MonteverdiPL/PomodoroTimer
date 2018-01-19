//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdlib.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPomodoroMonteverdi *PomodoroMonteverdi;

        int s = 10;
        int p = 10;
        int sesja, ilosc_sesji, dl_pracy, wartosc_pauzy;
        int wartosc_restartu_pracy, wartosc_restartu_pauzy;
        int godzina, minuta, sekunda;

        bool czy_teraz_przerwa = true;
        AnsiString godz, min, sek;

//---------------------------------------------------------------------------
__fastcall TPomodoroMonteverdi::TPomodoroMonteverdi(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TPomodoroMonteverdi::timerTimer(TObject *Sender)
{

        s--;                                                //co sekunde zmniejszamy liczbe sekund
        
        godzina = s/3600;
        godz = IntToStr(godzina);
                if (godzina < 10)                               //konwersja czasu fo formatu 0x
                {
                        godz = "0"+godz;
                }
        minuta  = (s - godzina * 3600)/60;
        min = IntToStr(minuta);
                if (minuta < 10)                               //konwersja czasu fo formatu 0x
                {
                        min = "0"+min;
                }

        sekunda = s - godzina*3600- minuta*60;
        sek = IntToStr(sekunda);
                if (sekunda < 10)                               //konwersja czasu fo formatu 0x
                {
                        sek = "0"+sek;
                }

        czas->Caption = godz+":"+min+":"+sek;              //Wyswietlanie czasu

                if (s == 0 && czy_teraz_przerwa == false)     //zmiana z czasu przerwy na pracy
                {
                        s = dl_pracy;
                        czy_teraz_przerwa = true;

                }
                if (s == 0 && czy_teraz_przerwa == true)       //zmiana czasu z pracy do przerwy
                {
                        sesja++;
                        s = wartosc_pauzy;
                        czy_teraz_przerwa = false;
                }


                if(sesja == ilosc_sesji)                    //zegar sie zatrzymuje jak skoncza sie sesje
                {
                        czas->Caption = "Przerwa";
                        czy_teraz_przerwa = true;
                        Button8->Visible = false;
                        timer->Enabled=false;
                        sesja = 0;
                        Button1->Caption = "Start";
                }
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::FormCreate(TObject *Sender)
{
        timer->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button1Click(TObject *Sender)
{
        if (Button1->Caption == "Start")              //wlaczanie czasu
                {
                timer->Enabled=true;
                Button8->Visible = true;
                Button8->Caption = "Pauza";
                Button1->Caption= "Stop";            //zmiana napisu na guziku inicjalizujacym
                }
        else if  (Button1->Caption == "Stop")
                {
                timer->Enabled=false;
                Button1->Caption= "Start";
                Button8->Caption = "Wznów";
                }
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button2Click(TObject *Sender)
{
        dl_pracy=60*15+1;                       //ustalenie ile trwa praca
        s = dl_pracy;                           //liczba sekund przyjmuje wartosc dlugosci pracy
        wartosc_restartu_pracy = s;             //jak resetujemy zegar to wraca do wartosci trwania pracy
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button3Click(TObject *Sender)
{
       dl_pracy=60*20+1;
       s = dl_pracy;
       wartosc_restartu_pracy = s;
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button4Click(TObject *Sender)
{
        dl_pracy=60*25+1;
        s = dl_pracy;
        wartosc_restartu_pracy = s;
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button6Click(TObject *Sender)
{
        wartosc_pauzy=8*60+1;
        wartosc_restartu_pauzy = wartosc_pauzy;
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button5Click(TObject *Sender)
{
          wartosc_pauzy=5*60+1;
          wartosc_restartu_pauzy = wartosc_pauzy;
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button7Click(TObject *Sender)
{
        if(czy_teraz_przerwa == true)s = wartosc_restartu_pracy;
        if(czy_teraz_przerwa == false)s = wartosc_restartu_pauzy;
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button8Click(TObject *Sender)
{
        if(Button8->Caption == "Pauza")
        {
                Button8->Caption = "Wznów";
                Button1->Caption = "Start";
                timer->Enabled=false;
                
        }
        else if(Button8->Caption == "Wznów")
        {
                Button8->Caption = "Pauza";
                Button1->Caption = "Stop";
                timer->Enabled=true;

        }

        else if (Button8->Caption == "Zakoñcz przerwe")
        {
                Button1->Caption = "Start";
                Button8->Caption = "Pauza";
        }
}
//---------------------------------------------------------------------------


void __fastcall TPomodoroMonteverdi::Button9Click(TObject *Sender)
{
        ilosc_sesji = 2;                         //ilosc czasów pracy
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button10Click(TObject *Sender)
{
        ilosc_sesji = 3; 
}
//---------------------------------------------------------------------------

void __fastcall TPomodoroMonteverdi::Button11Click(TObject *Sender)
{
        ilosc_sesji = 4;
}
//---------------------------------------------------------------------------


