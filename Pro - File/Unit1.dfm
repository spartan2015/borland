object Form1: TForm1
  Left = 192
  Top = 107
  Width = 646
  Height = 385
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 625
    Height = 289
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 8
    Top = 304
    Width = 625
    Height = 21
    TabOrder = 1
    Text = 'Edit1'
    OnKeyDown = Edit1KeyDown
  end
  object Button1: TButton
    Left = 8
    Top = 328
    Width = 625
    Height = 25
    Caption = 'Button1'
    TabOrder = 2
    OnClick = Button1Click
  end
end
