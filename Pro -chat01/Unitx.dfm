object Form2: TForm2
  Left = 338
  Top = 164
  BorderStyle = bsDialog
  Caption = 'About'
  ClientHeight = 285
  ClientWidth = 373
  Color = clBtnText
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 96
    Top = 24
    Width = 184
    Height = 24
    Caption = 'Program created by'
    Color = clMenuText
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindow
    Font.Height = -21
    Font.Name = 'Arial'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 0
    Top = 64
    Width = 369
    Height = 100
    Caption = 'ThE NeO'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindow
    Font.Height = -89
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 144
    Top = 224
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'OK'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNone
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Pitch = fpFixed
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
end
