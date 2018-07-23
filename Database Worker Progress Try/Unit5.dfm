object DM1: TDM1
  OldCreateOrder = False
  Left = 196
  Top = 126
  Height = 480
  Width = 696
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 16
    Top = 8
  end
  object DataSource2: TDataSource
    DataSet = Table2
    Left = 88
    Top = 8
  end
  object Table1: TTable
    DatabaseName = 'somaj\'
    TableName = 'A1_2003august.DB'
    Left = 16
    Top = 56
    object Table1An: TFloatField
      FieldName = 'An'
    end
    object Table1Ln: TIntegerField
      FieldName = 'Ln'
      MaxValue = 12
    end
    object Table1Cf: TFloatField
      FieldName = 'Cf'
      Precision = 2
    end
    object Table1Cn: TFloatField
      FieldName = 'Cn'
      Precision = 2
    end
    object Table1Nume: TStringField
      FieldName = 'Nume'
      Size = 30
    end
    object Table1Cnp: TFloatField
      FieldName = 'Cnp'
      Precision = 2
    end
    object Table1Rm: TIntegerField
      FieldName = 'Rm'
      MaxValue = 1
    end
    object Table1Cv: TIntegerField
      FieldName = 'Cv'
      MaxValue = 1
    end
    object Table1Sbl: TFloatField
      FieldName = 'Sbl'
      Precision = 2
    end
    object Table1Cid: TFloatField
      FieldName = 'Cid'
      Precision = 2
    end
    object Table1Civ: TFloatField
      FieldName = 'Civ'
      Precision = 2
    end
    object Table1Cin: TFloatField
      FieldName = 'Cin'
      Precision = 2
    end
  end
  object Table2: TTable
    DatabaseName = 'somaj\'
    TableName = 'A2_2003august.DB'
    Left = 88
    Top = 56
    object Table2Nri: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Nri'
    end
    object Table2Datai: TDateField
      FieldName = 'Datai'
    end
    object Table2An: TSmallintField
      FieldName = 'An'
      MaxValue = 2030
    end
    object Table2Ln: TSmallintField
      FieldName = 'Ln'
      MaxValue = 12
    end
    object Table2Datal: TDateField
      FieldName = 'Datal'
    end
    object Table2Den: TStringField
      FieldName = 'Den'
      Size = 60
    end
    object Table2Cf: TFloatField
      FieldName = 'Cf'
      Precision = 2
    end
    object Table2Rj: TStringField
      FieldName = 'Rj'
      Size = 3
    end
    object Table2Rn: TSmallintField
      FieldName = 'Rn'
    end
    object Table2Ra: TSmallintField
      FieldName = 'Ra'
    end
    object Table2Nra: TSmallintField
      DefaultExpression = '0'
      FieldName = 'Nra'
    end
    object Table2Fs: TFloatField
      DefaultExpression = '0'
      FieldName = 'Fs'
      Precision = 2
    end
    object Table2Tcad: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcad'
      Precision = 2
    end
    object Table2Tcav: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcav'
      Precision = 2
    end
    object Table2Tcan: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcan'
      Precision = 2
    end
    object Table2Ded: TFloatField
      DefaultExpression = '0'
      FieldName = 'Ded'
      Precision = 2
    end
    object Table2Tcid: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcid'
      Precision = 2
    end
    object Table2Tciv: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tciv'
      Precision = 2
    end
    object Table2Tcin: TFloatField
      DefaultExpression = '0'
      FieldName = 'Tcin'
      Precision = 2
    end
    object Table2Totd: TFloatField
      DefaultExpression = '0'
      FieldName = 'Totd'
      Precision = 2
    end
    object Table2Totv: TFloatField
      DefaultExpression = '0'
      FieldName = 'Totv'
      Precision = 2
    end
    object Table2Totn: TFloatField
      DefaultExpression = '0'
      FieldName = 'Totn'
      Precision = 2
    end
    object Table2Obl: TFloatField
      DefaultExpression = '0'
      FieldName = 'Obl'
      Precision = 2
    end
    object Table2Oblna: TFloatField
      DefaultExpression = '0'
      FieldName = 'Oblna'
      Precision = 2
    end
    object Table2Oblni: TFloatField
      DefaultExpression = '0'
      FieldName = 'Oblni'
      Precision = 2
    end
    object Table2Maj: TFloatField
      DefaultExpression = '0'
      FieldName = 'Maj'
      Precision = 2
    end
    object Table2Pen: TFloatField
      DefaultExpression = '0'
      FieldName = 'Pen'
      Precision = 2
    end
    object Table2Totobl: TFloatField
      DefaultExpression = '0'
      FieldName = 'Totobl'
      Precision = 2
    end
    object Table2B1: TStringField
      FieldName = 'B1'
      Size = 30
    end
    object Table2F1: TStringField
      FieldName = 'F1'
      Size = 30
    end
    object Table2C1: TStringField
      FieldName = 'C1'
      Size = 30
    end
    object Table2B2: TStringField
      FieldName = 'B2'
      Size = 30
    end
    object Table2F2: TStringField
      FieldName = 'F2'
      Size = 30
    end
    object Table2C2: TStringField
      FieldName = 'C2'
      Size = 30
    end
    object Table2Funca: TStringField
      FieldName = 'Funca'
      Size = 30
    end
    object Table2Numea: TStringField
      FieldName = 'Numea'
      Size = 30
    end
    object Table2Datad: TDateField
      FieldName = 'Datad'
    end
    object Table2Sup: TSmallintField
      DefaultExpression = '1'
      FieldName = 'Sup'
      MaxValue = 2
      MinValue = 1
    end
  end
  object Table4: TTable
    TableName = 'A2.dbf'
    TableType = ttFoxPro
    Left = 240
    Top = 56
  end
  object a1: TBatchMove
    Destination = Table3
    Source = Table1
    Left = 16
    Top = 152
  end
  object a2: TBatchMove
    AbortOnKeyViol = False
    AbortOnProblem = False
    Destination = Table4
    Source = Table2
    Left = 152
    Top = 152
  end
  object Table3: TTable
    TableName = 'A1.dbf'
    TableType = ttFoxPro
    Left = 176
    Top = 56
  end
  object Table5: TTable
    DatabaseName = 'cas\'
    Left = 16
    Top = 216
    object Table5AN: TIntegerField
      FieldName = 'AN'
    end
    object Table5LN: TIntegerField
      FieldName = 'LN'
    end
    object Table5CF: TFloatField
      FieldName = 'CF'
    end
    object Table5RJ: TStringField
      FieldName = 'RJ'
      Size = 4
    end
    object Table5RN: TIntegerField
      FieldName = 'RN'
    end
    object Table5RA: TIntegerField
      FieldName = 'RA'
    end
    object Table5NUME: TStringField
      FieldName = 'NUME'
      Size = 30
    end
    object Table5CNP: TFloatField
      FieldName = 'CNP'
    end
    object Table5CM: TIntegerField
      FieldName = 'CM'
    end
    object Table5CV: TIntegerField
      FieldName = 'CV'
    end
    object Table5PE: TIntegerField
      FieldName = 'PE'
    end
    object Table5SOM: TIntegerField
      FieldName = 'SOM'
    end
    object Table5TT: TIntegerField
      FieldName = 'TT'
    end
    object Table5NN: TIntegerField
      FieldName = 'NN'
    end
    object Table5DD: TIntegerField
      FieldName = 'DD'
    end
    object Table5SS: TIntegerField
      FieldName = 'SS'
    end
    object Table5PP: TIntegerField
      FieldName = 'PP'
    end
    object Table5TV: TFloatField
      FieldName = 'TV'
    end
    object Table5TVN: TFloatField
      FieldName = 'TVN'
    end
    object Table5TVD: TFloatField
      FieldName = 'TVD'
    end
    object Table5TVS: TFloatField
      FieldName = 'TVS'
    end
    object Table5CASAT: TFloatField
      FieldName = 'CASAT'
    end
    object Table5CASTOT: TFloatField
      FieldName = 'CASTOT'
    end
    object Table5BASS: TFloatField
      FieldName = 'BASS'
    end
    object Table5CNPA: TFloatField
      FieldName = 'CNPA'
    end
    object Table5NORMA: TIntegerField
      FieldName = 'NORMA'
    end
  end
  object Table6: TTable
    DatabaseName = 'cas\'
    Left = 64
    Top = 216
    object Table6AN: TIntegerField
      FieldName = 'AN'
    end
    object Table6LN: TIntegerField
      FieldName = 'LN'
    end
    object Table6DCZZ: TIntegerField
      FieldName = 'DCZZ'
    end
    object Table6DCLL: TIntegerField
      FieldName = 'DCLL'
    end
    object Table6DCAA: TIntegerField
      FieldName = 'DCAA'
    end
    object Table6DEN: TStringField
      FieldName = 'DEN'
      Size = 60
    end
    object Table6CF: TFloatField
      FieldName = 'CF'
    end
    object Table6RJ: TStringField
      FieldName = 'RJ'
      Size = 4
    end
    object Table6RN: TIntegerField
      FieldName = 'RN'
    end
    object Table6RA: TIntegerField
      FieldName = 'RA'
    end
    object Table6NRM: TIntegerField
      FieldName = 'NRM'
    end
    object Table6FS: TFloatField
      FieldName = 'FS'
    end
    object Table6FSN: TFloatField
      FieldName = 'FSN'
    end
    object Table6FSD: TFloatField
      FieldName = 'FSD'
    end
    object Table6FSS: TFloatField
      FieldName = 'FSS'
    end
    object Table6CASS: TFloatField
      FieldName = 'CASS'
    end
    object Table6CASAN: TFloatField
      FieldName = 'CASAN'
    end
    object Table6BASS: TFloatField
      FieldName = 'BASS'
    end
    object Table6CAS145: TFloatField
      FieldName = 'CAS145'
    end
    object Table6CASVIR: TFloatField
      FieldName = 'CASVIR'
    end
    object Table6NRF: TIntegerField
      FieldName = 'NRF'
    end
    object Table6B1: TStringField
      FieldName = 'B1'
      Size = 30
    end
    object Table6F1: TStringField
      FieldName = 'F1'
      Size = 30
    end
    object Table6C1: TStringField
      FieldName = 'C1'
      Size = 30
    end
    object Table6B2: TStringField
      FieldName = 'B2'
      Size = 30
    end
    object Table6F2: TStringField
      FieldName = 'F2'
      Size = 30
    end
    object Table6C2: TStringField
      FieldName = 'C2'
      Size = 30
    end
    object Table6B3: TStringField
      FieldName = 'B3'
      Size = 30
    end
    object Table6F3: TStringField
      FieldName = 'F3'
      Size = 30
    end
    object Table6C3: TStringField
      FieldName = 'C3'
      Size = 30
    end
    object Table6B4: TStringField
      FieldName = 'B4'
      Size = 30
    end
    object Table6F4: TStringField
      FieldName = 'F4'
      Size = 30
    end
    object Table6C4: TStringField
      FieldName = 'C4'
      Size = 30
    end
    object Table6CNPA: TFloatField
      FieldName = 'CNPA'
    end
    object Table6CAAMBP: TFloatField
      FieldName = 'CAAMBP'
    end
    object Table6A_LOCA: TStringField
      FieldName = 'A_LOCA'
      Size = 15
    end
    object Table6A_STR: TStringField
      FieldName = 'A_STR'
      Size = 15
    end
    object Table6A_NR: TIntegerField
      FieldName = 'A_NR'
    end
    object Table6A_BL: TStringField
      FieldName = 'A_BL'
      Size = 10
    end
    object Table6A_SC: TStringField
      FieldName = 'A_SC'
      Size = 10
    end
    object Table6A_ET: TIntegerField
      FieldName = 'A_ET'
    end
    object Table6A_AP: TIntegerField
      FieldName = 'A_AP'
    end
    object Table6TELEFON: TFloatField
      FieldName = 'TELEFON'
    end
    object Table6A_JUD: TStringField
      FieldName = 'A_JUD'
      Size = 15
    end
    object Table6A_SECT: TStringField
      FieldName = 'A_SECT'
      Size = 10
    end
    object Table6E_MAIL: TStringField
      FieldName = 'E_MAIL'
      Size = 30
    end
  end
  object Table7: TTable
    TableName = 'A11.DBF'
    TableType = ttFoxPro
    Left = 176
    Top = 216
  end
  object Table8: TTable
    TableName = 'A12.DBF'
    TableType = ttFoxPro
    Left = 224
    Top = 216
  end
  object b1: TBatchMove
    Destination = Table7
    Source = Table5
    Left = 104
    Top = 272
  end
  object b2: TBatchMove
    Destination = Table8
    Source = Table6
    Left = 144
    Top = 272
  end
end
