object Form1: TForm1
  Left = 194
  Top = 107
  Width = 814
  Height = 461
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
  object DBGrid1: TDBGrid
    Left = 8
    Top = 16
    Width = 673
    Height = 120
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 136
    Width = 240
    Height = 25
    TabOrder = 1
  end
  object DBGrid2: TDBGrid
    Left = 8
    Top = 168
    Width = 681
    Height = 120
    DataSource = DataSource2
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 8
    Top = 304
    Width = 75
    Height = 25
    Caption = 'Raport M/D'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Table1: TTable
    Active = True
    DatabaseName = 'BCDEMOS'
    TableName = 'customer.db'
    Left = 696
    Top = 48
  end
  object Table2: TTable
    Active = True
    DatabaseName = 'BCDEMOS'
    IndexName = 'CustNo'
    MasterFields = 'CustNo'
    MasterSource = DataSource1
    TableName = 'orders.db'
    Left = 736
    Top = 48
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 696
    Top = 16
  end
  object DataSource2: TDataSource
    DataSet = Table2
    Left = 736
    Top = 16
  end
end
