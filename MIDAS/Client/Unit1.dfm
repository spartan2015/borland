object Form1: TForm1
  Left = 236
  Top = 178
  Width = 626
  Height = 272
  Caption = 'Client - NEO'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 8
    Top = 208
    Width = 75
    Height = 25
    Caption = 'Connect'
    TabOrder = 0
    OnClick = Button1Click
  end
  object ClientDataSet1: TClientDataSet
    Aggregates = <>
    Params = <>
    RemoteServer = DCOMConnection1
    Left = 8
    Top = 8
  end
  object DCOMConnection1: TDCOMConnection
    ServerGUID = '{8B5C479C-D558-4898-9B5C-4B3A0FC56E58}'
    ServerName = 'neo'
    ComputerName = 'Neo'
    Left = 72
    Top = 8
  end
  object DataSource1: TDataSource
    DataSet = ClientDataSet1
    Left = 40
    Top = 8
  end
end
