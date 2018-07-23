object Form1: TForm1
  Left = 192
  Top = 107
  Width = 821
  Height = 532
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 20
  object Label115: TLabel
    Left = 96
    Top = 24
    Width = 33
    Height = 20
    Caption = 'Intre'
  end
  object Label100: TLabel
    Left = 40
    Top = 0
    Width = 156
    Height = 18
    Caption = 'Setari sporuri vechime'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label116: TLabel
    Left = 240
    Top = 24
    Width = 14
    Height = 20
    Caption = '%'
  end
  object Label101: TLabel
    Left = 352
    Top = 16
    Width = 129
    Height = 18
    Caption = 'Deducere de baza'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label102: TLabel
    Left = 488
    Top = 16
    Width = 129
    Height = 20
    Caption = 'Cota maxima CAS'
  end
  object Label109: TLabel
    Left = 520
    Top = 184
    Width = 111
    Height = 20
    Caption = 'Cote impozitare'
  end
  object Label103: TLabel
    Left = 128
    Top = 184
    Width = 159
    Height = 20
    Caption = 'Deduceri suplimentare'
  end
  object Label104: TLabel
    Left = 8
    Top = 232
    Width = 74
    Height = 20
    Caption = '1. Pt. sotie'
  end
  object Label105: TLabel
    Left = 8
    Top = 256
    Width = 126
    Height = 20
    Caption = '2. Pt. Primii 2 copii'
  end
  object Label106: TLabel
    Left = 8
    Top = 280
    Width = 227
    Height = 20
    Caption = '3. Pt. fiecare din urmatorii 2 copii'
  end
  object Label107: TLabel
    Left = 8
    Top = 304
    Width = 194
    Height = 20
    Caption = '4. Pt. pers. handicapate gr.I'
  end
  object Label108: TLabel
    Left = 8
    Top = 328
    Width = 199
    Height = 20
    Caption = '5. Pt. pers. handicapate gr.II'
  end
  object Label110: TLabel
    Left = 368
    Top = 232
    Width = 13
    Height = 20
    Caption = '1.'
  end
  object Label111: TLabel
    Left = 368
    Top = 256
    Width = 13
    Height = 20
    Caption = '2.'
  end
  object Label112: TLabel
    Left = 368
    Top = 280
    Width = 13
    Height = 20
    Caption = '3.'
  end
  object Label113: TLabel
    Left = 368
    Top = 304
    Width = 13
    Height = 20
    Caption = '4.'
  end
  object Label114: TLabel
    Left = 368
    Top = 328
    Width = 13
    Height = 20
    Caption = '5.'
  end
  object Label126: TLabel
    Left = 8
    Top = 376
    Width = 33
    Height = 20
    Caption = 'CAS'
  end
  object Label127: TLabel
    Left = 8
    Top = 400
    Width = 72
    Height = 20
    Caption = 'CAS firma'
  end
  object Label132: TLabel
    Left = 8
    Top = 424
    Width = 155
    Height = 20
    Caption = 'Cheltuieli profesionale'
  end
  object Label165: TLabel
    Left = 248
    Top = 376
    Width = 49
    Height = 20
    Caption = 'CAS D'
  end
  object Label166: TLabel
    Left = 248
    Top = 400
    Width = 48
    Height = 20
    Caption = 'CAS S'
  end
  object Label128: TLabel
    Left = 400
    Top = 368
    Width = 45
    Height = 20
    Caption = 'Somaj'
  end
  object Label129: TLabel
    Left = 400
    Top = 392
    Width = 84
    Height = 20
    Caption = 'Somaj firma'
  end
  object Label130: TLabel
    Left = 592
    Top = 368
    Width = 66
    Height = 20
    Caption = 'Sanatate'
  end
  object Label131: TLabel
    Left = 592
    Top = 392
    Width = 105
    Height = 20
    Caption = 'Sanatate firma'
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 40
    Width = 320
    Height = 120
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DBEdit85: TDBEdit
    Left = 352
    Top = 40
    Width = 129
    Height = 26
    DataField = 'D_baza'
    TabOrder = 1
  end
  object DBEdit86: TDBEdit
    Left = 488
    Top = 40
    Width = 129
    Height = 26
    DataField = 'Cota_cas'
    TabOrder = 2
  end
  object DBGrid3: TDBGrid
    Left = 240
    Top = 208
    Width = 113
    Height = 153
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DBGrid4: TDBGrid
    Left = 384
    Top = 208
    Width = 401
    Height = 153
    TabOrder = 4
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DBEdit78: TDBEdit
    Left = 168
    Top = 416
    Width = 73
    Height = 26
    DataField = 'cheltuieli_profesionale'
    TabOrder = 5
  end
  object DBEdit77: TDBEdit
    Left = 168
    Top = 392
    Width = 73
    Height = 26
    DataField = 'cas_firma'
    TabOrder = 6
  end
  object DBEdit76: TDBEdit
    Left = 168
    Top = 368
    Width = 73
    Height = 26
    DataField = 'cas'
    TabOrder = 7
  end
  object DBEdit99: TDBEdit
    Left = 304
    Top = 392
    Width = 81
    Height = 26
    DataField = 'cas_s'
    TabOrder = 8
  end
  object DBEdit98: TDBEdit
    Left = 304
    Top = 368
    Width = 81
    Height = 26
    DataField = 'cas_d'
    TabOrder = 9
  end
  object DBEdit80: TDBEdit
    Left = 496
    Top = 392
    Width = 81
    Height = 26
    DataField = 'somaj_firma'
    TabOrder = 10
  end
  object DBEdit79: TDBEdit
    Left = 496
    Top = 368
    Width = 81
    Height = 26
    DataField = 'somaj'
    TabOrder = 11
  end
  object DBEdit81: TDBEdit
    Left = 696
    Top = 368
    Width = 89
    Height = 26
    DataField = 'sanatate'
    TabOrder = 12
  end
  object DBEdit82: TDBEdit
    Left = 696
    Top = 392
    Width = 89
    Height = 26
    DataField = 'sanatate_firma'
    TabOrder = 13
  end
  object Button28: TButton
    Left = 616
    Top = 432
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 14
  end
  object Button29: TButton
    Left = 712
    Top = 432
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 15
  end
end
