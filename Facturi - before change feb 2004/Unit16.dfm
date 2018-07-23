object registrucasa: Tregistrucasa
  Left = 233
  Top = 357
  BorderIcons = [biMinimize]
  BorderStyle = bsSingle
  Caption = 'Registru Casa'
  ClientHeight = 160
  ClientWidth = 522
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
  object RadioGroup1: TRadioGroup
    Left = 0
    Top = 8
    Width = 425
    Height = 81
    Caption = 'Rapoarte:'
    Items.Strings = (
      'registru casa grupat pe zile'
      'registru casa simplu')
    TabOrder = 0
  end
  object Button1: TButton
    Left = 112
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Print'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 304
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Inapoi'
    TabOrder = 2
    OnClick = Button2Click
  end
end
