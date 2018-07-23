object Form1: TForm1
  Left = 306
  Top = 275
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Demo - copiere... NEO Q Series'
  ClientHeight = 152
  ClientWidth = 403
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 20
  object Label1: TLabel
    Left = 24
    Top = 32
    Width = 29
    Height = 20
    Caption = 'File:'
  end
  object Label2: TLabel
    Left = 24
    Top = 56
    Width = 22
    Height = 20
    Caption = 'To:'
  end
  object cat: TCGauge
    Left = 8
    Top = 88
    Width = 385
    Height = 25
  end
  object Label3: TLabel
    Left = 8
    Top = 0
    Width = 4
    Height = 20
  end
  object Bevel1: TBevel
    Left = 1
    Top = 19
    Width = 401
    Height = 131
    Style = bsRaised
  end
  object Edit1: TEdit
    Left = 64
    Top = 24
    Width = 281
    Height = 28
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 64
    Top = 53
    Width = 281
    Height = 28
    TabOrder = 1
  end
  object Button1: TButton
    Left = 352
    Top = 24
    Width = 41
    Height = 25
    Caption = '...'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 160
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Copiere'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 352
    Top = 56
    Width = 41
    Height = 25
    Caption = '...'
    TabOrder = 4
    OnClick = Button3Click
  end
  object CheckBox1: TCheckBox
    Left = 224
    Top = 0
    Width = 33
    Height = 17
    Caption = 'A'
    TabOrder = 5
  end
  object CheckBox2: TCheckBox
    Left = 264
    Top = 0
    Width = 33
    Height = 17
    Caption = 'R'
    TabOrder = 6
  end
  object CheckBox3: TCheckBox
    Left = 304
    Top = 0
    Width = 41
    Height = 17
    Caption = 'H'
    TabOrder = 7
  end
  object CheckBox4: TCheckBox
    Left = 344
    Top = 0
    Width = 41
    Height = 17
    Caption = 'S'
    TabOrder = 8
  end
  object dialog1: TOpenDialog
    Top = 120
  end
end
