object dm: Tdm
  OldCreateOrder = False
  Left = 249
  Top = 203
  Height = 480
  Width = 696
  object DataSource1: TDataSource
    DataSet = firme
    Left = 24
    Top = 8
  end
  object firme: TTable
    Active = True
    DatabaseName = 'data\dat\'
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
      end
      item
        Name = 'capital_social'
        DataType = ftFloat
      end>
    StoreDefs = True
    TableName = 'raluca.DB'
    Left = 24
    Top = 56
    object firmeNume_firma: TStringField
      FieldName = 'Nume_firma'
      Size = 60
    end
    object firmeFisc: TFloatField
      FieldName = 'Fisc'
    end
    object firmeJ: TStringField
      FieldName = 'J'
      Size = 12
    end
    object firmeBanca_1: TStringField
      FieldName = 'Banca_1'
      Size = 30
    end
    object firmeFiliala_1: TStringField
      FieldName = 'Filiala_1'
      Size = 30
    end
    object firmeCont_banca_1: TStringField
      FieldName = 'Cont_banca_1'
      Size = 30
    end
    object firmeBanca_2: TStringField
      FieldName = 'Banca_2'
      Size = 30
    end
    object firmeFiliala_2: TStringField
      FieldName = 'Filiala_2'
      Size = 30
    end
    object firmeCont_banca_2: TStringField
      FieldName = 'Cont_banca_2'
      Size = 30
    end
    object firmeTelefon_firma: TFloatField
      FieldName = 'Telefon_firma'
    end
    object firmeAdresa_firma: TMemoField
      FieldName = 'Adresa_firma'
      BlobType = ftMemo
      Size = 1
    end
    object firmee_mail_firma: TStringField
      FieldName = 'e_mail_firma'
      Size = 30
    end
    object firmeFunctia_pers_raport: TStringField
      FieldName = 'Functia_pers_raport'
      Size = 30
    end
    object firmeNume_pers_raport: TStringField
      FieldName = 'Nume_pers_raport'
      Size = 30
    end
    object firmeCnp_angajator: TFloatField
      FieldName = 'Cnp_angajator'
    end
    object firmecapital_social: TFloatField
      DefaultExpression = '0'
      FieldName = 'capital_social'
      DisplayFormat = '###,###,###,##0'
    end
  end
  object DataSource2: TDataSource
    DataSet = ang
    Left = 96
    Top = 8
  end
  object DataSource3: TDataSource
    DataSet = fise
    Left = 168
    Top = 8
  end
  object DataSource4: TDataSource
    DataSet = central
    Left = 24
    Top = 112
  end
  object central: TTable
    DatabaseName = 'data\dat\'
    DefaultIndex = False
    FieldDefs = <
      item
        Name = 'marca'
        DataType = ftInteger
      end
      item
        Name = 'nume'
        DataType = ftString
        Size = 40
      end
      item
        Name = 'sectia'
        DataType = ftString
        Size = 20
      end
      item
        Name = 'functie'
        DataType = ftString
        Size = 20
      end
      item
        Name = 'buletin_identitate'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'dobanda_incasata'
        DataType = ftFloat
      end
      item
        Name = 'dobanda_sold'
        DataType = ftFloat
      end
      item
        Name = 'imprumut_debit'
        DataType = ftFloat
      end
      item
        Name = 'imprumut_credit'
        DataType = ftFloat
      end
      item
        Name = 'imprumut_sold'
        DataType = ftFloat
      end
      item
        Name = 'fs_debit'
        DataType = ftFloat
      end
      item
        Name = 'fs_credit'
        DataType = ftFloat
      end
      item
        Name = 'fs_sold'
        DataType = ftFloat
      end>
    IndexDefs = <
      item
        Name = 'centralIndex1'
        Fields = 'marca'
        Options = [ixPrimary, ixUnique]
      end
      item
        Name = 'Table1Index6'
        Fields = 'nume'
        Options = [ixCaseInsensitive]
      end>
    IndexName = 'Table1Index6'
    StoreDefs = True
    TableName = 'central.db'
    Left = 24
    Top = 168
    object centralmarca: TIntegerField
      FieldName = 'marca'
    end
    object centralnume: TStringField
      FieldName = 'nume'
      Size = 40
    end
    object centralsectia: TStringField
      FieldName = 'sectia'
    end
    object centralfunctie: TStringField
      FieldName = 'functie'
    end
    object centralbuletin_identitate: TStringField
      FieldName = 'buletin_identitate'
      Size = 30
    end
    object centraldobanda_incasata: TFloatField
      DefaultExpression = '0'
      FieldName = 'dobanda_incasata'
      DisplayFormat = '#,#0'
    end
    object centraldobanda_sold: TFloatField
      DefaultExpression = '0'
      FieldName = 'dobanda_sold'
      DisplayFormat = '#,#0'
    end
    object centralimprumut_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'imprumut_debit'
      DisplayFormat = '#,#0'
    end
    object centralimprumut_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'imprumut_credit'
      DisplayFormat = '#,#0'
    end
    object centralimprumut_sold: TFloatField
      DefaultExpression = '0'
      FieldName = 'imprumut_sold'
      DisplayFormat = '#,#0'
    end
    object centralfs_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'fs_debit'
      DisplayFormat = '#,#0'
    end
    object centralfs_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'fs_credit'
      DisplayFormat = '#,#0'
    end
    object centralfs_sold: TFloatField
      DefaultExpression = '0'
      FieldName = 'fs_sold'
      DisplayFormat = '#,#0'
    end
  end
  object Table1: TTable
    DatabaseName = 'd:'
    TableName = 'S300204.DBF'
    Left = 168
    Top = 168
    object Table1SDOB: TFloatField
      FieldName = 'SDOB'
    end
    object Table1SIMPR: TFloatField
      FieldName = 'SIMPR'
    end
    object Table1SFDS: TFloatField
      FieldName = 'SFDS'
    end
    object Table1NUM: TStringField
      FieldName = 'NUM'
      Size = 40
    end
  end
  object fise: TTable
    DatabaseName = 'd:\Borland Projects\Car\data\CAR IASI\'
    FieldDefs = <
      item
        Name = 'trick'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'marca'
        DataType = ftInteger
      end
      item
        Name = 'nr_doc'
        DataType = ftInteger
      end
      item
        Name = 'data'
        DataType = ftDate
      end
      item
        Name = 'explicatii'
        DataType = ftString
        Size = 50
      end
      item
        Name = 'dobanda_calculata'
        DataType = ftFloat
      end
      item
        Name = 'dobanda_incasata'
        DataType = ftFloat
      end
      item
        Name = 'dobanda_sold'
        DataType = ftFloat
      end
      item
        Name = 'imprumut_debit'
        DataType = ftFloat
      end
      item
        Name = 'imprumut_credit'
        DataType = ftFloat
      end
      item
        Name = 'imprumut_sold'
        DataType = ftFloat
      end
      item
        Name = 'fs_debit'
        DataType = ftFloat
      end
      item
        Name = 'fs_credit'
        DataType = ftFloat
      end
      item
        Name = 'fs_sold'
        DataType = ftFloat
      end
      item
        Name = 'soldbool'
        DataType = ftBoolean
      end
      item
        Name = 'checker'
        DataType = ftBoolean
      end>
    IndexDefs = <
      item
        Name = 'fiseIndex1'
        Fields = 'trick'
        Options = [ixPrimary, ixUnique]
      end
      item
        Name = 'fiseIndex2'
        Fields = 'marca'
        Options = [ixCaseInsensitive]
      end>
    IndexName = 'fiseIndex2'
    MasterFields = 'marca'
    MasterSource = DataSource2
    StoreDefs = True
    TableName = 'fise'
    Left = 168
    Top = 56
    object fisetrick: TStringField
      FieldName = 'trick'
      Size = 30
    end
    object fisemarca: TIntegerField
      FieldName = 'marca'
    end
    object fisenr_doc: TIntegerField
      FieldName = 'nr_doc'
    end
    object fisedata: TDateField
      FieldName = 'data'
    end
    object fiseexplicatii: TStringField
      FieldName = 'explicatii'
      Size = 50
    end
    object fisedobanda_calculata: TFloatField
      DefaultExpression = '0'
      FieldName = 'dobanda_calculata'
      DisplayFormat = '#,#0'
    end
    object fisedobanda_incasata: TFloatField
      DefaultExpression = '0'
      FieldName = 'dobanda_incasata'
      DisplayFormat = '#,#0'
    end
    object fisedobanda_sold: TFloatField
      DefaultExpression = '0'
      FieldName = 'dobanda_sold'
      DisplayFormat = '#,#0'
    end
    object fiseimprumut_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'imprumut_debit'
      DisplayFormat = '#,#0'
    end
    object fiseimprumut_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'imprumut_credit'
      DisplayFormat = '#,#0'
    end
    object fiseimprumut_sold: TFloatField
      DefaultExpression = '0'
      FieldName = 'imprumut_sold'
      DisplayFormat = '#,#0'
    end
    object fisefs_debit: TFloatField
      DefaultExpression = '0'
      FieldName = 'fs_debit'
      DisplayFormat = '#,#0'
    end
    object fisefs_credit: TFloatField
      DefaultExpression = '0'
      FieldName = 'fs_credit'
      DisplayFormat = '#,#0'
    end
    object fisefs_sold: TFloatField
      DefaultExpression = '0'
      FieldName = 'fs_sold'
      DisplayFormat = '#,#0'
    end
    object fisesoldbool: TBooleanField
      DefaultExpression = 'FALSE'
      FieldName = 'soldbool'
    end
    object fisechecker: TBooleanField
      DefaultExpression = 'FALSE'
      FieldName = 'checker'
    end
  end
  object ang: TTable
    DatabaseName = 'c:\manevra\destinatie'
    FieldDefs = <
      item
        Name = 'marca'
        DataType = ftInteger
      end
      item
        Name = 'nume'
        DataType = ftString
        Size = 40
      end
      item
        Name = 'sectia'
        DataType = ftString
        Size = 20
      end
      item
        Name = 'functie'
        DataType = ftString
        Size = 20
      end
      item
        Name = 'adresa'
        DataType = ftString
        Size = 80
      end
      item
        Name = 'buletin_identitate'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'data_nastere'
        DataType = ftDate
      end
      item
        Name = 'data_inscriere'
        DataType = ftDate
      end
      item
        Name = 'taxa_inscriere'
        DataType = ftFloat
      end
      item
        Name = 'telefon'
        DataType = ftInteger
      end>
    IndexDefs = <
      item
        Name = 'angIndex1'
        Fields = 'marca'
        Options = [ixPrimary, ixUnique]
      end
      item
        Name = 'i1'
        Fields = 'nume'
        Options = [ixCaseInsensitive]
      end>
    IndexName = 'i1'
    StoreDefs = True
    TableName = 'angajati.DB'
    Left = 96
    Top = 56
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
