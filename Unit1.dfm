object PomodoroMonteverdi: TPomodoroMonteverdi
  Left = 1723
  Top = 351
  Width = 402
  Height = 245
  Caption = 'PomodoroMonteverdi'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object czas: TLabel
    Left = 24
    Top = 40
    Width = 137
    Height = 37
    Alignment = taCenter
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Text1: TLabel
    Left = 184
    Top = 48
    Width = 101
    Height = 20
    Caption = 'D'#322'ugo'#347#263' sesji'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 184
    Top = 112
    Width = 125
    Height = 20
    Caption = 'D'#322'ugo'#347#263' przerwy'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 184
    Top = 80
    Width = 74
    Height = 20
    Caption = 'Ilosc sesji'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 184
    Top = 152
    Width = 89
    Height = 33
    Caption = 'Start'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 288
    Top = 48
    Width = 25
    Height = 25
    Caption = '15'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 320
    Top = 48
    Width = 25
    Height = 25
    Caption = '20'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 352
    Top = 48
    Width = 25
    Height = 25
    Caption = '25'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 312
    Top = 112
    Width = 25
    Height = 25
    Caption = '5'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 344
    Top = 112
    Width = 25
    Height = 25
    Caption = '8'
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 280
    Top = 152
    Width = 89
    Height = 33
    Caption = 'Restart'
    TabOrder = 6
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 32
    Top = 88
    Width = 107
    Height = 25
    Caption = 'Pauza'
    TabOrder = 7
    Visible = False
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 288
    Top = 80
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 8
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 320
    Top = 80
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 9
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 352
    Top = 80
    Width = 25
    Height = 25
    Caption = '4'
    TabOrder = 10
    OnClick = Button11Click
  end
  object timer: TTimer
    Interval = 1
    OnTimer = timerTimer
    Left = 352
    Top = 16
  end
end
