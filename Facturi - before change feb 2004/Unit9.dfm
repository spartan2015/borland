object msgmagazie: Tmsgmagazie
  Left = 195
  Top = 152
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'msgmagazie'
  ClientHeight = 194
  ClientWidth = 459
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
    Left = 32
    Top = 40
    Width = 148
    Height = 20
    Caption = 'Stoc (clasa 30) gasit:'
  end
  object Label2: TLabel
    Left = 192
    Top = 40
    Width = 55
    Height = 20
    Caption = 'Label2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 32
    Top = 64
    Width = 274
    Height = 20
    Caption = 'Au fost adaugate automat in magazie !'
  end
  object Label4: TLabel
    Left = 32
    Top = 88
    Width = 138
    Height = 20
    Caption = 'Doriti sa vizualizati?'
  end
  object Button1: TButton
    Left = 64
    Top = 144
    Width = 75
    Height = 25
    Caption = 'Da'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 320
    Top = 144
    Width = 75
    Height = 25
    Caption = 'Nu'
    TabOrder = 1
    OnClick = Button2Click
  end
end
