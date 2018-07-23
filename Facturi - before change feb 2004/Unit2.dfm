object dm: Tdm
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Left = 215
  Top = 120
  Height = 588
  Width = 804
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 24
    Top = 8
  end
  object Table1: TTable
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
    TableName = 'raluca.DB'
    Left = 24
    Top = 56
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
    object Table1capital_social: TFloatField
      DefaultExpression = '0'
      FieldName = 'capital_social'
      DisplayFormat = '###,###,###,##0'
    end
  end
  object DataSource2: TDataSource
    DataSet = Table2
    Left = 96
    Top = 8
  end
  object Table2: TTable
    DatabaseName = 'data\'
    Left = 96
    Top = 56
    object Table2an: TIntegerField
      FieldName = 'an'
    end
    object Table2luna: TStringField
      FieldName = 'luna'
      Size = 15
    end
  end
  object DataSource3: TDataSource
    DataSet = io
    Left = 24
    Top = 112
  end
  object DataSource5: TDataSource
    DataSet = in
    Left = 96
    Top = 112
  end
  object DataSource4: TDataSource
    DataSet = firme
    Left = 192
    Top = 8
  end
  object firme: TTable
    TableName = 'firme'
    Left = 192
    Top = 56
    object firmenume_firma: TStringField
      FieldName = 'nume_firma'
      Size = 60
    end
    object firmej: TStringField
      FieldName = 'j'
    end
    object firmefisc: TStringField
      FieldName = 'fisc'
    end
    object firmebanca: TStringField
      FieldName = 'banca'
      Size = 30
    end
    object firmefiliala: TStringField
      FieldName = 'filiala'
      Size = 30
    end
    object firmecont_banca: TStringField
      FieldName = 'cont_banca'
      Size = 30
    end
    object firmeadresa: TMemoField
      FieldName = 'adresa'
      BlobType = ftMemo
    end
    object firmetelefon: TFloatField
      FieldName = 'telefon'
    end
    object firmeemail: TStringField
      FieldName = 'e-mail'
      Size = 30
    end
    object firmecapital_social: TFloatField
      DefaultExpression = '0'
      FieldName = 'capital_social'
      DisplayFormat = '###,###,###,##0'
    end
  end
  object DataSource6: TDataSource
    DataSet = delegati
    Left = 256
    Top = 8
  end
  object delegati: TTable
    TableName = 'delegati'
    Left = 256
    Top = 56
    object delegatinume_delegat: TStringField
      FieldName = 'nume_delegat'
      Size = 30
    end
    object delegatibuletin_delegat: TStringField
      FieldName = 'buletin_delegat'
    end
  end
  object DataSource7: TDataSource
    DataSet = magazie
    Left = 320
    Top = 8
  end
  object magazie: TTable
    TableName = 'magazie'
    Left = 320
    Top = 56
    object magazienume_firma: TStringField
      FieldName = 'nume_firma'
      Size = 60
    end
    object magaziej: TStringField
      FieldName = 'j'
    end
    object magaziefisc: TStringField
      FieldName = 'fisc'
    end
    object magazienr_factura: TIntegerField
      FieldName = 'nr_factura'
    end
    object magaziedata_factura: TDateField
      FieldName = 'data_factura'
    end
    object magazieDenumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object magaziepret_unitar: TFloatField
      DefaultExpression = '0'
      FieldName = 'pret_unitar'
      DisplayFormat = '###,###,###,##0'
    end
    object magazieintrare: TIntegerField
      DefaultExpression = '0'
      FieldName = 'intrare'
      DisplayFormat = '###,###,###,##0'
    end
    object magazieiesire: TIntegerField
      DefaultExpression = '0'
      FieldName = 'iesire'
      DisplayFormat = '###,###,###,##0'
    end
    object magaziestoc: TIntegerField
      DefaultExpression = '0'
      FieldName = 'stoc'
      DisplayFormat = '###,###,###,##0'
    end
    object magazievaloarea: TFloatField
      DefaultExpression = '0'
      FieldName = 'valoarea'
      DisplayFormat = '###,###,###,##0'
    end
    object magazietva: TFloatField
      DefaultExpression = '0'
      FieldName = 'tva'
      DisplayFormat = '###,###,###,##0'
    end
    object magaziecont: TStringField
      FieldName = 'cont'
      Size = 15
    end
    object magazielegatura: TStringField
      FieldName = 'legatura'
      Size = 8
    end
    object magazietip: TStringField
      FieldName = 'tip'
      Size = 10
    end
    object magazieunitatea: TStringField
      FieldName = 'unitatea'
    end
  end
  object in: TTable
    IndexDefs = <
      item
        Name = 'inIndex1'
        Fields = 'nr_factura'
      end
      item
        Name = 'inIndex2'
        Fields = 'trick'
        Options = [ixPrimary, ixUnique]
      end>
    StoreDefs = True
    Left = 96
    Top = 160
    object intrick: TIntegerField
      FieldName = 'trick'
    end
    object innr_factura: TIntegerField
      FieldName = 'nr_factura'
    end
    object inDenumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object inunitatea: TStringField
      FieldName = 'unitatea'
    end
    object incantitate: TIntegerField
      DefaultExpression = '0'
      FieldName = 'cantitate'
      DisplayFormat = '###,###,###,##0'
    end
    object inpret_unitar: TFloatField
      DefaultExpression = '0'
      FieldName = 'pret_unitar'
      DisplayFormat = '###,###,###,##0'
    end
    object invaloarea: TFloatField
      DefaultExpression = '0'
      FieldName = 'valoarea'
      DisplayFormat = '###,###,###,##0'
    end
    object intva: TFloatField
      DefaultExpression = '0'
      FieldName = 'tva'
      DisplayFormat = '###,###,###,##0'
    end
    object incont: TStringField
      FieldName = 'cont'
      Size = 15
    end
  end
  object stoc: TTable
    TableName = 'stoc'
    Left = 320
    Top = 104
    object stocDenumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object stocintrare: TIntegerField
      DefaultExpression = '0'
      FieldName = 'intrare'
      DisplayFormat = '###,###,###,##0'
    end
    object stociesire: TIntegerField
      DefaultExpression = '0'
      FieldName = 'iesire'
      DisplayFormat = '###,###,###,##0'
    end
    object stocstoc: TIntegerField
      DefaultExpression = '0'
      FieldName = 'stoc'
      DisplayFormat = '###,###,###,##0'
    end
    object stoccont: TStringField
      FieldName = 'cont'
      Size = 15
    end
    object stocunitatea: TStringField
      FieldName = 'unitatea'
    end
  end
  object Source: TTable
    TableName = 'stoc'
    Left = 384
    Top = 160
    object SourceDenumire: TStringField
      FieldName = 'Denumire'
      Size = 60
    end
    object Sourceintrare: TIntegerField
      DefaultExpression = '0'
      FieldName = 'intrare'
      DisplayFormat = '###,###,###,##0'
    end
    object Sourceiesire: TIntegerField
      DefaultExpression = '0'
      FieldName = 'iesire'
      DisplayFormat = '###,###,###,##0'
    end
    object Sourcestoc: TIntegerField
      DefaultExpression = '0'
      FieldName = 'stoc'
      DisplayFormat = '###,###,###,##0'
    end
    object Sourcecont: TStringField
      FieldName = 'cont'
      Size = 15
    end
    object Sourceunitatea: TStringField
      FieldName = 'unitatea'
    end
  end
  object batch1: TBatchMove
    Left = 320
    Top = 160
  end
  object DataSource8: TDataSource
    DataSet = cb
    Left = 176
    Top = 352
  end
  object DataSource9: TDataSource
    DataSet = plativaluta
    Left = 96
    Top = 216
  end
  object plativaluta: TTable
    IndexDefs = <
      item
        Name = 'plativalutaIndex1'
        Fields = 'trick'
        Options = [ixPrimary]
      end
      item
        Name = 'plativalutaIndex2'
        Fields = 'nr_factura'
      end>
    StoreDefs = True
    TableName = 'plati'
    Left = 96
    Top = 264
    object plativalutatrick: TIntegerField
      FieldName = 'trick'
    end
    object plativalutanr_factura: TIntegerField
      FieldName = 'nr_factura'
    end
    object plativalutaio: TStringField
      FieldName = 'io'
    end
    object plativalutatip: TStringField
      FieldName = 'tip'
    end
    object plativalutanr_act_achitare: TStringField
      FieldName = 'nr_act_achitare'
      Size = 15
    end
    object plativalutamoneda: TStringField
      FieldName = 'moneda'
    end
    object plativalutacurs_valutar: TFloatField
      DefaultExpression = '0'
      FieldName = 'curs_valutar'
      DisplayFormat = '###,###,###,##0'
    end
    object plativalutaintrare: TFloatField
      DefaultExpression = '0'
      FieldName = 'intrare'
      DisplayFormat = '###,###,###,##0'
    end
    object plativalutaiesire: TFloatField
      DefaultExpression = '0'
      FieldName = 'iesire'
      DisplayFormat = '###,###,###,##0'
    end
    object plativalutavaluta_intrare: TFloatField
      DefaultExpression = '0'
      FieldName = 'valuta_intrare'
      DisplayFormat = '#,#'
    end
    object plativalutavaluta_iesire: TFloatField
      DefaultExpression = '0'
      FieldName = 'valuta_iesire'
      DisplayFormat = '#,#'
    end
  end
  object cb: TTable
    Left = 176
    Top = 408
    object cbnr_act: TStringField
      FieldName = 'nr_act'
      Size = 15
    end
    object cbnr_anexa: TIntegerField
      FieldName = 'nr_anexa'
    end
    object cbdata: TDateField
      FieldName = 'data'
    end
    object cbexplicatia: TStringField
      FieldName = 'explicatia'
      Size = 60
    end
    object cbtip: TStringField
      FieldName = 'tip'
      Size = 10
    end
    object cbio: TStringField
      FieldName = 'io'
    end
    object cbcurs_valutar: TFloatField
      DefaultExpression = '0'
      FieldName = 'curs_valutar'
      DisplayFormat = '###,###,###,##0'
    end
    object cbintrare: TFloatField
      DefaultExpression = '0'
      FieldName = 'intrare'
      DisplayFormat = '###,###,###,##0'
    end
    object cbiesire: TFloatField
      DefaultExpression = '0'
      FieldName = 'iesire'
      DisplayFormat = '###,###,###,##0'
    end
    object cbfacturi_achitate: TMemoField
      FieldName = 'facturi_achitate'
      BlobType = ftMemo
      Size = 1
    end
    object cbchecked: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'checked'
    end
    object cbcont: TStringField
      FieldName = 'cont'
      Size = 15
    end
    object cbstand_by: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'stand_by'
    end
    object cbcatre: TStringField
      FieldName = 'catre'
      Size = 60
    end
    object cbvaluta_intrare: TFloatField
      DefaultExpression = '0'
      FieldName = 'valuta_intrare'
      DisplayFormat = '#,#'
    end
    object cbvaluta_iesire: TFloatField
      DefaultExpression = '0'
      FieldName = 'valuta_iesire'
      DisplayFormat = '#,#'
    end
    object cbsoldbool: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'soldbool'
    end
    object cbsold_lei: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_lei'
      DisplayFormat = '#,#'
    end
    object cbsold_valuta: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_valuta'
      DisplayFormat = '#,#'
    end
    object cbsuma_intrare_disponibila: TFloatField
      DefaultExpression = '0'
      FieldName = 'suma_intrare_disponibila'
      DisplayFormat = '#,#'
    end
    object cbsuma_iesire_disponibila: TFloatField
      DefaultExpression = '0'
      FieldName = 'suma_iesire_disponibila'
      DisplayFormat = '#,#'
    end
  end
  object DataSource10: TDataSource
    DataSet = casa
    Left = 16
    Top = 352
  end
  object casa: TTable
    TableName = 'casa'
    Left = 16
    Top = 408
    object casamoneda: TStringField
      FieldName = 'moneda'
      Size = 30
    end
  end
  object DataSource11: TDataSource
    DataSet = casalei
    Left = 96
    Top = 352
  end
  object casalei: TTable
    StoreDefs = True
    TableName = 'casalei'
    Left = 96
    Top = 408
    object casaleinr_act: TStringField
      FieldName = 'nr_act'
      Size = 15
    end
    object casaleinr_anexa: TIntegerField
      FieldName = 'nr_anexa'
    end
    object casaleidata: TDateField
      FieldName = 'data'
    end
    object casaleiexplicatia: TStringField
      FieldName = 'explicatia'
      Size = 60
    end
    object casaleitip: TStringField
      FieldName = 'tip'
      Size = 10
    end
    object casaleiio: TStringField
      FieldName = 'io'
    end
    object casaleiintrare: TFloatField
      DefaultExpression = '0'
      FieldName = 'intrare'
      DisplayFormat = '###,###,###,##0'
    end
    object casaleiiesire: TFloatField
      DefaultExpression = '0'
      FieldName = 'iesire'
      DisplayFormat = '###,###,###,##0'
    end
    object casaleifacturi_achitate: TMemoField
      FieldName = 'facturi_achitate'
      BlobType = ftMemo
      Size = 1
    end
    object casaleichecked: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'checked'
    end
    object casaleicont: TStringField
      FieldName = 'cont'
      Size = 15
    end
    object casaleistand_by: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'stand_by'
    end
    object casaleicatre: TStringField
      FieldName = 'catre'
      Size = 60
    end
    object casaleisoldbool: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'soldbool'
    end
    object casaleisold_lei: TFloatField
      DefaultExpression = '0'
      FieldName = 'sold_lei'
      DisplayFormat = '#,#'
    end
    object casaleisuma_intrare_disponibila: TFloatField
      DefaultExpression = '0'
      FieldName = 'suma_intrare_disponibila'
      DisplayFormat = '#,#'
    end
    object casaleisuma_iesire_disponibila: TFloatField
      DefaultExpression = '0'
      FieldName = 'suma_iesire_disponibila'
      DisplayFormat = '#,#'
    end
  end
  object DataSource12: TDataSource
    DataSet = banca
    Left = 256
    Top = 352
  end
  object banca: TTable
    TableName = 'banca'
    Left = 256
    Top = 408
    object bancabanca: TStringField
      FieldName = 'banca'
      Size = 40
    end
    object bancamoneda: TStringField
      FieldName = 'moneda'
      Size = 30
    end
    object bancacont: TStringField
      FieldName = 'cont'
      Size = 40
    end
    object bancalegatura: TStringField
      FieldName = 'legatura'
      Size = 25
    end
  end
  object io: TTable
    Left = 24
    Top = 160
    object ionume_firma: TStringField
      FieldName = 'nume_firma'
      Size = 60
    end
    object ioj: TStringField
      FieldName = 'j'
    end
    object iofisc: TStringField
      FieldName = 'fisc'
    end
    object iobanca: TStringField
      FieldName = 'banca'
      Size = 30
    end
    object iofiliala: TStringField
      FieldName = 'filiala'
      Size = 30
    end
    object iocont_banca: TStringField
      FieldName = 'cont_banca'
      Size = 30
    end
    object ioadresa: TMemoField
      FieldName = 'adresa'
      BlobType = ftMemo
    end
    object iotelefon: TFloatField
      FieldName = 'telefon'
    end
    object ioemail: TStringField
      FieldName = 'e-mail'
      Size = 30
    end
    object ionr_factura: TIntegerField
      FieldName = 'nr_factura'
    end
    object iodata_factura: TDateField
      FieldName = 'data_factura'
    end
    object ionr_aviz_marfa: TIntegerField
      FieldName = 'nr_aviz_marfa'
    end
    object ionume_pers_intocmire: TStringField
      FieldName = 'nume_pers_intocmire'
      Size = 30
    end
    object iobuletin_pers_intocmire: TStringField
      FieldName = 'buletin_pers_intocmire'
    end
    object iocnp_pers_intocmire: TFloatField
      FieldName = 'cnp_pers_intocmire'
    end
    object ionume_delegat: TStringField
      FieldName = 'nume_delegat'
      Size = 30
    end
    object iobuletin_delegat: TStringField
      FieldName = 'buletin_delegat'
    end
    object iomijloc_transport: TStringField
      FieldName = 'mijloc_transport'
      Size = 30
    end
    object ionr_transport: TStringField
      FieldName = 'nr_transport'
    end
    object iodata_expediere: TDateField
      FieldName = 'data_expediere'
    end
    object iototal_valoare: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_valoare'
      DisplayFormat = '###,###,###,##0'
    end
    object iototal_tva: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_tva'
      DisplayFormat = '###,###,###,##0'
    end
    object iototal_plata: TFloatField
      DefaultExpression = '0'
      FieldName = 'total_plata'
      DisplayFormat = '###,###,###,##0'
    end
    object iolegatura: TStringField
      FieldName = 'legatura'
      Size = 8
    end
    object iocapital_social: TFloatField
      DefaultExpression = '0'
      FieldName = 'capital_social'
      DisplayFormat = '###,###,###,##0'
    end
    object iotermen_plata: TDateField
      FieldName = 'termen_plata'
    end
    object iob: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'b'
    end
    object ioc: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'c'
    end
    object iosuma_achitata: TFloatField
      FieldName = 'suma_achitata'
    end
    object ioachitare_totala: TBooleanField
      DefaultExpression = 'false'
      FieldKind = fkCalculated
      FieldName = 'achitare_totala'
      Calculated = True
    end
    object ioachitare_partiala: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'achitare_partiala'
    end
  end
  object DataSource13: TDataSource
    DataSet = platilei
    Left = 24
    Top = 216
  end
  object platilei: TTable
    IndexDefs = <
      item
        Name = 'platileiIndex1'
        Fields = 'trick'
        Options = [ixPrimary]
      end
      item
        Name = 'platileiIndex2'
        Fields = 'nr_factura'
      end>
    MasterSource = DataSource3
    StoreDefs = True
    Left = 24
    Top = 264
    object platileitrick: TIntegerField
      FieldName = 'trick'
    end
    object platileinr_factura: TIntegerField
      FieldName = 'nr_factura'
    end
    object platileitip: TStringField
      FieldName = 'tip'
    end
    object platileinr_act_achitare: TStringField
      FieldName = 'nr_act_achitare'
      Size = 15
    end
    object platileiintrare: TFloatField
      DefaultExpression = '0'
      FieldName = 'intrare'
      DisplayFormat = '###,###,###,##0'
    end
    object platileiiesire: TFloatField
      DefaultExpression = '0'
      FieldName = 'iesire'
      DisplayFormat = '###,###,###,##0'
    end
  end
end
