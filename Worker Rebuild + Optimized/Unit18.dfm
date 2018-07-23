object automatizare: Tautomatizare
  Left = 332
  Top = 264
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Automatizare'
  ClientHeight = 165
  ClientWidth = 460
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 20
  object Label1: TLabel
    Left = 48
    Top = 8
    Width = 48
    Height = 20
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 16
    Top = 40
    Width = 20
    Height = 20
    Caption = 'An'
  end
  object Label3: TLabel
    Left = 16
    Top = 64
    Width = 36
    Height = 20
    Caption = 'Luna'
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 146
    Width = 460
    Height = 19
    Panels = <>
    SimplePanel = False
  end
  object Button1: TButton
    Left = 120
    Top = 112
    Width = 89
    Height = 25
    Caption = 'Proceseaza'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 264
    Top = 112
    Width = 97
    Height = 25
    Caption = 'Inapoi'
    TabOrder = 2
    OnClick = Button2Click
  end
  object ComboBox1: TComboBox
    Left = 64
    Top = 32
    Width = 185
    Height = 28
    ItemHeight = 20
    TabOrder = 3
    Items.Strings = (
      '2003'
      '2004'
      '2005'
      '2006')
  end
  object ComboBox2: TComboBox
    Left = 64
    Top = 64
    Width = 185
    Height = 28
    ItemHeight = 20
    TabOrder = 4
    Items.Strings = (
      'ianuarie'
      'februarie'
      'martie'
      'aprilie'
      'mai'
      'iunie'
      'iulie'
      'august'
      'septembrie'
      'octombrie'
      'noiembrie'
      'decembrie')
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 424
    Top = 8
  end
end
