object mesajcasabanca: Tmesajcasabanca
  Left = 303
  Top = 279
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Mesaj'
  ClientHeight = 122
  ClientWidth = 403
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 20
  object Label1: TLabel
    Left = 8
    Top = 24
    Width = 132
    Height = 20
    Caption = 'Facturi in stans by:'
  end
  object Label2: TLabel
    Left = 8
    Top = 48
    Width = 120
    Height = 20
    Caption = 'Facturi verificate:'
  end
  object Label3: TLabel
    Left = 160
    Top = 24
    Width = 55
    Height = 20
    Caption = 'Label3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 160
    Top = 48
    Width = 55
    Height = 20
    Caption = 'Label4'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 176
    Top = 88
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 0
    OnClick = Button1Click
  end
end
