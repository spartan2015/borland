object Form1: TForm1
  Left = 192
  Top = 107
  Width = 806
  Height = 503
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 20
  object PageControl3: TPageControl
    Left = 0
    Top = 16
    Width = 793
    Height = 457
    ActivePage = TabSheet6
    TabOrder = 0
    object TabSheet6: TTabSheet
      Caption = 'Foaie calcul'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      object Label38: TLabel
        Left = 112
        Top = 0
        Width = 57
        Height = 18
        Caption = 'Label38'
      end
      object Label39: TLabel
        Left = 32
        Top = 24
        Width = 57
        Height = 18
        Caption = 'Label39'
      end
      object Label40: TLabel
        Left = 128
        Top = 24
        Width = 57
        Height = 18
        Caption = 'Label40'
      end
      object Label41: TLabel
        Left = 240
        Top = 24
        Width = 57
        Height = 18
        Caption = 'Label41'
      end
      object Label42: TLabel
        Left = 400
        Top = 24
        Width = 57
        Height = 18
        Caption = 'Label42'
      end
      object Panel4: TPanel
        Left = 0
        Top = 48
        Width = 497
        Height = 377
        TabOrder = 0
        object Label43: TLabel
          Left = 8
          Top = 8
          Width = 19
          Height = 18
          Caption = 'An'
        end
        object Label44: TLabel
          Left = 136
          Top = 8
          Width = 34
          Height = 18
          Caption = 'Luna'
        end
        object Label45: TLabel
          Left = 288
          Top = 9
          Width = 57
          Height = 18
          Caption = 'Zile/luna'
        end
        object Label46: TLabel
          Left = 8
          Top = 35
          Width = 90
          Height = 18
          Caption = 'Zile lucrate N'
        end
        object Label47: TLabel
          Left = 8
          Top = 58
          Width = 92
          Height = 18
          Caption = 'Zile nelucrate'
        end
        object Label48: TLabel
          Left = 8
          Top = 84
          Width = 118
          Height = 18
          Caption = 'Suplimentare 1,5'
        end
        object Label49: TLabel
          Left = 8
          Top = 108
          Width = 105
          Height = 18
          Caption = 'Suplimentare 2'
        end
        object Label50: TLabel
          Left = 8
          Top = 133
          Width = 65
          Height = 18
          Caption = 'Sarbatori'
        end
        object Label51: TLabel
          Left = 8
          Top = 155
          Width = 78
          Height = 18
          Caption = 'Ore noapte'
        end
        object Label52: TLabel
          Left = 8
          Top = 179
          Width = 106
          Height = 18
          Caption = 'Ore nemotivate'
        end
        object Label53: TLabel
          Left = 8
          Top = 203
          Width = 33
          Height = 18
          Caption = 'CFS'
        end
        object Label54: TLabel
          Left = 8
          Top = 227
          Width = 70
          Height = 18
          Caption = 'Ore acord'
        end
        object Label55: TLabel
          Left = 8
          Top = 251
          Width = 50
          Height = 18
          Caption = 'Premiu'
        end
        object Label56: TLabel
          Left = 8
          Top = 275
          Width = 114
          Height = 18
          Caption = 'Alte drepturi imp'
        end
        object Label57: TLabel
          Left = 8
          Top = 299
          Width = 111
          Height = 18
          Caption = 'Diferenta diurna'
        end
        object Label58: TLabel
          Left = 8
          Top = 327
          Width = 88
          Height = 18
          Caption = 'Regularizare'
        end
        object Label59: TLabel
          Left = 8
          Top = 351
          Width = 52
          Height = 18
          Caption = 'Preaviz'
        end
        object Label60: TLabel
          Left = 304
          Top = 200
          Width = 118
          Height = 18
          Caption = 'Concediu odihna'
        end
        object Label61: TLabel
          Left = 288
          Top = 219
          Width = 25
          Height = 18
          Caption = 'Zile'
        end
        object Label62: TLabel
          Left = 376
          Top = 219
          Width = 55
          Height = 18
          Caption = 'Valoare'
        end
        object Label63: TLabel
          Left = 304
          Top = 275
          Width = 126
          Height = 18
          Caption = 'Concediu medical'
        end
        object Label64: TLabel
          Left = 288
          Top = 299
          Width = 25
          Height = 18
          Caption = 'Zile'
        end
        object Label65: TLabel
          Left = 368
          Top = 299
          Width = 55
          Height = 18
          Caption = 'Valoare'
        end
        object Label161: TLabel
          Left = 272
          Top = 32
          Width = 91
          Height = 18
          Caption = 'Zile lucrate D'
        end
        object Label162: TLabel
          Left = 272
          Top = 84
          Width = 96
          Height = 18
          Caption = 'Zile Lucrate S'
        end
        object Bevel7: TBevel
          Left = 272
          Top = 192
          Width = 206
          Height = 161
        end
        object Label163: TLabel
          Left = 384
          Top = 32
          Width = 52
          Height = 18
          Caption = 'Venit D'
        end
        object Label164: TLabel
          Left = 384
          Top = 82
          Width = 51
          Height = 18
          Caption = 'Venit S'
        end
        object DBComboBox1: TDBComboBox
          Left = 32
          Top = 1
          Width = 89
          Height = 26
          DataField = 'An'
          ItemHeight = 18
          Items.Strings = (
            '2003'
            '2004'
            '2005'
            '2006'
            '2007'
            '2008'
            '2009'
            '2010')
          ReadOnly = True
          TabOrder = 0
        end
        object DBComboBox4: TDBComboBox
          Left = 176
          Top = 1
          Width = 105
          Height = 26
          DataField = 'Luna'
          ItemHeight = 18
          Items.Strings = (
            'ianuarie'
            'februarie'
            'martie'
            'aprilie'
            'mai'
            'iunie'
            'iulie'
            'august'
            'septembrie'
            'octombrie'
            'noiembrie'
            'decembrie')
          ReadOnly = True
          TabOrder = 1
        end
        object DBEdit24: TDBEdit
          Left = 352
          Top = 1
          Width = 81
          Height = 26
          DataField = 'Zile_luna'
          ReadOnly = True
          TabOrder = 2
        end
        object DBEdit25: TDBEdit
          Left = 128
          Top = 27
          Width = 137
          Height = 26
          DataField = 'Zile_lucrate'
          ReadOnly = True
          TabOrder = 3
        end
        object DBEdit26: TDBEdit
          Left = 128
          Top = 52
          Width = 137
          Height = 26
          DataField = 'Zile_nelucrate'
          ReadOnly = True
          TabOrder = 4
        end
        object DBEdit27: TDBEdit
          Left = 128
          Top = 78
          Width = 137
          Height = 26
          DataField = 'Ore_suplimentare_15'
          ReadOnly = True
          TabOrder = 5
        end
        object DBEdit28: TDBEdit
          Left = 128
          Top = 104
          Width = 137
          Height = 26
          DataField = 'Ore_suplimentare_2'
          ReadOnly = True
          TabOrder = 6
        end
        object DBEdit29: TDBEdit
          Left = 128
          Top = 128
          Width = 137
          Height = 26
          DataField = 'Ore_in_sarbatori'
          ReadOnly = True
          TabOrder = 7
        end
        object DBEdit30: TDBEdit
          Left = 128
          Top = 152
          Width = 137
          Height = 26
          DataField = 'Ore_noapte'
          ReadOnly = True
          TabOrder = 8
        end
        object DBEdit31: TDBEdit
          Left = 128
          Top = 176
          Width = 137
          Height = 26
          DataField = 'Ore_nemotivate'
          ReadOnly = True
          TabOrder = 9
        end
        object DBEdit32: TDBEdit
          Left = 128
          Top = 200
          Width = 137
          Height = 26
          DataField = 'Cfs'
          ReadOnly = True
          TabOrder = 10
        end
        object DBEdit33: TDBEdit
          Left = 128
          Top = 224
          Width = 137
          Height = 26
          DataField = 'Ore_in_acord'
          ReadOnly = True
          TabOrder = 11
        end
        object DBEdit34: TDBEdit
          Left = 128
          Top = 248
          Width = 137
          Height = 26
          DataField = 'Premiu'
          ReadOnly = True
          TabOrder = 12
        end
        object DBEdit35: TDBEdit
          Left = 128
          Top = 274
          Width = 137
          Height = 26
          DataField = 'Alti_bani'
          ReadOnly = True
          TabOrder = 13
        end
        object DBEdit36: TDBEdit
          Left = 128
          Top = 299
          Width = 137
          Height = 26
          DataField = 'Diferenta_diurna'
          ReadOnly = True
          TabOrder = 14
        end
        object DBEdit37: TDBEdit
          Left = 128
          Top = 323
          Width = 137
          Height = 26
          DataField = 'Regularizare'
          ReadOnly = True
          TabOrder = 15
        end
        object DBCheckBox7: TDBCheckBox
          Left = 127
          Top = 351
          Width = 125
          Height = 17
          Caption = 'Bifati pentru da'
          DataField = 'Preaviz'
          ReadOnly = True
          TabOrder = 16
          ValueChecked = 'True'
          ValueUnchecked = 'False'
        end
        object DBEdit38: TDBEdit
          Left = 280
          Top = 243
          Width = 57
          Height = 26
          DataField = 'Zile_concediu_O'
          ReadOnly = True
          TabOrder = 21
        end
        object DBEdit39: TDBEdit
          Left = 344
          Top = 243
          Width = 121
          Height = 26
          DataField = 'Valoare_concediu_O'
          ReadOnly = True
          TabOrder = 22
        end
        object DBEdit40: TDBEdit
          Left = 280
          Top = 323
          Width = 57
          Height = 26
          DataField = 'Zile_concediu_M'
          ReadOnly = True
          TabOrder = 23
        end
        object DBEdit41: TDBEdit
          Left = 344
          Top = 323
          Width = 121
          Height = 26
          DataField = 'Valoare_concediu_M'
          ReadOnly = True
          TabOrder = 24
        end
        object DBEdit94: TDBEdit
          Left = 272
          Top = 53
          Width = 81
          Height = 26
          DataField = 'Zile_lucrate_D'
          TabOrder = 17
        end
        object DBEdit95: TDBEdit
          Left = 355
          Top = 53
          Width = 137
          Height = 26
          DataField = 'Venit_D'
          TabOrder = 18
        end
        object DBEdit96: TDBEdit
          Left = 272
          Top = 103
          Width = 81
          Height = 26
          DataField = 'Zile_lucrate_S'
          TabOrder = 19
        end
        object DBEdit97: TDBEdit
          Left = 355
          Top = 103
          Width = 137
          Height = 26
          DataField = 'Venit_S'
          TabOrder = 20
        end
      end
      object Panel5: TPanel
        Left = 504
        Top = 48
        Width = 281
        Height = 377
        TabOrder = 1
        object Label66: TLabel
          Left = 72
          Top = 8
          Width = 37
          Height = 18
          Caption = 'Salar'
        end
        object Label67: TLabel
          Left = 16
          Top = 32
          Width = 91
          Height = 18
          Caption = 'Salar realizat'
        end
        object Label68: TLabel
          Left = 16
          Top = 56
          Width = 109
          Height = 18
          Caption = 'Suplimentar 1,5'
        end
        object Label69: TLabel
          Left = 16
          Top = 80
          Width = 96
          Height = 18
          Caption = 'Suplimentar 2'
        end
        object Label70: TLabel
          Left = 16
          Top = 104
          Width = 65
          Height = 18
          Caption = 'Sarbatori'
        end
        object Label71: TLabel
          Left = 16
          Top = 128
          Width = 51
          Height = 18
          Caption = 'Noapte'
        end
        object Label72: TLabel
          Left = 16
          Top = 152
          Width = 96
          Height = 18
          Caption = 'Spor vechime'
        end
        object Label73: TLabel
          Left = 16
          Top = 176
          Width = 99
          Height = 18
          Caption = 'Valoare acord'
        end
        object Label74: TLabel
          Left = 16
          Top = 200
          Width = 102
          Height = 18
          Caption = 'Total salar brut'
        end
        object DBEdit42: TDBEdit
          Left = 136
          Top = 24
          Width = 137
          Height = 26
          DataField = 'Salar_realizat'
          ReadOnly = True
          TabOrder = 0
        end
        object DBEdit43: TDBEdit
          Left = 136
          Top = 48
          Width = 137
          Height = 26
          DataField = 'Suplimentar_15'
          ReadOnly = True
          TabOrder = 1
        end
        object DBEdit44: TDBEdit
          Left = 136
          Top = 72
          Width = 137
          Height = 26
          DataField = 'Suplimentar_2'
          ReadOnly = True
          TabOrder = 2
        end
        object DBEdit45: TDBEdit
          Left = 136
          Top = 96
          Width = 137
          Height = 26
          DataField = 'Sarbatori'
          ReadOnly = True
          TabOrder = 3
        end
        object DBEdit46: TDBEdit
          Left = 136
          Top = 120
          Width = 137
          Height = 26
          DataField = 'Noapte'
          ReadOnly = True
          TabOrder = 4
        end
        object DBEdit47: TDBEdit
          Left = 136
          Top = 144
          Width = 137
          Height = 26
          DataField = 'Spor_vechime_val'
          ReadOnly = True
          TabOrder = 5
        end
        object DBEdit48: TDBEdit
          Left = 136
          Top = 168
          Width = 137
          Height = 26
          DataField = 'Valoare_acord'
          ReadOnly = True
          TabOrder = 6
        end
        object DBEdit49: TDBEdit
          Left = 136
          Top = 192
          Width = 137
          Height = 26
          DataField = 'Salar_brut'
          ReadOnly = True
          TabOrder = 7
        end
        object DBNavigator3: TDBNavigator
          Left = 8
          Top = 224
          Width = 260
          Height = 25
          TabOrder = 8
        end
        object Button20: TButton
          Left = 8
          Top = 256
          Width = 41
          Height = 25
          Caption = 'Sus'
          TabOrder = 9
        end
        object Button21: TButton
          Left = 8
          Top = 288
          Width = 41
          Height = 25
          Caption = 'Jos'
          TabOrder = 10
        end
        object Button22: TButton
          Left = 56
          Top = 256
          Width = 81
          Height = 25
          Caption = '&Insert'
          TabOrder = 11
        end
        object Button23: TButton
          Left = 56
          Top = 288
          Width = 81
          Height = 25
          Caption = '&Delete'
          Enabled = False
          TabOrder = 12
        end
        object Button24: TButton
          Left = 144
          Top = 256
          Width = 73
          Height = 25
          Caption = '&Save'
          Enabled = False
          TabOrder = 13
        end
        object Button25: TButton
          Left = 144
          Top = 288
          Width = 73
          Height = 25
          Caption = '&Modifica'
          TabOrder = 14
        end
        object Button26: TButton
          Left = 8
          Top = 320
          Width = 257
          Height = 17
          Caption = 'Administrator'
          TabOrder = 15
        end
        object Button27: TButton
          Left = 224
          Top = 256
          Width = 49
          Height = 57
          Caption = '&Close'
          TabOrder = 16
        end
        object Edit3: TEdit
          Left = 75
          Top = 347
          Width = 121
          Height = 26
          PasswordChar = '*'
          TabOrder = 17
          Visible = False
        end
      end
    end
    object TabSheet7: TTabSheet
      Caption = 'Stat plata'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ImageIndex = 1
      ParentFont = False
      object Label75: TLabel
        Left = 96
        Top = 8
        Width = 57
        Height = 18
        Caption = 'Label75'
      end
      object Label76: TLabel
        Left = 232
        Top = 8
        Width = 57
        Height = 18
        Caption = 'Label76'
      end
      object Panel6: TPanel
        Left = 0
        Top = 32
        Width = 369
        Height = 393
        TabOrder = 0
        object Label77: TLabel
          Left = 8
          Top = 10
          Width = 74
          Height = 18
          Caption = 'Baza CAS'
        end
        object Label78: TLabel
          Left = 8
          Top = 34
          Width = 29
          Height = 18
          Caption = 'Cas'
        end
        object Label79: TLabel
          Left = 8
          Top = 82
          Width = 45
          Height = 18
          Caption = 'Somaj'
        end
        object Label80: TLabel
          Left = 8
          Top = 130
          Width = 63
          Height = 18
          Caption = 'Sanatate'
        end
        object Label81: TLabel
          Left = 8
          Top = 177
          Width = 99
          Height = 18
          Caption = 'Cheltuieli prof.'
        end
        object Label82: TLabel
          Left = 8
          Top = 199
          Width = 61
          Height = 18
          Caption = 'Venit net'
        end
        object Label83: TLabel
          Left = 8
          Top = 223
          Width = 111
          Height = 18
          Caption = 'Ded. pers. baza'
        end
        object Label84: TLabel
          Left = 8
          Top = 247
          Width = 127
          Height = 18
          Caption = 'Ded. suplimentare'
        end
        object Label85: TLabel
          Left = 8
          Top = 271
          Width = 126
          Height = 18
          Caption = 'Baza calc. impozit'
        end
        object Label86: TLabel
          Left = 8
          Top = 295
          Width = 49
          Height = 18
          Caption = 'Impozit'
        end
        object Label87: TLabel
          Left = 8
          Top = 319
          Width = 130
          Height = 18
          Caption = 'Baza calc. imp CO'
        end
        object Label88: TLabel
          Left = 8
          Top = 343
          Width = 77
          Height = 18
          Caption = 'Impozit CO'
        end
        object Label89: TLabel
          Left = 8
          Top = 367
          Width = 62
          Height = 18
          Caption = 'Salar net'
        end
        object Label123: TLabel
          Left = 8
          Top = 58
          Width = 68
          Height = 18
          Caption = 'Cas firma'
        end
        object Label124: TLabel
          Left = 8
          Top = 106
          Width = 84
          Height = 18
          Caption = 'Somaj firma'
        end
        object Label125: TLabel
          Left = 8
          Top = 154
          Width = 102
          Height = 18
          Caption = 'Sanatate firma'
        end
        object DBEdit50: TDBEdit
          Left = 144
          Top = 2
          Width = 137
          Height = 26
          DataField = 'Baza_calcul_CAS'
          ReadOnly = True
          TabOrder = 0
        end
        object DBEdit51: TDBEdit
          Left = 144
          Top = 26
          Width = 137
          Height = 26
          DataField = 'Cas'
          ReadOnly = True
          TabOrder = 1
        end
        object DBEdit52: TDBEdit
          Left = 144
          Top = 51
          Width = 137
          Height = 26
          DataField = 'Cas_firma'
          ReadOnly = True
          TabOrder = 2
        end
        object DBEdit53: TDBEdit
          Left = 144
          Top = 75
          Width = 137
          Height = 26
          DataField = 'Somaj'
          ReadOnly = True
          TabOrder = 3
        end
        object DBEdit54: TDBEdit
          Left = 144
          Top = 99
          Width = 137
          Height = 26
          DataField = 'Somaj_firma'
          ReadOnly = True
          TabOrder = 4
        end
        object DBEdit55: TDBEdit
          Left = 144
          Top = 123
          Width = 137
          Height = 26
          DataField = 'Sanatate'
          ReadOnly = True
          TabOrder = 5
        end
        object DBEdit56: TDBEdit
          Left = 144
          Top = 147
          Width = 137
          Height = 26
          DataField = 'Sanatate_firma'
          ReadOnly = True
          TabOrder = 6
        end
        object DBEdit57: TDBEdit
          Left = 144
          Top = 171
          Width = 137
          Height = 26
          DataField = 'Cheltuieli_profesionale'
          ReadOnly = True
          TabOrder = 7
        end
        object DBEdit58: TDBEdit
          Left = 144
          Top = 195
          Width = 137
          Height = 26
          DataField = 'Venit_net'
          ReadOnly = True
          TabOrder = 8
        end
        object DBEdit59: TDBEdit
          Left = 144
          Top = 219
          Width = 137
          Height = 26
          DataField = 'Deducere_pers_de_baza'
          ReadOnly = True
          TabOrder = 9
        end
        object DBEdit60: TDBEdit
          Left = 144
          Top = 243
          Width = 137
          Height = 26
          DataField = 'Deducere_suplimentara'
          ReadOnly = True
          TabOrder = 10
        end
        object DBEdit61: TDBEdit
          Left = 144
          Top = 267
          Width = 137
          Height = 26
          DataField = 'Baza_calcul_impozit'
          ReadOnly = True
          TabOrder = 11
        end
        object DBEdit62: TDBEdit
          Left = 144
          Top = 291
          Width = 137
          Height = 26
          DataField = 'Impozit'
          ReadOnly = True
          TabOrder = 12
        end
        object DBEdit73: TDBEdit
          Left = 144
          Top = 315
          Width = 137
          Height = 26
          DataField = 'Baza_calcul_impozit_CO'
          TabOrder = 13
        end
        object DBEdit74: TDBEdit
          Left = 144
          Top = 339
          Width = 137
          Height = 26
          DataField = 'Impozit_concediu_O'
          TabOrder = 14
        end
        object DBEdit75: TDBEdit
          Left = 144
          Top = 363
          Width = 137
          Height = 26
          DataField = 'Salar_net'
          TabOrder = 15
        end
      end
      object Panel7: TPanel
        Left = 376
        Top = 32
        Width = 401
        Height = 393
        TabOrder = 1
        object Label90: TLabel
          Left = 16
          Top = 16
          Width = 120
          Height = 18
          Caption = 'Ajutor nas/pensie'
        end
        object Label91: TLabel
          Left = 16
          Top = 40
          Width = 43
          Height = 18
          Caption = 'Avans'
        end
        object Label92: TLabel
          Left = 16
          Top = 64
          Width = 109
          Height = 18
          Caption = 'Indem concediu'
        end
        object Label93: TLabel
          Left = 16
          Top = 88
          Width = 47
          Height = 18
          Caption = 'Popriri'
        end
        object Label94: TLabel
          Left = 16
          Top = 112
          Width = 58
          Height = 18
          Caption = 'Alte rate'
        end
        object Label95: TLabel
          Left = 16
          Top = 136
          Width = 124
          Height = 18
          Caption = 'Garantii materiale'
        end
        object Label96: TLabel
          Left = 16
          Top = 160
          Width = 118
          Height = 18
          Caption = 'Diferenta impozit'
        end
        object Label97: TLabel
          Left = 16
          Top = 184
          Width = 72
          Height = 18
          Caption = 'Total plata'
        end
        object Label98: TLabel
          Left = 16
          Top = 208
          Width = 70
          Height = 18
          Caption = 'Rest plata'
        end
        object DBEdit63: TDBEdit
          Left = 144
          Top = 16
          Width = 137
          Height = 26
          DataField = 'Ajutor_nastere'
          ReadOnly = True
          TabOrder = 0
        end
        object DBEdit64: TDBEdit
          Left = 144
          Top = 40
          Width = 137
          Height = 26
          DataField = 'Avans'
          ReadOnly = True
          TabOrder = 1
        end
        object DBEdit65: TDBEdit
          Left = 144
          Top = 64
          Width = 137
          Height = 26
          DataField = 'Indemnizatii'
          ReadOnly = True
          TabOrder = 2
        end
        object DBEdit66: TDBEdit
          Left = 144
          Top = 88
          Width = 137
          Height = 26
          DataField = 'Popriri'
          ReadOnly = True
          TabOrder = 3
        end
        object DBEdit67: TDBEdit
          Left = 144
          Top = 112
          Width = 137
          Height = 26
          DataField = 'Alte_rate'
          ReadOnly = True
          TabOrder = 4
        end
        object DBEdit68: TDBEdit
          Left = 144
          Top = 136
          Width = 137
          Height = 26
          DataField = 'Garantii_materiale'
          ReadOnly = True
          TabOrder = 5
        end
        object DBEdit69: TDBEdit
          Left = 144
          Top = 160
          Width = 137
          Height = 26
          DataField = 'Diferenta_impozit'
          ReadOnly = True
          TabOrder = 6
        end
        object DBEdit70: TDBEdit
          Left = 144
          Top = 184
          Width = 137
          Height = 26
          DataField = 'Total_plata'
          ReadOnly = True
          TabOrder = 7
        end
        object DBEdit71: TDBEdit
          Left = 144
          Top = 208
          Width = 137
          Height = 26
          DataField = 'Rest_plata'
          ReadOnly = True
          TabOrder = 8
        end
      end
    end
  end
end
