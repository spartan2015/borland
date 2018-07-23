object factura: Tfactura
  Left = 84
  Top = 104
  BorderIcons = [biMinimize, biMaximize]
  BorderStyle = bsSingle
  Caption = 'factura'
  ClientHeight = 566
  ClientWidth = 917
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 20
  object Label1: TLabel
    Left = 16
    Top = 0
    Width = 63
    Height = 24
    Caption = 'Label1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label10: TLabel
    Left = 8
    Top = 48
    Width = 40
    Height = 20
    Caption = 'Firma'
  end
  object Label11: TLabel
    Left = 8
    Top = 72
    Width = 8
    Height = 20
    Caption = 'J'
  end
  object Label12: TLabel
    Left = 8
    Top = 99
    Width = 29
    Height = 20
    Caption = 'Fisc'
  end
  object Label13: TLabel
    Left = 280
    Top = 40
    Width = 46
    Height = 20
    Caption = 'Banca'
  end
  object Label14: TLabel
    Left = 280
    Top = 69
    Width = 40
    Height = 20
    Caption = 'Filiala'
  end
  object Label15: TLabel
    Left = 280
    Top = 96
    Width = 82
    Height = 20
    Caption = 'Cont banca'
  end
  object Label16: TLabel
    Left = 544
    Top = 40
    Width = 53
    Height = 20
    Caption = 'Telefon'
  end
  object Label17: TLabel
    Left = 544
    Top = 64
    Width = 51
    Height = 20
    Caption = 'Adresa'
  end
  object Label18: TLabel
    Left = 544
    Top = 120
    Width = 42
    Height = 20
    Caption = 'e-mail'
  end
  object Label2: TLabel
    Left = 8
    Top = 168
    Width = 74
    Height = 20
    Caption = 'Nr. factura'
  end
  object Label3: TLabel
    Left = 216
    Top = 168
    Width = 89
    Height = 20
    Caption = 'Data factura'
  end
  object Label4: TLabel
    Left = 440
    Top = 168
    Width = 96
    Height = 20
    Caption = 'Nr. aviz marfa'
  end
  object Label5: TLabel
    Left = 8
    Top = 448
    Width = 42
    Height = 20
    Caption = 'Nume'
  end
  object Label6: TLabel
    Left = 8
    Top = 472
    Width = 88
    Height = 20
    Caption = 'Serie buletin'
  end
  object Label7: TLabel
    Left = 8
    Top = 496
    Width = 29
    Height = 20
    Caption = 'Cnp'
  end
  object Label8: TLabel
    Left = 64
    Top = 416
    Width = 104
    Height = 20
    Caption = 'Pers. intocmire'
  end
  object Label9: TLabel
    Left = 288
    Top = 415
    Width = 56
    Height = 20
    Caption = 'Delegat'
  end
  object Label19: TLabel
    Left = 232
    Top = 447
    Width = 42
    Height = 20
    Caption = 'Nume'
  end
  object Label20: TLabel
    Left = 232
    Top = 471
    Width = 88
    Height = 20
    Caption = 'Serie buletin'
  end
  object Label21: TLabel
    Left = 456
    Top = 440
    Width = 39
    Height = 20
    Caption = 'Mijloc'
  end
  object Label22: TLabel
    Left = 456
    Top = 472
    Width = 20
    Height = 20
    Caption = 'Nr.'
  end
  object Label23: TLabel
    Left = 512
    Top = 416
    Width = 68
    Height = 20
    Caption = 'Transport'
  end
  object Label24: TLabel
    Left = 456
    Top = 504
    Width = 86
    Height = 20
    Caption = 'Data exped.'
  end
  object Bevel2: TBevel
    Left = 0
    Top = 152
    Width = 873
    Height = 257
  end
  object Bevel3: TBevel
    Left = 0
    Top = 408
    Width = 873
    Height = 121
    Style = bsRaised
  end
  object Label25: TLabel
    Left = 720
    Top = 416
    Width = 35
    Height = 20
    Caption = 'Total'
  end
  object Label26: TLabel
    Left = 672
    Top = 448
    Width = 55
    Height = 20
    Caption = 'Valoare'
  end
  object Label27: TLabel
    Left = 672
    Top = 472
    Width = 31
    Height = 20
    Caption = 'TVA'
  end
  object Label28: TLabel
    Left = 672
    Top = 504
    Width = 36
    Height = 20
    Caption = 'Plata'
  end
  object Label29: TLabel
    Left = 280
    Top = 120
    Width = 93
    Height = 20
    Caption = 'Capital social'
  end
  object Bevel1: TBevel
    Left = 0
    Top = 32
    Width = 873
    Height = 121
    Style = bsRaised
  end
  object Label30: TLabel
    Left = 8
    Top = 536
    Width = 123
    Height = 20
    Caption = 'Termen de plata: '
  end
  object DBEdit1: TDBEdit
    Left = 56
    Top = 40
    Width = 217
    Height = 28
    DataField = 'nume_firma'
    DataSource = dm.DataSource3
    TabOrder = 0
  end
  object DBEdit2: TDBEdit
    Left = 56
    Top = 68
    Width = 217
    Height = 28
    DataField = 'j'
    DataSource = dm.DataSource3
    TabOrder = 1
  end
  object DBEdit3: TDBEdit
    Left = 56
    Top = 96
    Width = 217
    Height = 28
    DataField = 'fisc'
    DataSource = dm.DataSource3
    TabOrder = 2
  end
  object DBEdit4: TDBEdit
    Left = 376
    Top = 36
    Width = 145
    Height = 28
    DataField = 'banca'
    DataSource = dm.DataSource3
    TabOrder = 3
  end
  object DBEdit5: TDBEdit
    Left = 376
    Top = 64
    Width = 145
    Height = 28
    DataField = 'filiala'
    DataSource = dm.DataSource3
    TabOrder = 4
  end
  object DBEdit6: TDBEdit
    Left = 376
    Top = 93
    Width = 145
    Height = 28
    DataField = 'cont_banca'
    DataSource = dm.DataSource3
    TabOrder = 5
  end
  object DBEdit7: TDBEdit
    Left = 616
    Top = 34
    Width = 217
    Height = 28
    DataField = 'telefon'
    DataSource = dm.DataSource3
    TabOrder = 7
  end
  object DBMemo1: TDBMemo
    Left = 616
    Top = 64
    Width = 217
    Height = 55
    DataField = 'adresa'
    DataSource = dm.DataSource3
    TabOrder = 8
  end
  object DBEdit8: TDBEdit
    Left = 616
    Top = 119
    Width = 217
    Height = 28
    DataField = 'e-mail'
    DataSource = dm.DataSource3
    TabOrder = 9
  end
  object DBEdit9: TDBEdit
    Left = 88
    Top = 160
    Width = 121
    Height = 28
    DataField = 'nr_factura'
    DataSource = dm.DataSource3
    TabOrder = 10
  end
  object DBEdit10: TDBEdit
    Left = 312
    Top = 160
    Width = 121
    Height = 28
    DataField = 'data_factura'
    DataSource = dm.DataSource3
    TabOrder = 11
  end
  object DBEdit11: TDBEdit
    Left = 544
    Top = 160
    Width = 121
    Height = 28
    DataField = 'nr_aviz_marfa'
    DataSource = dm.DataSource3
    TabOrder = 12
  end
  object DBEdit12: TDBEdit
    Left = 104
    Top = 440
    Width = 121
    Height = 28
    DataField = 'nume_pers_intocmire'
    DataSource = dm.DataSource3
    TabOrder = 13
  end
  object DBEdit13: TDBEdit
    Left = 104
    Top = 468
    Width = 121
    Height = 28
    DataField = 'buletin_pers_intocmire'
    DataSource = dm.DataSource3
    TabOrder = 14
  end
  object DBEdit14: TDBEdit
    Left = 104
    Top = 496
    Width = 121
    Height = 28
    DataField = 'cnp_pers_intocmire'
    DataSource = dm.DataSource3
    TabOrder = 15
  end
  object DBEdit15: TDBEdit
    Left = 328
    Top = 440
    Width = 121
    Height = 28
    DataField = 'nume_delegat'
    DataSource = dm.DataSource3
    TabOrder = 16
  end
  object DBEdit16: TDBEdit
    Left = 328
    Top = 469
    Width = 121
    Height = 28
    DataField = 'buletin_delegat'
    DataSource = dm.DataSource3
    TabOrder = 17
  end
  object DBEdit17: TDBEdit
    Left = 544
    Top = 440
    Width = 121
    Height = 28
    DataField = 'mijloc_transport'
    DataSource = dm.DataSource3
    TabOrder = 18
  end
  object DBEdit18: TDBEdit
    Left = 544
    Top = 468
    Width = 121
    Height = 28
    DataField = 'nr_transport'
    DataSource = dm.DataSource3
    TabOrder = 19
  end
  object DBEdit19: TDBEdit
    Left = 544
    Top = 495
    Width = 121
    Height = 28
    DataField = 'data_expediere'
    DataSource = dm.DataSource3
    TabOrder = 20
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 192
    Width = 857
    Height = 185
    DataSource = dm.DataSource13
    TabOrder = 21
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Denumire'
        Width = 350
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'unitatea'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cantitate'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'pret_unitar'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'valoarea'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'tva'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cont'
        Width = 85
        Visible = True
      end>
  end
  object DBNav: TDBNavigator
    Left = 8
    Top = 376
    Width = 280
    Height = 25
    DataSource = dm.DataSource5
    TabOrder = 22
  end
  object Button1: TButton
    Left = 384
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Adauga'
    TabOrder = 23
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 464
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Sterge'
    TabOrder = 24
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 832
    Top = 536
    Width = 75
    Height = 25
    Caption = 'Inchide'
    TabOrder = 25
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 608
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Salveaza'
    TabOrder = 26
    OnClick = Button4Click
  end
  object DBEdit20: TDBEdit
    Left = 736
    Top = 440
    Width = 121
    Height = 28
    DataField = 'total_valoare'
    DataSource = dm.DataSource3
    TabOrder = 27
  end
  object DBEdit21: TDBEdit
    Left = 736
    Top = 467
    Width = 121
    Height = 28
    DataField = 'total_tva'
    DataSource = dm.DataSource3
    TabOrder = 28
  end
  object DBEdit22: TDBEdit
    Left = 736
    Top = 495
    Width = 121
    Height = 28
    DataField = 'total_plata'
    DataSource = dm.DataSource3
    TabOrder = 29
  end
  object DBEdit23: TDBEdit
    Left = 376
    Top = 120
    Width = 145
    Height = 28
    DataField = 'capital_social'
    DataSource = dm.DataSource3
    TabOrder = 6
  end
  object Button5: TButton
    Left = 704
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Print'
    TabOrder = 30
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 749
    Top = 3
    Width = 75
    Height = 25
    Caption = 'Firme'
    TabOrder = 31
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 829
    Top = 3
    Width = 75
    Height = 25
    Caption = 'Delegati'
    TabOrder = 32
    OnClick = Button7Click
  end
  object DBEdit24: TDBEdit
    Left = 136
    Top = 536
    Width = 121
    Height = 28
    DataField = 'termen_plata'
    DataSource = dm.DataSource3
    TabOrder = 33
  end
end
