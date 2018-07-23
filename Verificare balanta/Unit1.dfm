object Form1: TForm1
  Left = 192
  Top = 107
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
    Left = 144
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Table1: TTable
    Active = True
    DatabaseName = 'd:\'
    TableName = 'b2003noiembrieSCzBigturzSRL.DB'
    Left = 128
    Top = 40
    object Table1Cont: TStringField
      FieldName = 'Cont'
      Size = 10
    end
    object Table1Denumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object Table1Debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1Credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1sold_initial_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_initial_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1sold_initial_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_initial_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1rulaj_cumulat_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'rulaj_cumulat_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1rulaj_cumulat_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'rulaj_cumulat_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1total_sume_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_sume_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1total_sume_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_sume_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1sold_final_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_final_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table1sold_final_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_final_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
  end
  object Table2: TTable
    Active = True
    DatabaseName = 'd:\'
    TableName = 'b2003decembrieSCzBigturzSRL.DB'
    Left = 208
    Top = 40
    object Table2Cont: TStringField
      FieldName = 'Cont'
      Size = 10
    end
    object Table2Denumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object Table2Debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2Credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2sold_initial_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_initial_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2sold_initial_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_initial_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2rulaj_cumulat_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'rulaj_cumulat_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2rulaj_cumulat_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'rulaj_cumulat_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2total_sume_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_sume_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2total_sume_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_sume_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2sold_final_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_final_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2sold_final_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_final_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
  end
end
