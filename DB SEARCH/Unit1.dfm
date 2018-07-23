object Form1: TForm1
  Left = 209
  Top = 152
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
  object Label1: TLabel
    Left = 408
    Top = 56
    Width = 32
    Height = 13
    Caption = 'Label1'
  end
  object ComboBox1: TComboBox
    Left = 184
    Top = 16
    Width = 145
    Height = 21
    ItemHeight = 13
    TabOrder = 0
    Text = 'ComboBox1'
    Items.Strings = (
      'Cod')
  end
  object Edit1: TEdit
    Left = 184
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit1'
  end
  object Button1: TButton
    Left = 184
    Top = 96
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 2
    OnClick = Button1Click
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 408
    Top = 160
  end
  object Table1: TTable
    Active = True
    DatabaseName = 'BCDEMOS'
    TableName = 'firma001.DB'
    Left = 448
    Top = 288
    object Table1Nume: TStringField
      FieldName = 'Nume'
      Size = 25
    end
    object Table1Cod: TStringField
      FieldName = 'Cod'
      Size = 15
    end
    object Table1Prenume: TStringField
      FieldName = 'Prenume'
      Size = 25
    end
    object Table1CNP: TFloatField
      FieldName = 'CNP'
    end
    object Table1Functia: TStringField
      FieldName = 'Functia'
      Size = 25
    end
    object Table1Cod_functie: TStringField
      FieldName = 'Cod_functie'
      Size = 25
    end
    object Table1Sectia: TStringField
      FieldName = 'Sectia'
      Size = 25
    end
    object Table1Marca: TStringField
      FieldName = 'Marca'
      Size = 25
    end
    object Table1Data_angajare: TDateField
      FieldName = 'Data_angajare'
    end
    object Table1Salar_tarifar: TFloatField
      FieldName = 'Salar_tarifar'
    end
    object Table1Prima: TFloatField
      FieldName = 'Prima'
    end
    object Table1Data_1angajare: TDateField
      FieldName = 'Data_1angajare'
    end
    object Table1Vechime: TIntegerField
      FieldName = 'Vechime'
    end
    object Table1Sporvechime: TBooleanField
      FieldName = 'Spor-vechime'
    end
    object Table1Regie: TBooleanField
      FieldName = 'Regie'
    end
    object Table1Sex: TStringField
      FieldName = 'Sex'
      Size = 1
    end
    object Table1Stare_civila: TStringField
      FieldName = 'Stare_civila'
    end
    object Table1Telefon: TFloatField
      FieldName = 'Telefon'
    end
    object Table1Adresa: TMemoField
      FieldName = 'Adresa'
      BlobType = ftMemo
      Size = 1
    end
    object Table1Datanastere: TDateField
      FieldName = 'Datanastere'
    end
    object Table1Stagiu_militar: TBooleanField
      FieldName = 'Stagiu_militar'
    end
    object Table1Livret_militar: TStringField
      FieldName = 'Livret_militar'
      Size = 25
    end
    object Table1Studii: TMemoField
      FieldName = 'Studii'
      BlobType = ftMemo
      Size = 1
    end
    object Table1Nr_copii: TIntegerField
      FieldName = 'Nr_copii'
    end
    object Table1Copii: TMemoField
      FieldName = 'Copii'
      BlobType = ftMemo
      Size = 1
    end
    object Table1pers_i: TBooleanField
      FieldName = 'pers_i'
    end
    object Table1pers_ii: TBooleanField
      FieldName = 'pers_ii'
    end
    object Table1sotie: TBooleanField
      FieldName = 'sotie'
    end
    object Table1Co_total: TIntegerField
      FieldName = 'Co_total'
    end
  end
end
