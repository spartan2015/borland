object D1: TD1
  OldCreateOrder = False
  Left = 222
  Top = 171
  Height = 476
  Width = 802
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 16
  end
  object Table1: TTable
    DatabaseName = 'data\'
    TableName = 'raluca.DB'
    Left = 16
    Top = 48
    object Table1Nume_firma: TStringField
      FieldName = 'Nume_firma'
      Size = 60
    end
    object Table1Fisc: TFloatField
      FieldName = 'Fisc'
    end
    object Table1J: TStringField
      FieldName = 'J'
      Size = 12
    end
    object Table1Banca_1: TStringField
      FieldName = 'Banca_1'
      Size = 30
    end
    object Table1Filiala_1: TStringField
      FieldName = 'Filiala_1'
      Size = 30
    end
    object Table1Cont_banca_1: TStringField
      FieldName = 'Cont_banca_1'
      Size = 30
    end
    object Table1Banca_2: TStringField
      FieldName = 'Banca_2'
      Size = 30
    end
    object Table1Filiala_2: TStringField
      FieldName = 'Filiala_2'
      Size = 30
    end
    object Table1Cont_banca_2: TStringField
      FieldName = 'Cont_banca_2'
      Size = 30
    end
    object Table1Telefon_firma: TFloatField
      FieldName = 'Telefon_firma'
    end
    object Table1Adresa_firma: TMemoField
      FieldName = 'Adresa_firma'
      BlobType = ftMemo
      Size = 1
    end
    object Table1e_mail_firma: TStringField
      FieldName = 'e_mail_firma'
      Size = 30
    end
    object Table1Functia_pers_raport: TStringField
      FieldName = 'Functia_pers_raport'
      Size = 30
    end
    object Table1Nume_pers_raport: TStringField
      FieldName = 'Nume_pers_raport'
      Size = 30
    end
    object Table1Cnp_angajator: TFloatField
      FieldName = 'Cnp_angajator'
    end
  end
  object DataSource2: TDataSource
    DataSet = Table2
    Left = 80
  end
  object DataSource3: TDataSource
    DataSet = Table3
    Left = 144
  end
  object Table3: TTable
    DatabaseName = 'data\'
    Left = 144
    Top = 48
    object Table3An: TIntegerField
      FieldName = 'An'
    end
    object Table3Luna: TStringField
      FieldName = 'Luna'
      Size = 15
    end
    object Table3Salar_ora: TFloatField
      DefaultExpression = '0'
      FieldName = 'Salar_ora'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Zile_lucrate: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_lucrate'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Zile_nelucrate: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_nelucrate'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Ore_suplimentare_15: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_suplimentare_15'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Ore_suplimentare_2: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_suplimentare_2'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Ore_in_sarbatori: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_in_sarbatori'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Ore_noapte: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_noapte'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Ore_nemotivate: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_nemotivate'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Cfs: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Cfs'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Ore_in_acord: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_in_acord'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Premiu: TFloatField
      DefaultExpression = '0'
      FieldName = 'Premiu'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Alti_bani: TFloatField
      DefaultExpression = '0'
      FieldName = 'Alti_bani'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Diferenta_diurna: TFloatField
      DefaultExpression = '0'
      FieldName = 'Diferenta_diurna'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Regularizare: TFloatField
      DefaultExpression = '0'
      FieldName = 'Regularizare'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Salar_realizat: TFloatField
      DefaultExpression = '0'
      FieldName = 'Salar_realizat'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Suplimentar_15: TFloatField
      DefaultExpression = '0'
      FieldName = 'Suplimentar_15'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Suplimentar_2: TFloatField
      DefaultExpression = '0'
      FieldName = 'Suplimentar_2'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Sarbatori: TFloatField
      DefaultExpression = '0'
      FieldName = 'Sarbatori'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Noapte: TFloatField
      DefaultExpression = '0'
      FieldName = 'Noapte'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Spor_vechime_val: TFloatField
      DefaultExpression = '0'
      FieldName = 'Spor_vechime_val'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Valoare_acord: TFloatField
      DefaultExpression = '0'
      FieldName = 'Valoare_acord'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Salar_brut: TFloatField
      DefaultExpression = '0'
      FieldName = 'Salar_brut'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Zile_concediu_O: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_concediu_O'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Valoare_concediu_O: TFloatField
      DefaultExpression = '0'
      FieldName = 'Valoare_concediu_O'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Zile_concediu_M: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_concediu_M'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Valoare_concediu_M: TFloatField
      DefaultExpression = '0'
      FieldName = 'Valoare_concediu_M'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Preaviz: TBooleanField
      FieldName = 'Preaviz'
    end
    object Table3Baza_calcul_CAS: TFloatField
      DefaultExpression = '0'
      FieldName = 'Baza_calcul_CAS'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Cas: TFloatField
      DefaultExpression = '0'
      FieldName = 'Cas'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Cas_firma: TFloatField
      DefaultExpression = '0'
      FieldName = 'Cas_firma'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Somaj: TFloatField
      DefaultExpression = '0'
      FieldName = 'Somaj'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Somaj_firma: TFloatField
      DefaultExpression = '0'
      FieldName = 'Somaj_firma'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Sanatate: TFloatField
      DefaultExpression = '0'
      FieldName = 'Sanatate'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Sanatate_firma: TFloatField
      DefaultExpression = '0'
      FieldName = 'Sanatate_firma'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Cheltuieli_profesionale: TFloatField
      DefaultExpression = '0'
      FieldName = 'Cheltuieli_profesionale'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Venit_net: TFloatField
      DefaultExpression = '0'
      FieldName = 'Venit_net'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Deducere_pers_de_baza: TFloatField
      DefaultExpression = '0'
      FieldName = 'Deducere_pers_de_baza'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Deducere_suplimentara: TFloatField
      DefaultExpression = '0'
      FieldName = 'Deducere_suplimentara'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Baza_calcul_impozit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Baza_calcul_impozit'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Baza_calcul_impozit_CO: TFloatField
      DefaultExpression = '0'
      FieldName = 'Baza_calcul_impozit_CO'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Impozit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Impozit'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Impozit_concediu_O: TFloatField
      DefaultExpression = '0'
      FieldName = 'Impozit_concediu_O'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Ajutor_nastere: TFloatField
      DefaultExpression = '0'
      FieldName = 'Ajutor_nastere'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Avans: TFloatField
      DefaultExpression = '0'
      FieldName = 'Avans'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Indemnizatii: TFloatField
      DefaultExpression = '0'
      FieldName = 'Indemnizatii'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Popriri: TFloatField
      DefaultExpression = '0'
      FieldName = 'Popriri'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Alte_rate: TFloatField
      DefaultExpression = '0'
      FieldName = 'Alte_rate'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Garantii_materiale: TFloatField
      DefaultExpression = '0'
      FieldName = 'Garantii_materiale'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Rest_plata: TFloatField
      DefaultExpression = '0'
      FieldName = 'Rest_plata'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Diferenta_impozit: TFloatField
      DefaultExpression = '0'
      FieldName = 'Diferenta_impozit'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Salar_net: TFloatField
      DefaultExpression = '0'
      FieldName = 'Salar_net'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Total_plata: TFloatField
      DefaultExpression = '0'
      FieldName = 'Total_plata'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Concediu_ramas: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Concediu_ramas'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Zile_luna: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_luna'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Zile_lucrate_D: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_lucrate_D'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Zile_lucrate_S: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_lucrate_S'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Venit_D: TFloatField
      DefaultExpression = '0'
      FieldName = 'Venit_D'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Venit_S: TFloatField
      DefaultExpression = '0'
      FieldName = 'Venit_S'
      DisplayFormat = '###,###,###,##0'
    end
  end
  object DataSource4: TDataSource
    DataSet = Table4
    Left = 208
  end
  object Table4: TTable
    DatabaseName = 'data\dat\'
    TableName = 'zl.dbf'
    TableType = ttFoxPro
    Left = 208
    Top = 48
    object Table4L01: TStringField
      FieldName = 'L01'
      Size = 2
    end
    object Table4L02: TStringField
      FieldName = 'L02'
      Size = 2
    end
    object Table4L03: TStringField
      FieldName = 'L03'
      Size = 2
    end
    object Table4L04: TStringField
      FieldName = 'L04'
      Size = 2
    end
    object Table4L05: TStringField
      FieldName = 'L05'
      Size = 2
    end
    object Table4L06: TStringField
      FieldName = 'L06'
      Size = 2
    end
    object Table4L07: TStringField
      FieldName = 'L07'
      Size = 2
    end
    object Table4L08: TStringField
      FieldName = 'L08'
      Size = 2
    end
    object Table4L09: TStringField
      FieldName = 'L09'
      Size = 2
    end
    object Table4L10: TStringField
      FieldName = 'L10'
      Size = 2
    end
    object Table4L11: TStringField
      FieldName = 'L11'
      Size = 2
    end
    object Table4L12: TStringField
      FieldName = 'L12'
      Size = 2
    end
    object Table4ANUL: TSmallintField
      FieldName = 'ANUL'
    end
  end
  object DataSource5: TDataSource
    DataSet = Table5
    Left = 272
  end
  object Table5: TTable
    DatabaseName = 'data\dat\'
    TableName = 'sporuri.DB'
    Left = 272
    Top = 48
    object Table5v1: TIntegerField
      FieldName = 'v1'
      DisplayFormat = '###,###,###,##0'
    end
    object Table5v2: TIntegerField
      FieldName = 'v2'
      DisplayFormat = '###,###,###,##0'
    end
    object Table5val: TIntegerField
      FieldName = 'val'
      DisplayFormat = '###,###,###,##0'
    end
  end
  object DataSource6: TDataSource
    DataSet = Table6
    Left = 336
  end
  object Table6: TTable
    DatabaseName = 'data\dat\'
    TableName = 'ded_baza.DB'
    Left = 336
    Top = 48
    object Table6D_baza: TIntegerField
      FieldName = 'D_baza'
      DisplayFormat = '###,###,###,##0'
    end
    object Table6Cota_cas: TIntegerField
      FieldName = 'Cota_cas'
      DisplayFormat = '###,###,###,##0'
    end
  end
  object DataSource7: TDataSource
    DataSet = Table7
    Left = 400
  end
  object Table7: TTable
    DatabaseName = 'data\dat\'
    TableName = 'ded_sup1.DB'
    Left = 400
    Top = 48
    object Table7Cota1: TFloatField
      FieldName = 'Cota1'
      DisplayFormat = '###,###,###,##0'
    end
  end
  object DataSource8: TDataSource
    DataSet = Table8
    Left = 464
  end
  object Table8: TTable
    DatabaseName = 'data\dat\'
    TableName = 'cote_imp.DB'
    Left = 464
    Top = 48
    object Table8V1: TIntegerField
      FieldName = 'V1'
      DisplayFormat = '###,###,###,##0'
    end
    object Table8V2: TIntegerField
      FieldName = 'V2'
      DisplayFormat = '###,###,###,##0'
    end
    object Table8Suma_fixa: TIntegerField
      FieldName = 'Suma_fixa'
      DisplayFormat = '###,###,###,##0'
    end
    object Table8Cota: TIntegerField
      FieldName = 'Cota'
      DisplayFormat = '###,###,###,##0'
    end
  end
  object DataSource9: TDataSource
    DataSet = Table9
    Left = 528
  end
  object Table9: TTable
    DatabaseName = 'data\dat\'
    FieldDefs = <
      item
        Name = 'cas'
        DataType = ftFloat
      end
      item
        Name = 'cas_firma'
        DataType = ftFloat
      end
      item
        Name = 'somaj'
        DataType = ftFloat
      end
      item
        Name = 'somaj_firma'
        DataType = ftFloat
      end
      item
        Name = 'sanatate'
        DataType = ftFloat
      end
      item
        Name = 'sanatate_firma'
        DataType = ftFloat
      end
      item
        Name = 'cheltuieli_profesionale'
        DataType = ftFloat
      end
      item
        Name = 'cas_d'
        DataType = ftFloat
      end
      item
        Name = 'cas_s'
        DataType = ftFloat
      end>
    StoreDefs = True
    TableName = 'dbsomaj.DB'
    Left = 528
    Top = 48
    object Table9cas: TFloatField
      FieldName = 'cas'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9cas_firma: TFloatField
      FieldName = 'cas_firma'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9somaj: TFloatField
      FieldName = 'somaj'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9somaj_firma: TFloatField
      FieldName = 'somaj_firma'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9sanatate: TFloatField
      FieldName = 'sanatate'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9sanatate_firma: TFloatField
      FieldName = 'sanatate_firma'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9cheltuieli_profesionale: TFloatField
      FieldName = 'cheltuieli_profesionale'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9cas_d: TFloatField
      FieldName = 'cas_d'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9cas_s: TFloatField
      FieldName = 'cas_s'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9fond_accidente: TFloatField
      FieldName = 'fond_accidente'
      DisplayFormat = '###,###,###,##0.##'
    end
    object Table9comision_cm: TFloatField
      FieldName = 'comision_cm'
      DisplayFormat = '###,###,###,##0.##'
    end
  end
  object DataSource10: TDataSource
    DataSet = Table10
    Left = 16
    Top = 104
  end
  object Table10: TTable
    DatabaseName = 'data\'
    TableName = '2003augustSCzNeozTradingzLdtzSRL.DB'
    Left = 16
    Top = 152
    object Table10Nume_firma: TStringField
      FieldName = 'Nume_firma'
      Size = 60
    end
    object Table10J: TStringField
      FieldName = 'J'
      Size = 25
    end
    object Table10Telefon_firma: TFloatField
      FieldName = 'Telefon_firma'
    end
    object Table10Adresa_firma: TMemoField
      FieldName = 'Adresa_firma'
      BlobType = ftMemo
      Size = 1
    end
    object Table10Nume: TStringField
      FieldName = 'Nume'
      Size = 25
    end
    object Table10Prenume: TStringField
      FieldName = 'Prenume'
      Size = 25
    end
    object Table10Cod: TStringField
      FieldName = 'Cod'
      Size = 25
    end
    object Table10Cnp: TFloatField
      FieldName = 'Cnp'
    end
    object Table10Functie: TStringField
      FieldName = 'Functie'
      Size = 25
    end
    object Table10Cod_functie: TStringField
      FieldName = 'Cod_functie'
      Size = 25
    end
    object Table10Sectia: TStringField
      FieldName = 'Sectia'
      Size = 25
    end
    object Table10Marca: TStringField
      FieldName = 'Marca'
      Size = 25
    end
    object Table10Data_angajare: TDateField
      FieldName = 'Data_angajare'
    end
    object Table10Salar_tarifar: TFloatField
      FieldName = 'Salar_tarifar'
    end
    object Table10Prima: TFloatField
      FieldName = 'Prima'
    end
    object Table10Data_prima_angajare: TDateField
      FieldName = 'Data_prima_angajare'
    end
    object Table10Spor_vechime: TBooleanField
      FieldName = 'Spor_vechime'
    end
    object Table10Regie: TBooleanField
      FieldName = 'Regie'
    end
    object Table10Sex: TStringField
      FieldName = 'Sex'
      Size = 1
    end
    object Table10Stare_civila: TStringField
      FieldName = 'Stare_civila'
      Size = 12
    end
    object Table10Telefon: TFloatField
      FieldName = 'Telefon'
    end
    object Table10Adresa: TMemoField
      FieldName = 'Adresa'
      BlobType = ftMemo
      Size = 1
    end
    object Table10Data_nastere: TDateField
      FieldName = 'Data_nastere'
    end
    object Table10Stagiu_militar: TBooleanField
      FieldName = 'Stagiu_militar'
    end
    object Table10Livret_militar: TStringField
      FieldName = 'Livret_militar'
      Size = 25
    end
    object Table10Studii: TMemoField
      FieldName = 'Studii'
      BlobType = ftMemo
      Size = 1
    end
    object Table10Numar_copii: TIntegerField
      FieldName = 'Numar_copii'
    end
    object Table10Date_copii: TMemoField
      FieldName = 'Date_copii'
      BlobType = ftMemo
      Size = 1
    end
    object Table10Pers_handicapate_grI: TBooleanField
      FieldName = 'Pers_handicapate_grI'
    end
    object Table10Pers_handicapate_grII: TBooleanField
      FieldName = 'Pers_handicapate_grII'
    end
    object Table10Sotie_in_intretinere: TBooleanField
      FieldName = 'Sotie_in_intretinere'
    end
    object Table10Concediu_pe_an: TIntegerField
      FieldName = 'Concediu_pe_an'
    end
    object Table10An: TIntegerField
      FieldName = 'An'
    end
    object Table10Luna: TStringField
      FieldName = 'Luna'
      Size = 15
    end
    object Table10Salar_ora: TFloatField
      FieldName = 'Salar_ora'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Zile_lucrate: TIntegerField
      FieldName = 'Zile_lucrate'
    end
    object Table10Zile_nelucrate: TIntegerField
      FieldName = 'Zile_nelucrate'
    end
    object Table10Ore_suplimentare_15: TIntegerField
      FieldName = 'Ore_suplimentare_1,5'
    end
    object Table10Ore_suplimentare_2: TIntegerField
      FieldName = 'Ore_suplimentare_2'
    end
    object Table10Ore_in_sarbatori: TIntegerField
      FieldName = 'Ore_in_sarbatori'
    end
    object Table10Ore_noapte: TIntegerField
      FieldName = 'Ore_noapte'
    end
    object Table10Ore_nemotivate: TIntegerField
      FieldName = 'Ore_nemotivate'
    end
    object Table10Cfs: TIntegerField
      FieldName = 'Cfs'
    end
    object Table10Ore_in_acord: TIntegerField
      FieldName = 'Ore_in_acord'
    end
    object Table10Premiu: TFloatField
      FieldName = 'Premiu'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Alti_bani: TFloatField
      FieldName = 'Alti_bani'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Diferenta_diurna: TFloatField
      FieldName = 'Diferenta_diurna'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Regularizare: TFloatField
      FieldName = 'Regularizare'
    end
    object Table10Salar_realizat: TFloatField
      FieldName = 'Salar_realizat'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Suplimentar_15: TFloatField
      FieldName = 'Suplimentar_1,5'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Suplimentar_2: TFloatField
      FieldName = 'Suplimentar_2'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Sarbatori: TFloatField
      FieldName = 'Sarbatori'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Noapte: TFloatField
      FieldName = 'Noapte'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Spor_vechime_val: TFloatField
      FieldName = 'Spor_vechime_val'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Valoare_acord: TFloatField
      FieldName = 'Valoare_acord'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Salar_brut: TFloatField
      FieldName = 'Salar_brut'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Zile_concediu_O: TIntegerField
      FieldName = 'Zile_concediu_O'
    end
    object Table10Valoare_concediu_O: TFloatField
      FieldName = 'Valoare_concediu_O'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Zile_concediu_M: TIntegerField
      FieldName = 'Zile_concediu_M'
    end
    object Table10Valoare_concediu_M: TFloatField
      FieldName = 'Valoare_concediu_M'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Preaviz: TBooleanField
      FieldName = 'Preaviz'
    end
    object Table10Baza_calcul_CAS: TFloatField
      FieldName = 'Baza_calcul_CAS'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Cas: TFloatField
      FieldName = 'Cas'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Cas_firma: TFloatField
      FieldName = 'Cas_firma'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Somaj: TFloatField
      FieldName = 'Somaj'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Somaj_firma: TFloatField
      FieldName = 'Somaj_firma'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Sanatate: TFloatField
      FieldName = 'Sanatate'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Sanatate_firma: TFloatField
      FieldName = 'Sanatate_firma'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Cheltuieli_profesionale: TFloatField
      FieldName = 'Cheltuieli_profesionale'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Venit_net: TFloatField
      FieldName = 'Venit_net'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Deducere_pers_de_baza: TFloatField
      FieldName = 'Deducere_pers_de_baza'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Deducere_suplimentara: TFloatField
      FieldName = 'Deducere_suplimentara'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Baza_calcul_impozit: TFloatField
      FieldName = 'Baza_calcul_impozit'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Baza_calcul_impozit_CO: TFloatField
      FieldName = 'Baza_calcul_impozit_CO'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Impozit: TFloatField
      FieldName = 'Impozit'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Impozit_concediu_O: TFloatField
      FieldName = 'Impozit_concediu_O'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Ajutor_nastere: TFloatField
      FieldName = 'Ajutor_nastere'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Avans: TFloatField
      FieldName = 'Avans'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Indemnizatii: TFloatField
      FieldName = 'Indemnizatii'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Popriri: TFloatField
      FieldName = 'Popriri'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Alte_rate: TFloatField
      FieldName = 'Alte_rate'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Garantii_materiale: TFloatField
      FieldName = 'Garantii_materiale'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Rest_plata: TFloatField
      FieldName = 'Rest_plata'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Diferenta_impozit: TFloatField
      FieldName = 'Diferenta_impozit'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Salar_net: TFloatField
      FieldName = 'Salar_net'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Total_plata: TFloatField
      FieldName = 'Total_plata'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Concediu_ramas: TIntegerField
      FieldName = 'Concediu_ramas'
    end
    object Table10Zile_luna: TIntegerField
      FieldName = 'Zile_luna'
    end
    object Table10Cnp_angajator: TFloatField
      FieldName = 'Cnp_angajator'
    end
    object Table10Functia_pers_raport: TStringField
      FieldName = 'Functia_pers_raport'
      Size = 15
    end
    object Table10Nume_pers_raport: TStringField
      FieldName = 'Nume_pers_raport'
      Size = 30
    end
    object Table10Banca_1: TStringField
      FieldName = 'Banca_1'
      Size = 15
    end
    object Table10Banca_2: TStringField
      FieldName = 'Banca_2'
      Size = 15
    end
    object Table10Cont_banca_1: TStringField
      FieldName = 'Cont_banca_1'
      Size = 25
    end
    object Table10Cont_banca_2: TStringField
      FieldName = 'Cont_banca_2'
      Size = 25
    end
    object Table10Data_lichidare_salar: TDateField
      FieldName = 'Data_lichidare_salar'
    end
    object Table10Norma_ore_zi: TIntegerField
      FieldName = 'Norma_ore_zi'
    end
    object Table10e_mail_firma: TStringField
      FieldName = 'e_mail_firma'
      Size = 25
    end
    object Table10Filiala_1: TStringField
      FieldName = 'Filiala_1'
      Size = 12
    end
    object Table10Filiala_2: TStringField
      FieldName = 'Filiala_2'
      Size = 12
    end
    object Table10Fisc: TFloatField
      FieldName = 'Fisc'
    end
    object Table10Zile_lucrate_D: TIntegerField
      FieldName = 'Zile_lucrate_D'
    end
    object Table10Zile_lucrate_S: TIntegerField
      FieldName = 'Zile_lucrate_S'
    end
    object Table10Venit_D: TFloatField
      FieldName = 'Venit_D'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Venit_S: TFloatField
      FieldName = 'Venit_S'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10BASS: TFloatField
      FieldName = 'BASS'
      DisplayFormat = '###,###,###,##0'
    end
    object Table10Pensionar: TBooleanField
      FieldName = 'Pensionar'
    end
    object Table10ore_zi: TIntegerField
      FieldName = 'ore_zi'
    end
    object Table10partial: TBooleanField
      FieldName = 'partial'
    end
  end
  object Table11: TTable
    DatabaseName = 'somaj\'
    TableName = 'A1_2003august.DB'
    Left = 16
    Top = 256
    object Table11An: TFloatField
      FieldName = 'An'
    end
    object Table11Ln: TIntegerField
      FieldName = 'Ln'
      MaxValue = 12
    end
    object Table11Cf: TFloatField
      FieldName = 'Cf'
      DisplayFormat = '###############'
      Precision = 2
    end
    object Table11Cn: TFloatField
      FieldName = 'Cn'
      DisplayFormat = '#############'
      Precision = 2
    end
    object Table11Nume: TStringField
      FieldName = 'Nume'
      Size = 30
    end
    object Table11Cnp: TFloatField
      FieldName = 'Cnp'
      DisplayFormat = '#############'
      Precision = 2
    end
    object Table11Rm: TIntegerField
      FieldName = 'Rm'
      MaxValue = 1
    end
    object Table11Cv: TIntegerField
      FieldName = 'Cv'
      DisplayFormat = '###,###,###,##0'
      MaxValue = 1
    end
    object Table11Sbl: TFloatField
      FieldName = 'Sbl'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table11Cid: TFloatField
      FieldName = 'Cid'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table11Civ: TFloatField
      FieldName = 'Civ'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table11Cin: TFloatField
      FieldName = 'Cin'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
  end
  object Table12: TTable
    DatabaseName = 'somaj\'
    TableName = 'A2_2003august.DB'
    Left = 88
    Top = 256
    object Table12Nri: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Nri'
    end
    object Table12Datai: TDateField
      FieldName = 'Datai'
    end
    object Table12An: TSmallintField
      FieldName = 'An'
      MaxValue = 2030
    end
    object Table12Ln: TSmallintField
      FieldName = 'Ln'
      MaxValue = 12
    end
    object Table12Datal: TDateField
      FieldName = 'Datal'
    end
    object Table12Den: TStringField
      FieldName = 'Den'
      Size = 60
    end
    object Table12Cf: TFloatField
      FieldName = 'Cf'
      Precision = 2
    end
    object Table12Rj: TStringField
      FieldName = 'Rj'
      Size = 3
    end
    object Table12Rn: TSmallintField
      FieldName = 'Rn'
    end
    object Table12Ra: TSmallintField
      FieldName = 'Ra'
    end
    object Table12Nra: TSmallintField
      DefaultExpression = '0'
      FieldName = 'Nra'
    end
    object Table12Fs: TFloatField
      DefaultExpression = '0'
      FieldName = 'Fs'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Tcad: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcad'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Tcav: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcav'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Tcan: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcan'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Ded: TFloatField
      DefaultExpression = '0'
      FieldName = 'Ded'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Tcid: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcid'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Tciv: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tciv'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Tcin: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcin'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Totd: TFloatField
      DefaultExpression = '0'
      FieldName = 'Totd'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Totv: TFloatField
      DefaultExpression = '0'
      FieldName = 'Totv'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Totn: TFloatField
      DefaultExpression = '0'
      FieldName = 'Totn'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Obl: TFloatField
      DefaultExpression = '0'
      FieldName = 'Obl'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Oblna: TFloatField
      DefaultExpression = '0'
      FieldName = 'Oblna'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Oblni: TFloatField
      DefaultExpression = '0'
      FieldName = 'Oblni'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Maj: TFloatField
      DefaultExpression = '0'
      FieldName = 'Maj'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Pen: TFloatField
      DefaultExpression = '0'
      FieldName = 'Pen'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12Totobl: TFloatField
      DefaultExpression = '0'
      FieldName = 'Totobl'
      DisplayFormat = '###,###,###,##0'
      Precision = 2
    end
    object Table12B1: TStringField
      FieldName = 'B1'
      Size = 30
    end
    object Table12F1: TStringField
      FieldName = 'F1'
      Size = 30
    end
    object Table12C1: TStringField
      FieldName = 'C1'
      Size = 30
    end
    object Table12B2: TStringField
      FieldName = 'B2'
      Size = 30
    end
    object Table12F2: TStringField
      FieldName = 'F2'
      Size = 30
    end
    object Table12C2: TStringField
      FieldName = 'C2'
      Size = 30
    end
    object Table12Funca: TStringField
      FieldName = 'Funca'
      Size = 30
    end
    object Table12Numea: TStringField
      FieldName = 'Numea'
      Size = 30
    end
    object Table12Datad: TDateField
      FieldName = 'Datad'
    end
    object Table12Sup: TSmallintField
      DefaultExpression = '1'
      FieldName = 'Sup'
      MaxValue = 2
      MinValue = 1
    end
  end
  object Table13: TTable
    TableName = 'A1.dbf'
    TableType = ttFoxPro
    Left = 160
    Top = 256
  end
  object Table14: TTable
    TableName = 'A2.DBF'
    TableType = ttFoxPro
    Left = 224
    Top = 256
  end
  object Table15: TTable
    DatabaseName = 'cas\'
    TableName = 'A11_2003august.DB'
    Left = 328
    Top = 256
    object Table15AN: TIntegerField
      FieldName = 'AN'
    end
    object Table15LN: TIntegerField
      FieldName = 'LN'
    end
    object Table15CF: TFloatField
      DefaultExpression = '0'
      FieldName = 'CF'
    end
    object Table15RJ: TStringField
      FieldName = 'RJ'
      Size = 4
    end
    object Table15RN: TIntegerField
      DefaultExpression = '0'
      FieldName = 'RN'
    end
    object Table15RA: TIntegerField
      DefaultExpression = '0'
      FieldName = 'RA'
    end
    object Table15NUME: TStringField
      FieldName = 'NUME'
      Size = 30
    end
    object Table15CNP: TFloatField
      DefaultExpression = '0'
      FieldName = 'CNP'
    end
    object Table15CM: TIntegerField
      DefaultExpression = '0'
      FieldName = 'CM'
    end
    object Table15CV: TIntegerField
      DefaultExpression = '0'
      FieldName = 'CV'
    end
    object Table15PE: TIntegerField
      DefaultExpression = '0'
      FieldName = 'PE'
    end
    object Table15SOM: TIntegerField
      DefaultExpression = '0'
      FieldName = 'SOM'
    end
    object Table15TT: TIntegerField
      DefaultExpression = '0'
      FieldName = 'TT'
    end
    object Table15NN: TIntegerField
      DefaultExpression = '0'
      FieldName = 'NN'
    end
    object Table15DD: TIntegerField
      DefaultExpression = '0'
      FieldName = 'DD'
    end
    object Table15SS: TIntegerField
      DefaultExpression = '0'
      FieldName = 'SS'
    end
    object Table15PP: TIntegerField
      DefaultExpression = '0'
      FieldName = 'PP'
    end
    object Table15TV: TFloatField
      DefaultExpression = '0'
      FieldName = 'TV'
    end
    object Table15TVN: TFloatField
      DefaultExpression = '0'
      FieldName = 'TVN'
    end
    object Table15TVD: TFloatField
      DefaultExpression = '0'
      FieldName = 'TVD'
    end
    object Table15TVS: TFloatField
      DefaultExpression = '0'
      FieldName = 'TVS'
    end
    object Table15CASAT: TFloatField
      DefaultExpression = '0'
      FieldName = 'CASAT'
    end
    object Table15CASTOT: TFloatField
      DefaultExpression = '0'
      FieldName = 'CASTOT'
    end
    object Table15BASS: TFloatField
      DefaultExpression = '0'
      FieldName = 'BASS'
    end
    object Table15CNPA: TFloatField
      DefaultExpression = '0'
      FieldName = 'CNPA'
    end
    object Table15NORMA: TIntegerField
      DefaultExpression = '0'
      FieldName = 'NORMA'
    end
  end
  object Table16: TTable
    DatabaseName = 'cas\'
    TableName = 'A12_2003august.DB'
    Left = 400
    Top = 256
    object Table16AN: TIntegerField
      FieldName = 'AN'
    end
    object Table16LN: TIntegerField
      FieldName = 'LN'
    end
    object Table16DCZZ: TIntegerField
      FieldName = 'DCZZ'
    end
    object Table16DCLL: TIntegerField
      FieldName = 'DCLL'
    end
    object Table16DCAA: TIntegerField
      FieldName = 'DCAA'
    end
    object Table16DEN: TStringField
      FieldName = 'DEN'
      Size = 60
    end
    object Table16CF: TFloatField
      DefaultExpression = '0'
      FieldName = 'CF'
    end
    object Table16RJ: TStringField
      FieldName = 'RJ'
      Size = 4
    end
    object Table16RN: TIntegerField
      DefaultExpression = '0'
      FieldName = 'RN'
    end
    object Table16RA: TIntegerField
      DefaultExpression = '0'
      FieldName = 'RA'
    end
    object Table16NRM: TIntegerField
      DefaultExpression = '0'
      FieldName = 'NRM'
    end
    object Table16FS: TFloatField
      DefaultExpression = '0'
      FieldName = 'FS'
    end
    object Table16FSN: TFloatField
      DefaultExpression = '0'
      FieldName = 'FSN'
    end
    object Table16FSD: TFloatField
      DefaultExpression = '0'
      FieldName = 'FSD'
    end
    object Table16FSS: TFloatField
      DefaultExpression = '0'
      FieldName = 'FSS'
    end
    object Table16CASS: TFloatField
      DefaultExpression = '0'
      FieldName = 'CASS'
    end
    object Table16CASAN: TFloatField
      DefaultExpression = '0'
      FieldName = 'CASAN'
    end
    object Table16BASS: TFloatField
      DefaultExpression = '0'
      FieldName = 'BASS'
    end
    object Table16CAS145: TFloatField
      DefaultExpression = '0'
      FieldName = 'CAS145'
    end
    object Table16CASVIR: TFloatField
      DefaultExpression = '0'
      FieldName = 'CASVIR'
    end
    object Table16NRF: TIntegerField
      DefaultExpression = '0'
      FieldName = 'NRF'
    end
    object Table16B1: TStringField
      FieldName = 'B1'
      Size = 30
    end
    object Table16F1: TStringField
      FieldName = 'F1'
      Size = 30
    end
    object Table16C1: TStringField
      FieldName = 'C1'
      Size = 30
    end
    object Table16B2: TStringField
      FieldName = 'B2'
      Size = 30
    end
    object Table16F2: TStringField
      FieldName = 'F2'
      Size = 30
    end
    object Table16C2: TStringField
      FieldName = 'C2'
      Size = 30
    end
    object Table16B3: TStringField
      FieldName = 'B3'
      Size = 30
    end
    object Table16F3: TStringField
      FieldName = 'F3'
      Size = 30
    end
    object Table16C3: TStringField
      FieldName = 'C3'
      Size = 30
    end
    object Table16B4: TStringField
      FieldName = 'B4'
      Size = 30
    end
    object Table16F4: TStringField
      FieldName = 'F4'
      Size = 30
    end
    object Table16C4: TStringField
      FieldName = 'C4'
      Size = 30
    end
    object Table16CNPA: TFloatField
      DefaultExpression = '0'
      FieldName = 'CNPA'
    end
    object Table16CAAMBP: TFloatField
      DefaultExpression = '0'
      FieldName = 'CAAMBP'
    end
    object Table16A_LOCA: TStringField
      FieldName = 'A_LOCA'
      Size = 15
    end
    object Table16A_STR: TStringField
      FieldName = 'A_STR'
      Size = 15
    end
    object Table16A_NR: TIntegerField
      FieldName = 'A_NR'
    end
    object Table16A_BL: TStringField
      FieldName = 'A_BL'
      Size = 10
    end
    object Table16A_SC: TStringField
      FieldName = 'A_SC'
      Size = 10
    end
    object Table16A_ET: TIntegerField
      FieldName = 'A_ET'
    end
    object Table16A_AP: TIntegerField
      FieldName = 'A_AP'
    end
    object Table16TELEFON: TFloatField
      FieldName = 'TELEFON'
    end
    object Table16A_JUD: TStringField
      FieldName = 'A_JUD'
      Size = 15
    end
    object Table16A_SECT: TStringField
      FieldName = 'A_SECT'
      Size = 10
    end
    object Table16E_MAIL: TStringField
      FieldName = 'E_MAIL'
      Size = 30
    end
  end
  object Table17: TTable
    TableName = 'A11.DBF'
    TableType = ttFoxPro
    Left = 472
    Top = 256
  end
  object Table18: TTable
    TableName = 'A12.DBF'
    TableType = ttFoxPro
    Left = 544
    Top = 256
  end
  object a1: TBatchMove
    AbortOnProblem = False
    Destination = Table13
    Source = Table11
    Left = 64
    Top = 328
  end
  object a2: TBatchMove
    AbortOnProblem = False
    Destination = Table14
    Source = Table12
    Left = 144
    Top = 328
  end
  object b1: TBatchMove
    AbortOnProblem = False
    Destination = Table17
    Source = Table15
    Left = 376
    Top = 328
  end
  object b2: TBatchMove
    AbortOnProblem = False
    Destination = Table18
    Source = Table16
    Left = 472
    Top = 328
  end
  object Table2: TTable
    DatabaseName = 'data\'
    Left = 80
    Top = 48
    object Table2Nume: TStringField
      FieldName = 'Nume'
      Size = 25
    end
    object Table2Prenume: TStringField
      FieldName = 'Prenume'
      Size = 25
    end
    object Table2Cod: TStringField
      FieldName = 'Cod'
      Size = 25
    end
    object Table2Cnp: TFloatField
      FieldName = 'Cnp'
    end
    object Table2Functie: TStringField
      FieldName = 'Functie'
      Size = 25
    end
    object Table2Cod_functie: TStringField
      FieldName = 'Cod_functie'
      Size = 25
    end
    object Table2Sectia: TStringField
      FieldName = 'Sectia'
      Size = 25
    end
    object Table2Marca: TStringField
      FieldName = 'Marca'
      Size = 25
    end
    object Table2Data_angajare: TDateField
      FieldName = 'Data_angajare'
    end
    object Table2Salar_tarifar: TFloatField
      DefaultExpression = '0'
      FieldName = 'Salar_tarifar'
      DisplayFormat = '###,###,###,##0'
    end
    object Table2Prima: TFloatField
      DefaultExpression = '0'
      FieldName = 'Prima'
      DisplayFormat = '###,###,###,##0'
    end
    object Table2Data_prima_angajare: TDateField
      FieldName = 'Data_prima_angajare'
    end
    object Table2Spor_vechime: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'Spor_vechime'
    end
    object Table2Regie: TBooleanField
      DefaultExpression = 'true'
      FieldName = 'Regie'
    end
    object Table2Sex: TStringField
      FieldName = 'Sex'
      Size = 1
    end
    object Table2Stare_civila: TStringField
      FieldName = 'Stare_civila'
      Size = 12
    end
    object Table2Telefon: TFloatField
      FieldName = 'Telefon'
    end
    object Table2Adresa: TMemoField
      FieldName = 'Adresa'
      BlobType = ftMemo
      Size = 1
    end
    object Table2Data_nastere: TDateField
      FieldName = 'Data_nastere'
    end
    object Table2Stagiu_militar: TBooleanField
      FieldName = 'Stagiu_militar'
    end
    object Table2Livret_militar: TStringField
      FieldName = 'Livret_militar'
      Size = 25
    end
    object Table2Studii: TMemoField
      FieldName = 'Studii'
      BlobType = ftMemo
      Size = 1
    end
    object Table2Numar_copii: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Numar_copii'
    end
    object Table2Date_copii: TMemoField
      FieldName = 'Date_copii'
      BlobType = ftMemo
      Size = 1
    end
    object Table2Pers_handicapate_grI: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'Pers_handicapate_grI'
    end
    object Table2Pers_handicapate_grII: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'Pers_handicapate_grII'
    end
    object Table2Sotie_in_intretinere: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'Sotie_in_intretinere'
    end
    object Table2Concediu_pe_an: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Concediu_pe_an'
    end
    object Table2Norma_ore_zi: TIntegerField
      DefaultExpression = '8'
      FieldName = 'Norma_ore_zi'
    end
    object Table2Pensionar: TBooleanField
      DefaultExpression = 'FALSE'
      FieldName = 'Pensionar'
    end
    object Table2BASS: TFloatField
      DefaultExpression = '0'
      FieldName = 'BASS'
      DisplayFormat = '###,###,###,##0'
    end
    object Table2partial: TBooleanField
      DefaultExpression = 'FALSE'
      FieldName = 'partial'
    end
    object Table2ore_zi: TIntegerField
      DefaultExpression = '0'
      FieldName = 'ore_zi'
    end
    object Table2fara_deducere: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'fara_deducere'
    end
  end
end
