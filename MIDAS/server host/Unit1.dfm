object Form1: TForm1
  Left = 392
  Top = 147
  Width = 402
  Height = 162
  Caption = 'Server host'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DataSetProvider1: TDataSetProvider
    DataSet = Table1
    Constraints = True
    Left = 360
    Top = 96
  end
  object Table1: TTable
    TableName = 'neo.DB'
    Left = 328
    Top = 96
  end
end
