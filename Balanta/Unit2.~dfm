object dm1: Tdm1
  OldCreateOrder = False
  Left = 244
  Top = 172
  Height = 505
  Width = 782
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 16
    Top = 8
  end
  object Table1: TTable
    DatabaseName = 'data\'
    TableName = 'evidenta_bilant.DB'
    Left = 16
    Top = 56
    object Table1an: TIntegerField
      FieldName = 'an'
    end
    object Table1luna: TStringField
      FieldName = 'luna'
      Size = 12
    end
  end
  object DataSource2: TDataSource
    DataSet = Table2
    Left = 88
    Top = 8
  end
  object Table2: TTable
    DatabaseName = 'data\'
    Left = 88
    Top = 56
    object Table2Nr_crt: TIntegerField
      FieldName = 'Nr_crt'
    end
    object Table2Data_inregistrare: TDateField
      FieldName = 'Data_inregistrare'
    end
    object Table2Explicatii: TStringField
      FieldName = 'Explicatii'
      Size = 25
    end
    object Table2Simbol_debit: TStringField
      FieldName = 'Simbol_debit'
      Size = 12
    end
    object Table2Simbol_credit: TStringField
      FieldName = 'Simbol_credit'
      Size = 12
    end
    object Table2Sume_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Sume_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table2Sume_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Sume_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
  end
  object DataSource3: TDataSource
    DataSet = Table3
    Left = 152
    Top = 8
  end
  object Table3: TTable
    DatabaseName = 'data\'
    Filtered = True
    IndexDefs = <
      item
        Name = 'Table3Index1'
        Fields = 'Cont'
        Options = [ixPrimary]
      end
      item
        Name = 'Table3Index2'
        Fields = 'io'
        Options = [ixCaseInsensitive]
      end>
    StoreDefs = True
    TableName = 'bilant2003august.DB'
    Left = 152
    Top = 56
    object Table3Cont: TStringField
      FieldName = 'Cont'
      Size = 10
    end
    object Table3Denumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object Table3Debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3Credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3sold_initial_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_initial_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3sold_initial_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_initial_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3rulaj_cumulat_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'rulaj_cumulat_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3rulaj_cumulat_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'rulaj_cumulat_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3total_sume_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_sume_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3total_sume_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_sume_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3sold_final_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_final_debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3sold_final_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_final_credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table3io: TBooleanField
      FieldName = 'io'
    end
  end
  object DataSource4: TDataSource
    DataSet = Table4
    Left = 16
    Top = 112
  end
  object DataSource5: TDataSource
    DataSet = Table5
    Left = 16
    Top = 216
  end
  object BatchMove1: TBatchMove
    Destination = Table5
    Mappings.Strings = (
      'Cont=Cont'
      'Denumire=Denumire'
      'Debit=sold_final_debit'
      'Credit=sold_final_credit')
    Source = Table3
    Transliterate = False
    Left = 16
    Top = 328
  end
  object DataSource6: TDataSource
    DataSet = Table6
    Left = 88
    Top = 216
  end
  object DataSource7: TDataSource
    DataSet = Table7
    Left = 160
    Top = 216
  end
  object Table8: TTable
    TableName = 'b2003iulieSCzTehnofarmzBurduhoszSRL.DB'
    Left = 288
    Top = 272
    object Table8Cont: TStringField
      FieldName = 'Cont'
      Size = 10
    end
    object Table8Denumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object Table8Debit: TFloatField
      FieldName = 'Debit'
    end
    object Table8Credit: TFloatField
      FieldName = 'Credit'
    end
    object Table8sold_initial_debit: TFloatField
      FieldName = 'sold_initial_debit'
    end
    object Table8sold_initial_credit: TFloatField
      FieldName = 'sold_initial_credit'
    end
    object Table8rulaj_cumulat_debit: TFloatField
      FieldName = 'rulaj_cumulat_debit'
    end
    object Table8rulaj_cumulat_credit: TFloatField
      FieldName = 'rulaj_cumulat_credit'
    end
    object Table8total_sume_debit: TFloatField
      FieldName = 'total_sume_debit'
    end
    object Table8total_sume_credit: TFloatField
      FieldName = 'total_sume_credit'
    end
    object Table8sold_final_debit: TFloatField
      FieldName = 'sold_final_debit'
    end
    object Table8sold_final_credit: TFloatField
      FieldName = 'sold_final_credit'
    end
  end
  object DataSource8: TDataSource
    DataSet = Table8
    Left = 288
    Top = 224
  end
  object DataSource9: TDataSource
    DataSet = stcont
    Left = 288
    Top = 72
  end
  object stcont: TTable
    DatabaseName = 'd:\'
    FieldDefs = <
      item
        Name = 'cont'
        DataType = ftString
        Size = 15
      end
      item
        Name = 'stare'
        DataType = ftBoolean
      end>
    IndexDefs = <
      item
        Name = 'stcontIndex2'
        Fields = 'cont'
        Options = [ixPrimary]
      end>
    StoreDefs = True
    TableName = 'stcont'
    Left = 288
    Top = 128
    object stcontcont: TStringField
      FieldName = 'cont'
      Size = 15
    end
    object stcontstare: TBooleanField
      FieldName = 'stare'
    end
  end
  object sah: TTable
    DatabaseName = 'data\'
    TableName = 'sah'
    Left = 136
    Top = 328
    object sahan: TIntegerField
      FieldName = 'an'
    end
    object sahluna: TStringField
      FieldName = 'luna'
    end
    object sahcont: TStringField
      FieldName = 'cont'
      Size = 10
    end
    object sahdb: TStringField
      FieldName = 'db'
    end
    object sahsuma: TFloatField
      DefaultExpression = '0'
      FieldName = 'suma'
      DisplayFormat = '###,###,###,##0.#'
    end
  end
  object Table4: TTable
    DatabaseName = 'data\dat\'
    IndexDefs = <
      item
        Name = 'Table4Index1'
        Fields = 'Simbol'
        Options = [ixPrimary, ixUnique]
      end>
    StoreDefs = True
    TableName = 'plan_conturi.DB'
    Left = 16
    Top = 160
    object Table4Simbol: TStringField
      FieldName = 'Simbol'
      Size = 10
    end
    object Table4Denumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object Table4Tip: TStringField
      FieldName = 'Tip'
      Size = 1
    end
    object Table4Analitic: TStringField
      FieldName = 'Analitic'
      Size = 2
    end
    object Table4Sintetic: TStringField
      FieldName = 'Sintetic'
      Size = 2
    end
    object Table4Conturi_debitoare: TMemoField
      FieldName = 'Conturi_debitoare'
      BlobType = ftMemo
      Size = 1
    end
    object Table4Conturi_creditoare: TMemoField
      FieldName = 'Conturi_creditoare'
      BlobType = ftMemo
      Size = 1
    end
    object Table4io: TBooleanField
      FieldName = 'io'
    end
  end
  object Table5: TTable
    IndexDefs = <
      item
        Name = 'Table5Index1'
        Fields = 'Cont'
        Options = [ixPrimary, ixUnique]
      end>
    StoreDefs = True
    TableName = 'sold_initial'
    Left = 16
    Top = 272
    object Table5Cont: TStringField
      FieldName = 'Cont'
      Size = 10
    end
    object Table5Denumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object Table5Debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table5Credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table5io: TBooleanField
      FieldName = 'io'
    end
  end
  object Table6: TTable
    IndexDefs = <
      item
        Name = 'Table6Index1'
        Fields = 'Cont'
        Options = [ixPrimary, ixUnique]
      end>
    StoreDefs = True
    TableName = 'rulaj_cumulat'
    Left = 88
    Top = 272
    object Table6Cont: TStringField
      FieldName = 'Cont'
      Size = 10
    end
    object Table6Denumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object Table6Debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Debit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table6Credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Credit'
      DisplayFormat = '###,###,###,###,##0.##'
    end
    object Table6io: TBooleanField
      FieldName = 'io'
    end
  end
  object Table7: TTable
    Active = True
    DatabaseName = 'data\'
    FieldDefs = <
      item
        Name = 'Nume_firma'
        DataType = ftString
        Size = 60
      end
      item
        Name = 'Fisc'
        DataType = ftFloat
      end
      item
        Name = 'J'
        DataType = ftString
        Size = 12
      end
      item
        Name = 'Banca_1'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Filiala_1'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Cont_banca_1'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Banca_2'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Filiala_2'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Cont_banca_2'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Telefon_firma'
        DataType = ftFloat
      end
      item
        Name = 'Adresa_firma'
        DataType = ftMemo
        Size = 1
      end
      item
        Name = 'e_mail_firma'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Functia_pers_raport'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Nume_pers_raport'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'Cnp_angajator'
        DataType = ftFloat
      end>
    StoreDefs = True
    TableName = 'raluca'
    Left = 160
    Top = 272
    object Table7Nume_firma: TStringField
      FieldName = 'Nume_firma'
      Size = 60
    end
    object Table7Fisc: TFloatField
      FieldName = 'Fisc'
    end
    object Table7J: TStringField
      FieldName = 'J'
      Size = 12
    end
    object Table7Banca_1: TStringField
      FieldName = 'Banca_1'
      Size = 30
    end
    object Table7Filiala_1: TStringField
      FieldName = 'Filiala_1'
      Size = 30
    end
    object Table7Cont_banca_1: TStringField
      FieldName = 'Cont_banca_1'
      Size = 30
    end
    object Table7Banca_2: TStringField
      FieldName = 'Banca_2'
      Size = 30
    end
    object Table7Filiala_2: TStringField
      FieldName = 'Filiala_2'
      Size = 30
    end
    object Table7Cont_banca_2: TStringField
      FieldName = 'Cont_banca_2'
      Size = 30
    end
    object Table7Telefon_firma: TFloatField
      FieldName = 'Telefon_firma'
    end
    object Table7Adresa_firma: TMemoField
      FieldName = 'Adresa_firma'
      BlobType = ftMemo
      Size = 1
    end
    object Table7e_mail_firma: TStringField
      FieldName = 'e_mail_firma'
      Size = 30
    end
    object Table7Functia_pers_raport: TStringField
      FieldName = 'Functia_pers_raport'
      Size = 30
    end
    object Table7Nume_pers_raport: TStringField
      FieldName = 'Nume_pers_raport'
      Size = 30
    end
    object Table7Cnp_angajator: TFloatField
      FieldName = 'Cnp_angajator'
    end
  end
end
