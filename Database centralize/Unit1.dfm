object Form1: TForm1
  Left = 229
  Top = 170
  Width = 696
  Height = 480
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
  object Button1: TButton
    Left = 48
    Top = 248
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 152
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Button2'
    TabOrder = 1
    OnClick = Button2Click
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 280
    Top = 40
  end
  object Table1: TTable
    DatabaseName = 'c:\manevra\sursa'
    TableName = 'angajati.DB'
    Left = 320
    Top = 40
  end
  object DataSource2: TDataSource
    Left = 288
    Top = 104
  end
  object BatchMove1: TBatchMove
    ChangedTableName = 'd:\paradox2.db'
    Destination = ang
    KeyViolTableName = 'd:\error002.db'
    Mappings.Strings = (
      'marca=marca'
      'nume=nume'
      'sectia=sectia'
      'functie=functie'
      'adresa=adresa'
      'buletin_identitate=buletin_identitate'
      'data_nastere=data_nastere'
      'data_inscriere=data_inscriere'
      'taxa_inscriere=taxa_inscriere'
      'telefon=telefon')
    Source = Table1
    Left = 280
    Top = 192
  end
  object ang: TTable
    DatabaseName = 'c:\manevra\destinatie'
    IndexDefs = <
      item
        Name = 'primary'
        Fields = 'marca'
        Options = [ixPrimary]
      end
      item
        Name = 'i1'
        Fields = 'nume'
        Options = [ixCaseInsensitive]
      end>
    StoreDefs = True
    TableName = 'angajati.DB'
    Left = 336
    Top = 104
    object angmarca: TIntegerField
      FieldName = 'marca'
    end
    object angnume: TStringField
      FieldName = 'nume'
      Size = 40
    end
    object angsectia: TStringField
      FieldName = 'sectia'
    end
    object angfunctie: TStringField
      FieldName = 'functie'
    end
    object angadresa: TStringField
      FieldName = 'adresa'
      Size = 80
    end
    object angbuletin_identitate: TStringField
      FieldName = 'buletin_identitate'
      Size = 30
    end
    object angdata_nastere: TDateField
      FieldName = 'data_nastere'
    end
    object angdata_inscriere: TDateField
      FieldName = 'data_inscriere'
    end
    object angtaxa_inscriere: TFloatField
      DefaultExpression = '0'
      FieldName = 'taxa_inscriere'
      DisplayFormat = '#,#'
    end
    object angtelefon: TIntegerField
      FieldName = 'telefon'
    end
  end
end
