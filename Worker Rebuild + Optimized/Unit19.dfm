object meter: Tmeter
  Left = 608
  Top = 72
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Progress...'
  ClientHeight = 101
  ClientWidth = 376
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object cc1: TCGauge
    Left = 8
    Top = 24
    Width = 361
    Height = 25
  end
  object cc2: TCGauge
    Left = 8
    Top = 56
    Width = 361
    Height = 25
  end
  object Label1: TLabel
    Left = 176
    Top = 8
    Width = 30
    Height = 13
    Caption = 'Status'
  end
end
