object Form1: TForm1
  Left = 193
  Top = 137
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Form1'
  ClientHeight = 509
  ClientWidth = 803
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 801
    Height = 489
    ActivePage = TabSheet1
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Firma'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      object Bevel1: TBevel
        Left = 0
        Top = 8
        Width = 785
        Height = 273
        Style = bsRaised
      end
      object Label7: TLabel
        Left = 360
        Top = 41
        Width = 51
        Height = 18
        Caption = 'Adresa'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label6: TLabel
        Left = 360
        Top = 21
        Width = 51
        Height = 18
        Caption = 'Telefon'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label5: TLabel
        Left = 8
        Top = 176
        Width = 46
        Height = 18
        Caption = 'Cont 1'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label4: TLabel
        Left = 8
        Top = 123
        Width = 58
        Height = 18
        Caption = 'Banca 1'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label3: TLabel
        Left = 8
        Top = 96
        Width = 8
        Height = 20
        Caption = 'J'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 8
        Top = 48
        Width = 30
        Height = 18
        Caption = 'Fisc'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label1: TLabel
        Left = 8
        Top = 24
        Width = 41
        Height = 18
        Caption = 'Nume'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Bevel2: TBevel
        Left = 0
        Top = 288
        Width = 785
        Height = 169
        Style = bsRaised
      end
      object Label134: TLabel
        Left = 8
        Top = 72
        Width = 59
        Height = 18
        Caption = 'Cnp ang'
      end
      object Label135: TLabel
        Left = 8
        Top = 152
        Width = 55
        Height = 18
        Caption = 'Filiala 1'
      end
      object Label136: TLabel
        Left = 8
        Top = 200
        Width = 58
        Height = 18
        Caption = 'Banca 2'
      end
      object Label137: TLabel
        Left = 8
        Top = 224
        Width = 55
        Height = 18
        Caption = 'Filiala 2'
      end
      object Label138: TLabel
        Left = 8
        Top = 248
        Width = 46
        Height = 18
        Caption = 'Cont 2'
      end
      object Label139: TLabel
        Left = 352
        Top = 161
        Width = 121
        Height = 18
        Caption = 'Nume pers raport'
      end
      object Label140: TLabel
        Left = 352
        Top = 185
        Width = 131
        Height = 18
        Caption = 'Functie pers raport'
      end
      object Label141: TLabel
        Left = 352
        Top = 136
        Width = 45
        Height = 18
        Caption = 'E-mail'
      end
      object DBMemo1: TDBMemo
        Left = 448
        Top = 41
        Width = 241
        Height = 89
        DataField = 'Adresa_firma'
        DataSource = DataSource1
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 11
      end
      object DBEdit6: TDBEdit
        Left = 448
        Top = 15
        Width = 241
        Height = 26
        DataField = 'Telefon_firma'
        DataSource = DataSource1
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 10
      end
      object DBEdit5: TDBEdit
        Left = 88
        Top = 167
        Width = 241
        Height = 26
        DataField = 'Cont_banca_1'
        DataSource = DataSource1
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 6
      end
      object DBEdit1: TDBEdit
        Left = 88
        Top = 16
        Width = 241
        Height = 26
        DataField = 'Nume_firma'
        DataSource = DataSource1
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 0
      end
      object DBEdit2: TDBEdit
        Left = 88
        Top = 40
        Width = 241
        Height = 26
        DataField = 'Fisc'
        DataSource = DataSource1
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 1
      end
      object DBEdit3: TDBEdit
        Left = 88
        Top = 90
        Width = 241
        Height = 26
        DataField = 'J'
        DataSource = DataSource1
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 3
      end
      object DBEdit4: TDBEdit
        Left = 88
        Top = 115
        Width = 241
        Height = 26
        DataField = 'Banca_1'
        DataSource = DataSource1
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 4
      end
      object DBNavigator1: TDBNavigator
        Left = 8
        Top = 294
        Width = 320
        Height = 25
        DataSource = DataSource1
        TabOrder = 25
      end
      object Button1: TButton
        Left = 8
        Top = 326
        Width = 33
        Height = 25
        Caption = 'Sus'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 23
        OnClick = Button1Click
      end
      object Button3: TButton
        Left = 48
        Top = 326
        Width = 81
        Height = 25
        Caption = '&Insert'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 15
        OnClick = Button3Click
      end
      object Button2: TButton
        Left = 8
        Top = 358
        Width = 33
        Height = 25
        Caption = 'Jos'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 24
        OnClick = Button2Click
      end
      object Button4: TButton
        Left = 48
        Top = 358
        Width = 81
        Height = 25
        Caption = '&Delete'
        Enabled = False
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 16
        OnClick = Button4Click
      end
      object Button6: TButton
        Left = 136
        Top = 358
        Width = 89
        Height = 25
        Caption = '&Modifica'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 18
        OnClick = Button6Click
      end
      object Button5: TButton
        Left = 136
        Top = 326
        Width = 89
        Height = 25
        Caption = '&Save'
        Enabled = False
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 17
        OnClick = Button5Click
      end
      object Button7: TButton
        Left = 232
        Top = 326
        Width = 97
        Height = 25
        Caption = '&Acces'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 19
        OnClick = Button7Click
      end
      object Button8: TButton
        Left = 232
        Top = 358
        Width = 97
        Height = 25
        Caption = '&Creaza '
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 20
        OnClick = Button8Click
      end
      object Edit1: TEdit
        Left = 344
        Top = 390
        Width = 121
        Height = 26
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        PasswordChar = '*'
        TabOrder = 26
        Visible = False
        OnKeyPress = Edit1KeyPress
      end
      object Button9: TButton
        Left = 8
        Top = 390
        Width = 321
        Height = 17
        Caption = 'Administrator'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 21
        OnClick = Button9Click
      end
      object Button10: TButton
        Left = 8
        Top = 414
        Width = 321
        Height = 25
        Caption = 'Inchide'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        TabOrder = 22
        OnClick = Button10Click
      end
      object DBEdit83: TDBEdit
        Left = 88
        Top = 64
        Width = 241
        Height = 26
        Hint = 'Cnp angajator'
        DataField = 'Cnp_angajator'
        DataSource = DataSource1
        ParentShowHint = False
        ReadOnly = True
        ShowHint = True
        TabOrder = 2
      end
      object DBEdit84: TDBEdit
        Left = 88
        Top = 141
        Width = 241
        Height = 26
        DataField = 'Filiala_1'
        DataSource = DataSource1
        ReadOnly = True
        TabOrder = 5
      end
      object DBEdit87: TDBEdit
        Left = 88
        Top = 192
        Width = 241
        Height = 26
        DataField = 'Banca_2'
        DataSource = DataSource1
        ReadOnly = True
        TabOrder = 7
      end
      object DBEdit88: TDBEdit
        Left = 88
        Top = 216
        Width = 241
        Height = 26
        DataField = 'Filiala_2'
        DataSource = DataSource1
        ReadOnly = True
        TabOrder = 8
      end
      object DBEdit89: TDBEdit
        Left = 88
        Top = 240
        Width = 241
        Height = 26
        DataField = 'Cont_banca_2'
        DataSource = DataSource1
        ReadOnly = True
        TabOrder = 9
      end
      object DBEdit90: TDBEdit
        Left = 488
        Top = 153
        Width = 201
        Height = 26
        DataField = 'Nume_pers_raport'
        DataSource = DataSource1
        ReadOnly = True
        TabOrder = 13
      end
      object DBEdit91: TDBEdit
        Left = 488
        Top = 177
        Width = 201
        Height = 26
        DataField = 'Functia_pers_raport'
        DataSource = DataSource1
        ReadOnly = True
        TabOrder = 14
      end
      object DBEdit92: TDBEdit
        Left = 448
        Top = 128
        Width = 241
        Height = 26
        DataField = 'e_mail_firma'
        DataSource = DataSource1
        ReadOnly = True
        TabOrder = 12
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Angajati'
      ImageIndex = 1
      TabVisible = False
      OnHide = TabSheet2Hide
      OnShow = TabSheet2Show
      object PageControl2: TPageControl
        Left = 0
        Top = 0
        Width = 793
        Height = 461
        ActivePage = TabSheet3
        TabOrder = 0
        object TabSheet3: TTabSheet
          Caption = 'Date'
          Font.Charset = ANSI_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          object Label8: TLabel
            Left = 16
            Top = 7
            Width = 85
            Height = 18
            Caption = 'Cod angajat'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label9: TLabel
            Left = 16
            Top = 31
            Width = 41
            Height = 18
            Caption = 'Nume'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label10: TLabel
            Left = 16
            Top = 55
            Width = 63
            Height = 18
            Caption = 'Prenume'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label11: TLabel
            Left = 16
            Top = 79
            Width = 34
            Height = 18
            Caption = 'CNP'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label12: TLabel
            Left = 16
            Top = 103
            Width = 51
            Height = 18
            Caption = 'Functia'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label13: TLabel
            Left = 16
            Top = 127
            Width = 79
            Height = 18
            Caption = 'Cod functie'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label14: TLabel
            Left = 16
            Top = 151
            Width = 45
            Height = 18
            Caption = 'Sectia'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label15: TLabel
            Left = 16
            Top = 175
            Width = 44
            Height = 18
            Caption = 'Marca'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label16: TLabel
            Left = 16
            Top = 199
            Width = 99
            Height = 18
            Caption = 'Data angajare'
            Font.Charset = ANSI_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Arial'
            Font.Style = []
            ParentFont = False
          end
          object Label17: TLabel
            Left = 16
            Top = 223
            Width = 81
            Height = 18
            Caption = 'Salar tarifar'
          end
          object Label18: TLabel
            Left = 16
            Top = 247
            Width = 63
            Height = 18
            Caption = 'Prima/an'
          end
          object Label19: TLabel
            Left = 16
            Top = 271
            Width = 108
            Height = 18
            Caption = 'Data prima ang'
          end
          object Label20: TLabel
            Left = 16
            Top = 295
            Width = 98
            Height = 18
            Caption = 'Data lichid sal'
          end
          object Label21: TLabel
            Left = 16
            Top = 343
            Width = 96
            Height = 18
            Caption = 'Spor vechime'
          end
          object Label22: TLabel
            Left = 16
            Top = 367
            Width = 42
            Height = 18
            Caption = 'Regie'
          end
          object Label99: TLabel
            Left = 16
            Top = 319
            Width = 74
            Height = 18
            Caption = 'Zile CO/an'
          end
          object Label142: TLabel
            Left = 16
            Top = 394
            Width = 54
            Height = 18
            Caption = 'Ore L/zi'
          end
          object Label160: TLabel
            Left = 16
            Top = 416
            Width = 71
            Height = 18
            Caption = 'Pensionar'
          end
          object Label167: TLabel
            Left = 344
            Top = 8
            Width = 44
            Height = 18
            Caption = 'BASS'
          end
          object DBEdit7: TDBEdit
            Left = 128
            Top = -1
            Width = 193
            Height = 26
            DataField = 'Cod'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 0
          end
          object DBEdit8: TDBEdit
            Left = 128
            Top = 23
            Width = 193
            Height = 26
            CharCase = ecUpperCase
            DataField = 'Nume'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 1
          end
          object DBEdit9: TDBEdit
            Left = 128
            Top = 47
            Width = 193
            Height = 26
            CharCase = ecUpperCase
            DataField = 'Prenume'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 2
          end
          object DBEdit10: TDBEdit
            Left = 128
            Top = 71
            Width = 193
            Height = 26
            DataField = 'Cnp'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 3
          end
          object DBEdit11: TDBEdit
            Left = 128
            Top = 95
            Width = 193
            Height = 26
            CharCase = ecUpperCase
            DataField = 'Functie'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 4
          end
          object DBEdit12: TDBEdit
            Left = 128
            Top = 119
            Width = 193
            Height = 26
            DataField = 'Cod_functie'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 5
          end
          object DBEdit13: TDBEdit
            Left = 128
            Top = 143
            Width = 193
            Height = 26
            CharCase = ecUpperCase
            DataField = 'Sectia'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 6
          end
          object DBEdit14: TDBEdit
            Left = 128
            Top = 167
            Width = 193
            Height = 26
            CharCase = ecUpperCase
            DataField = 'Marca'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 7
          end
          object DBEdit15: TDBEdit
            Left = 128
            Top = 191
            Width = 193
            Height = 26
            DataField = 'Data_angajare'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 8
          end
          object DBEdit16: TDBEdit
            Left = 128
            Top = 215
            Width = 193
            Height = 26
            DataField = 'Salar_tarifar'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 9
          end
          object DBEdit17: TDBEdit
            Left = 128
            Top = 239
            Width = 193
            Height = 26
            DataField = 'Prima'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 10
          end
          object DBEdit18: TDBEdit
            Left = 128
            Top = 263
            Width = 193
            Height = 26
            DataField = 'Data_prima_angajare'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 11
          end
          object DBEdit19: TDBEdit
            Left = 128
            Top = 287
            Width = 193
            Height = 26
            Hint = 'Data lichidare salar'
            DataField = 'Data_lichidare_salar'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = True
            TabOrder = 12
          end
          object DBCheckBox1: TDBCheckBox
            Left = 128
            Top = 343
            Width = 129
            Height = 17
            Caption = 'Bifati pentru da'
            DataField = 'Spor_vechime'
            DataSource = DataSource2
            ParentShowHint = False
            ReadOnly = True
            ShowHint = False
            TabOrder = 14
            ValueChecked = 'True'
            ValueUnchecked = 'False'
          end
          object Panel2: TPanel
            Left = 344
            Top = 31
            Width = 417
            Height = 129
            TabOrder = 17
            object Label34: TLabel
              Left = 144
              Top = 8
              Width = 118
              Height = 18
              Caption = 'Motor de cautare'
            end
            object Label117: TLabel
              Left = 16
              Top = 32
              Width = 38
              Height = 18
              Caption = 'Dupa'
            end
            object Label118: TLabel
              Left = 16
              Top = 64
              Width = 40
              Height = 18
              Caption = 'Textul'
            end
            object Label119: TLabel
              Left = 304
              Top = 56
              Width = 32
              Height = 18
              Caption = 'Zero'
            end
            object ComboBox1: TComboBox
              Left = 96
              Top = 32
              Width = 185
              Height = 26
              ItemHeight = 18
              TabOrder = 0
              Items.Strings = (
                'Cod'
                'Nume'
                'Prenume'
                'CNP'
                'Functia'
                'Cod_functie'
                'Sectia'
                'Marca')
            end
            object Edit4: TEdit
              Left = 96
              Top = 56
              Width = 185
              Height = 26
              TabOrder = 1
            end
            object Button30: TButton
              Left = 120
              Top = 96
              Width = 153
              Height = 25
              Caption = 'Cauta'
              TabOrder = 2
              OnClick = Button30Click
            end
          end
          object Panel3: TPanel
            Left = 344
            Top = 168
            Width = 425
            Height = 169
            TabOrder = 18
            object DBNavigator2: TDBNavigator
              Left = 24
              Top = 8
              Width = 390
              Height = 25
              TabOrder = 0
            end
            object Button11: TButton
              Left = 24
              Top = 40
              Width = 75
              Height = 25
              Caption = 'Sus'
              TabOrder = 1
              OnClick = Button11Click
            end
            object Button12: TButton
              Left = 24
              Top = 72
              Width = 75
              Height = 25
              Caption = 'Jos'
              TabOrder = 2
              OnClick = Button12Click
            end
            object Button13: TButton
              Left = 104
              Top = 40
              Width = 89
              Height = 25
              Caption = '&Insert'
              TabOrder = 3
              OnClick = Button13Click
            end
            object Button14: TButton
              Left = 104
              Top = 72
              Width = 89
              Height = 25
              Caption = '&Delete'
              Enabled = False
              TabOrder = 4
              OnClick = Button14Click
            end
            object Button15: TButton
              Left = 200
              Top = 40
              Width = 89
              Height = 25
              Caption = '&Save'
              Enabled = False
              TabOrder = 5
              OnClick = Button15Click
            end
            object Button16: TButton
              Left = 200
              Top = 72
              Width = 89
              Height = 25
              Caption = '&Modifica'
              TabOrder = 6
              OnClick = Button16Click
            end
            object Edit2: TEdit
              Left = 152
              Top = 136
              Width = 121
              Height = 26
              PasswordChar = '*'
              TabOrder = 7
              Visible = False
              OnKeyPress = Edit2KeyPress
            end
            object Button17: TButton
              Left = 296
              Top = 40
              Width = 65
              Height = 25
              Caption = '&Acces'
              TabOrder = 8
              OnClick = Button17Click
            end
            object Button18: TButton
              Left = 296
              Top = 72
              Width = 65
              Height = 25
              Caption = 'C&reaza'
              TabOrder = 9
              OnClick = Button18Click
            end
            object Button19: TButton
              Left = 25
              Top = 104
              Width = 392
              Height = 17
              Caption = 'Administrator'
              TabOrder = 11
              OnClick = Button19Click
            end
            object Button34: TButton
              Left = 368
              Top = 40
              Width = 49
              Height = 57
              Caption = '&Close'
              TabOrder = 10
              OnClick = Button34Click
            end
          end
          object DBCheckBox6: TDBCheckBox
            Left = 128
            Top = 367
            Width = 177
            Height = 17
            Caption = 'Bifati pentru da'
            DataField = 'Regie'
            DataSource = DataSource2
            ReadOnly = True
            TabOrder = 15
            ValueChecked = 'True'
            ValueUnchecked = 'False'
          end
          object DBEdit72: TDBEdit
            Left = 128
            Top = 311
            Width = 193
            Height = 26
            DataField = 'Concediu_pe_an'
            DataSource = DataSource2
            TabOrder = 13
          end
          object DBEdit93: TDBEdit
            Left = 128
            Top = 386
            Width = 193
            Height = 26
            Hint = 'Norma de ore pe zi, conf legii <8'
            DataField = 'Norma_ore_zi'
            DataSource = DataSource2
            ParentShowHint = False
            ShowHint = True
            TabOrder = 16
          end
          object DBEdit100: TDBEdit
            Left = 392
            Top = 0
            Width = 193
            Height = 26
            DataField = 'BASS'
            DataSource = DataSource2
            TabOrder = 19
          end
          object DBCheckBox8: TDBCheckBox
            Left = 128
            Top = 416
            Width = 129
            Height = 17
            Caption = 'Bifati pentru da'
            DataField = 'Pensionar'
            DataSource = DataSource2
            TabOrder = 20
            ValueChecked = 'True'
            ValueUnchecked = 'False'
          end
        end
        object TabSheet4: TTabSheet
          Caption = 'Personal'
          Font.Charset = ANSI_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = []
          ImageIndex = 1
          ParentFont = False
          object Label23: TLabel
            Left = 16
            Top = 16
            Width = 68
            Height = 18
            Caption = 'Sex (M/F)'
          end
          object Label24: TLabel
            Left = 16
            Top = 40
            Width = 77
            Height = 18
            Caption = 'Stare civila'
          end
          object Label25: TLabel
            Left = 16
            Top = 64
            Width = 51
            Height = 18
            Caption = 'Telefon'
          end
          object Label26: TLabel
            Left = 16
            Top = 88
            Width = 51
            Height = 18
            Caption = 'Adresa'
          end
          object Label27: TLabel
            Left = 16
            Top = 168
            Width = 90
            Height = 18
            Caption = 'Data nastere'
          end
          object Label28: TLabel
            Left = 16
            Top = 192
            Width = 91
            Height = 18
            Caption = 'Stagiu militar'
          end
          object Label29: TLabel
            Left = 16
            Top = 216
            Width = 84
            Height = 18
            Caption = 'Livret militar'
          end
          object Label30: TLabel
            Left = 16
            Top = 248
            Width = 40
            Height = 18
            Caption = 'Studii'
          end
          object Label31: TLabel
            Left = 384
            Top = 8
            Width = 84
            Height = 18
            Caption = 'Numar copii'
          end
          object Label32: TLabel
            Left = 384
            Top = 40
            Width = 72
            Height = 18
            Caption = 'Date copii'
          end
          object Label35: TLabel
            Left = 488
            Top = 40
            Width = 41
            Height = 18
            Caption = 'Nume'
          end
          object Label36: TLabel
            Left = 568
            Top = 40
            Width = 63
            Height = 18
            Caption = 'Prenume'
          end
          object Label37: TLabel
            Left = 648
            Top = 40
            Width = 106
            Height = 18
            Caption = 'Data nastere: //'
          end
          object DBComboBox2: TDBComboBox
            Left = 128
            Top = 8
            Width = 249
            Height = 26
            DataField = 'Sex'
            ItemHeight = 18
            Items.Strings = (
              'M'
              'F')
            ReadOnly = True
            TabOrder = 0
          end
          object DBComboBox3: TDBComboBox
            Left = 128
            Top = 32
            Width = 249
            Height = 26
            DataField = 'Stare_civila'
            ItemHeight = 18
            Items.Strings = (
              'Casatorit'
              'Necasatorit')
            ReadOnly = True
            TabOrder = 1
          end
          object DBEdit20: TDBEdit
            Left = 128
            Top = 56
            Width = 249
            Height = 26
            DataField = 'Telefon'
            ReadOnly = True
            TabOrder = 2
          end
          object DBMemo2: TDBMemo
            Left = 128
            Top = 80
            Width = 249
            Height = 89
            DataField = 'Adresa'
            ReadOnly = True
            TabOrder = 3
          end
          object DBEdit21: TDBEdit
            Left = 128
            Top = 168
            Width = 249
            Height = 26
            DataField = 'Data_nastere'
            ReadOnly = True
            TabOrder = 4
          end
          object DBCheckBox2: TDBCheckBox
            Left = 128
            Top = 192
            Width = 185
            Height = 17
            Caption = 'Bifati pentru satisfacut'
            DataField = 'Stagiu_militar'
            ReadOnly = True
            TabOrder = 5
            ValueChecked = 'True'
            ValueUnchecked = 'False'
          end
          object DBEdit22: TDBEdit
            Left = 128
            Top = 216
            Width = 249
            Height = 26
            DataField = 'Livret_militar'
            ReadOnly = True
            TabOrder = 6
          end
          object DBMemo3: TDBMemo
            Left = 128
            Top = 248
            Width = 249
            Height = 161
            DataField = 'Studii'
            ReadOnly = True
            TabOrder = 7
          end
          object DBEdit23: TDBEdit
            Left = 488
            Top = 8
            Width = 121
            Height = 26
            DataField = 'Numar_copii'
            ReadOnly = True
            TabOrder = 8
          end
          object DBMemo4: TDBMemo
            Left = 488
            Top = 64
            Width = 273
            Height = 89
            DataField = 'Date_copii'
            ReadOnly = True
            TabOrder = 9
          end
          object Panel1: TPanel
            Left = 384
            Top = 176
            Width = 385
            Height = 217
            TabOrder = 10
            object Label33: TLabel
              Left = 116
              Top = 16
              Width = 157
              Height = 18
              Caption = 'Persoane in intretinere'
            end
            object DBCheckBox3: TDBCheckBox
              Left = 40
              Top = 48
              Width = 153
              Height = 17
              Caption = 'Sotie fara servici'
              DataField = 'Sotie_in_intretinere'
              ReadOnly = True
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
            end
            object DBCheckBox4: TDBCheckBox
              Left = 40
              Top = 72
              Width = 217
              Height = 17
              Caption = 'Persoane handicapate gr.I'
              DataField = 'Pers_handicapate_grI'
              ReadOnly = True
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
            end
            object DBCheckBox5: TDBCheckBox
              Left = 40
              Top = 96
              Width = 217
              Height = 17
              Caption = 'Persoane handicapate gr.II'
              DataField = 'Pers_handicapate_grII'
              ReadOnly = True
              TabOrder = 2
              ValueChecked = 'True'
              ValueUnchecked = 'False'
            end
          end
        end
      end
    end
    object TabSheet5: TTabSheet
      Caption = 'Date salar'
      ImageIndex = 2
      TabVisible = False
      OnShow = TabSheet5Show
      object PageControl3: TPageControl
        Left = 0
        Top = 0
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
          OnShow = TabSheet6Show
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
              DataSource = DataSource3
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
              DataSource = DataSource3
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
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 2
            end
            object DBEdit25: TDBEdit
              Left = 128
              Top = 27
              Width = 137
              Height = 26
              DataField = 'Zile_lucrate'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 3
              OnExit = DBEdit25Exit
            end
            object DBEdit26: TDBEdit
              Left = 128
              Top = 52
              Width = 137
              Height = 26
              DataField = 'Zile_nelucrate'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 4
              OnExit = DBEdit25Exit
            end
            object DBEdit27: TDBEdit
              Left = 128
              Top = 78
              Width = 137
              Height = 26
              DataField = 'Ore_suplimentare_15'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 5
              OnExit = DBEdit25Exit
            end
            object DBEdit28: TDBEdit
              Left = 128
              Top = 104
              Width = 137
              Height = 26
              DataField = 'Ore_suplimentare_2'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 6
              OnExit = DBEdit25Exit
            end
            object DBEdit29: TDBEdit
              Left = 128
              Top = 128
              Width = 137
              Height = 26
              DataField = 'Ore_in_sarbatori'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 7
              OnExit = DBEdit25Exit
            end
            object DBEdit30: TDBEdit
              Left = 128
              Top = 152
              Width = 137
              Height = 26
              DataField = 'Ore_noapte'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 8
              OnExit = DBEdit25Exit
            end
            object DBEdit31: TDBEdit
              Left = 128
              Top = 176
              Width = 137
              Height = 26
              DataField = 'Ore_nemotivate'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 9
              OnExit = DBEdit25Exit
            end
            object DBEdit32: TDBEdit
              Left = 128
              Top = 200
              Width = 137
              Height = 26
              DataField = 'Cfs'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 10
              OnExit = DBEdit25Exit
            end
            object DBEdit33: TDBEdit
              Left = 128
              Top = 224
              Width = 137
              Height = 26
              DataField = 'Ore_in_acord'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 11
              OnExit = DBEdit25Exit
            end
            object DBEdit34: TDBEdit
              Left = 128
              Top = 248
              Width = 137
              Height = 26
              DataField = 'Premiu'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 12
              OnExit = DBEdit25Exit
            end
            object DBEdit35: TDBEdit
              Left = 128
              Top = 274
              Width = 137
              Height = 26
              DataField = 'Alti_bani'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 13
              OnExit = DBEdit25Exit
            end
            object DBEdit36: TDBEdit
              Left = 128
              Top = 299
              Width = 137
              Height = 26
              DataField = 'Diferenta_diurna'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 14
              OnExit = DBEdit25Exit
            end
            object DBEdit37: TDBEdit
              Left = 128
              Top = 323
              Width = 137
              Height = 26
              DataField = 'Regularizare'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 15
              OnExit = DBEdit25Exit
            end
            object DBCheckBox7: TDBCheckBox
              Left = 127
              Top = 351
              Width = 125
              Height = 17
              Caption = 'Bifati pentru da'
              DataField = 'Preaviz'
              DataSource = DataSource3
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
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 21
              OnExit = DBEdit25Exit
            end
            object DBEdit39: TDBEdit
              Left = 344
              Top = 243
              Width = 121
              Height = 26
              DataField = 'Valoare_concediu_O'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 22
              OnExit = DBEdit25Exit
            end
            object DBEdit40: TDBEdit
              Left = 280
              Top = 323
              Width = 57
              Height = 26
              DataField = 'Zile_concediu_M'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 23
            end
            object DBEdit41: TDBEdit
              Left = 344
              Top = 323
              Width = 121
              Height = 26
              DataField = 'Valoare_concediu_M'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 24
            end
            object DBEdit94: TDBEdit
              Left = 272
              Top = 53
              Width = 81
              Height = 26
              DataField = 'Zile_lucrate_D'
              DataSource = DataSource3
              TabOrder = 17
            end
            object DBEdit95: TDBEdit
              Left = 355
              Top = 53
              Width = 137
              Height = 26
              DataField = 'Venit_D'
              DataSource = DataSource3
              TabOrder = 18
              OnExit = DBEdit25Exit
            end
            object DBEdit96: TDBEdit
              Left = 272
              Top = 103
              Width = 81
              Height = 26
              DataField = 'Zile_lucrate_S'
              DataSource = DataSource3
              TabOrder = 19
            end
            object DBEdit97: TDBEdit
              Left = 355
              Top = 103
              Width = 137
              Height = 26
              DataField = 'Venit_S'
              DataSource = DataSource3
              TabOrder = 20
              OnExit = DBEdit25Exit
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
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 0
            end
            object DBEdit43: TDBEdit
              Left = 136
              Top = 48
              Width = 137
              Height = 26
              DataField = 'Suplimentar_15'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 1
            end
            object DBEdit44: TDBEdit
              Left = 136
              Top = 72
              Width = 137
              Height = 26
              DataField = 'Suplimentar_2'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 2
            end
            object DBEdit45: TDBEdit
              Left = 136
              Top = 96
              Width = 137
              Height = 26
              DataField = 'Sarbatori'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 3
            end
            object DBEdit46: TDBEdit
              Left = 136
              Top = 120
              Width = 137
              Height = 26
              DataField = 'Noapte'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 4
            end
            object DBEdit47: TDBEdit
              Left = 136
              Top = 144
              Width = 137
              Height = 26
              DataField = 'Spor_vechime_val'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 5
            end
            object DBEdit48: TDBEdit
              Left = 136
              Top = 168
              Width = 137
              Height = 26
              DataField = 'Valoare_acord'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 6
            end
            object DBEdit49: TDBEdit
              Left = 136
              Top = 192
              Width = 137
              Height = 26
              DataField = 'Salar_brut'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 7
            end
            object DBNavigator3: TDBNavigator
              Left = 8
              Top = 224
              Width = 260
              Height = 25
              DataSource = DataSource3
              TabOrder = 8
            end
            object Button20: TButton
              Left = 8
              Top = 256
              Width = 41
              Height = 25
              Caption = 'Sus'
              TabOrder = 9
              OnClick = Button20Click
            end
            object Button21: TButton
              Left = 8
              Top = 288
              Width = 41
              Height = 25
              Caption = 'Jos'
              TabOrder = 10
              OnClick = Button21Click
            end
            object Button22: TButton
              Left = 56
              Top = 256
              Width = 81
              Height = 25
              Caption = '&Insert'
              TabOrder = 11
              OnClick = Button22Click
            end
            object Button23: TButton
              Left = 56
              Top = 288
              Width = 81
              Height = 25
              Caption = '&Delete'
              Enabled = False
              TabOrder = 12
              OnClick = Button23Click
            end
            object Button24: TButton
              Left = 144
              Top = 256
              Width = 73
              Height = 25
              Caption = '&Save'
              Enabled = False
              TabOrder = 13
              OnClick = Button24Click
            end
            object Button25: TButton
              Left = 144
              Top = 288
              Width = 73
              Height = 25
              Caption = '&Modifica'
              TabOrder = 14
              OnClick = Button25Click
            end
            object Button26: TButton
              Left = 8
              Top = 320
              Width = 257
              Height = 17
              Caption = 'Administrator'
              TabOrder = 15
              OnClick = Button26Click
            end
            object Button27: TButton
              Left = 224
              Top = 256
              Width = 49
              Height = 57
              Caption = '&Close'
              TabOrder = 16
              OnClick = Button27Click
            end
            object Edit3: TEdit
              Left = 75
              Top = 347
              Width = 121
              Height = 26
              PasswordChar = '*'
              TabOrder = 17
              Visible = False
              OnKeyPress = Edit3KeyPress
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
          OnShow = TabSheet7Show
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
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 0
            end
            object DBEdit51: TDBEdit
              Left = 144
              Top = 26
              Width = 137
              Height = 26
              DataField = 'Cas'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 1
            end
            object DBEdit52: TDBEdit
              Left = 144
              Top = 51
              Width = 137
              Height = 26
              DataField = 'Cas_firma'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 2
            end
            object DBEdit53: TDBEdit
              Left = 144
              Top = 75
              Width = 137
              Height = 26
              DataField = 'Somaj'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 3
            end
            object DBEdit54: TDBEdit
              Left = 144
              Top = 99
              Width = 137
              Height = 26
              DataField = 'Somaj_firma'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 4
            end
            object DBEdit55: TDBEdit
              Left = 144
              Top = 123
              Width = 137
              Height = 26
              DataField = 'Sanatate'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 5
            end
            object DBEdit56: TDBEdit
              Left = 144
              Top = 147
              Width = 137
              Height = 26
              DataField = 'Sanatate_firma'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 6
            end
            object DBEdit57: TDBEdit
              Left = 144
              Top = 171
              Width = 137
              Height = 26
              DataField = 'Cheltuieli_profesionale'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 7
            end
            object DBEdit58: TDBEdit
              Left = 144
              Top = 195
              Width = 137
              Height = 26
              DataField = 'Venit_net'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 8
            end
            object DBEdit59: TDBEdit
              Left = 144
              Top = 219
              Width = 137
              Height = 26
              DataField = 'Deducere_pers_de_baza'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 9
            end
            object DBEdit60: TDBEdit
              Left = 144
              Top = 243
              Width = 137
              Height = 26
              DataField = 'Deducere_suplimentara'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 10
            end
            object DBEdit61: TDBEdit
              Left = 144
              Top = 267
              Width = 137
              Height = 26
              DataField = 'Baza_calcul_impozit'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 11
            end
            object DBEdit62: TDBEdit
              Left = 144
              Top = 291
              Width = 137
              Height = 26
              DataField = 'Impozit'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 12
            end
            object DBEdit73: TDBEdit
              Left = 144
              Top = 315
              Width = 137
              Height = 26
              DataField = 'Baza_calcul_impozit_CO'
              DataSource = DataSource3
              TabOrder = 13
            end
            object DBEdit74: TDBEdit
              Left = 144
              Top = 339
              Width = 137
              Height = 26
              DataField = 'Impozit_concediu_O'
              DataSource = DataSource3
              TabOrder = 14
            end
            object DBEdit75: TDBEdit
              Left = 144
              Top = 363
              Width = 137
              Height = 26
              DataField = 'Salar_net'
              DataSource = DataSource3
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
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 0
            end
            object DBEdit64: TDBEdit
              Left = 144
              Top = 40
              Width = 137
              Height = 26
              DataField = 'Avans'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 1
            end
            object DBEdit65: TDBEdit
              Left = 144
              Top = 64
              Width = 137
              Height = 26
              DataField = 'Indemnizatii'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 2
            end
            object DBEdit66: TDBEdit
              Left = 144
              Top = 88
              Width = 137
              Height = 26
              DataField = 'Popriri'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 3
            end
            object DBEdit67: TDBEdit
              Left = 144
              Top = 112
              Width = 137
              Height = 26
              DataField = 'Alte_rate'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 4
            end
            object DBEdit68: TDBEdit
              Left = 144
              Top = 136
              Width = 137
              Height = 26
              DataField = 'Garantii_materiale'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 5
            end
            object DBEdit69: TDBEdit
              Left = 144
              Top = 160
              Width = 137
              Height = 26
              DataField = 'Diferenta_impozit'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 6
            end
            object DBEdit70: TDBEdit
              Left = 144
              Top = 184
              Width = 137
              Height = 26
              DataField = 'Total_plata'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 7
            end
            object DBEdit71: TDBEdit
              Left = 144
              Top = 208
              Width = 137
              Height = 26
              DataField = 'Rest_plata'
              DataSource = DataSource3
              ReadOnly = True
              TabOrder = 8
            end
          end
        end
      end
    end
    object TabSheet8: TTabSheet
      Caption = 'Setari date'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ImageIndex = 3
      ParentFont = False
      TabVisible = False
      object Label100: TLabel
        Left = 40
        Top = 0
        Width = 156
        Height = 18
        Caption = 'Setari sporuri vechime'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label101: TLabel
        Left = 352
        Top = 16
        Width = 129
        Height = 18
        Caption = 'Deducere de baza'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Label102: TLabel
        Left = 488
        Top = 16
        Width = 131
        Height = 18
        Caption = 'Cota maxima CAS'
      end
      object Label103: TLabel
        Left = 128
        Top = 184
        Width = 157
        Height = 18
        Caption = 'Deduceri suplimentare'
      end
      object Label104: TLabel
        Left = 8
        Top = 232
        Width = 74
        Height = 18
        Caption = '1. Pt. sotie'
      end
      object Label105: TLabel
        Left = 8
        Top = 256
        Width = 132
        Height = 18
        Caption = '2. Pt. Primii 2 copii'
      end
      object Label106: TLabel
        Left = 8
        Top = 280
        Width = 229
        Height = 18
        Caption = '3. Pt. fiecare din urmatorii 2 copii'
      end
      object Label107: TLabel
        Left = 8
        Top = 304
        Width = 190
        Height = 18
        Caption = '4. Pt. pers. handicapate gr.I'
      end
      object Label108: TLabel
        Left = 8
        Top = 328
        Width = 193
        Height = 18
        Caption = '5. Pt. pers. handicapate gr.II'
      end
      object Label109: TLabel
        Left = 520
        Top = 184
        Width = 111
        Height = 18
        Caption = 'Cote impozitare'
      end
      object Label110: TLabel
        Left = 368
        Top = 232
        Width = 13
        Height = 18
        Caption = '1.'
      end
      object Label111: TLabel
        Left = 368
        Top = 256
        Width = 13
        Height = 18
        Caption = '2.'
      end
      object Label112: TLabel
        Left = 368
        Top = 280
        Width = 13
        Height = 18
        Caption = '3.'
      end
      object Label113: TLabel
        Left = 368
        Top = 304
        Width = 13
        Height = 18
        Caption = '4.'
      end
      object Label114: TLabel
        Left = 368
        Top = 328
        Width = 13
        Height = 18
        Caption = '5.'
      end
      object Label115: TLabel
        Left = 96
        Top = 24
        Width = 29
        Height = 18
        Caption = 'Intre'
      end
      object Label116: TLabel
        Left = 240
        Top = 24
        Width = 14
        Height = 18
        Caption = '%'
      end
      object Label126: TLabel
        Left = 8
        Top = 376
        Width = 34
        Height = 18
        Caption = 'CAS'
      end
      object Label127: TLabel
        Left = 8
        Top = 400
        Width = 73
        Height = 18
        Caption = 'CAS firma'
      end
      object Label128: TLabel
        Left = 400
        Top = 368
        Width = 45
        Height = 18
        Caption = 'Somaj'
      end
      object Label129: TLabel
        Left = 400
        Top = 392
        Width = 84
        Height = 18
        Caption = 'Somaj firma'
      end
      object Label130: TLabel
        Left = 592
        Top = 368
        Width = 63
        Height = 18
        Caption = 'Sanatate'
      end
      object Label131: TLabel
        Left = 592
        Top = 392
        Width = 102
        Height = 18
        Caption = 'Sanatate firma'
      end
      object Label132: TLabel
        Left = 8
        Top = 424
        Width = 154
        Height = 18
        Caption = 'Cheltuieli profesionale'
      end
      object Label165: TLabel
        Left = 248
        Top = 376
        Width = 50
        Height = 18
        Caption = 'CAS D'
      end
      object Label166: TLabel
        Left = 248
        Top = 400
        Width = 49
        Height = 18
        Caption = 'CAS S'
      end
      object DBGrid3: TDBGrid
        Left = 240
        Top = 208
        Width = 113
        Height = 153
        DataSource = DataSource6
        TabOrder = 3
        TitleFont.Charset = ANSI_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -16
        TitleFont.Name = 'Arial'
        TitleFont.Style = []
      end
      object DBGrid4: TDBGrid
        Left = 384
        Top = 208
        Width = 401
        Height = 153
        DataSource = DataSource7
        TabOrder = 4
        TitleFont.Charset = ANSI_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -16
        TitleFont.Name = 'Arial'
        TitleFont.Style = []
      end
      object Button28: TButton
        Left = 616
        Top = 432
        Width = 75
        Height = 25
        Caption = 'Save'
        TabOrder = 5
        OnClick = Button28Click
      end
      object Button29: TButton
        Left = 712
        Top = 432
        Width = 75
        Height = 25
        Caption = 'Exit'
        TabOrder = 6
        OnClick = Button29Click
      end
      object DBEdit85: TDBEdit
        Left = 352
        Top = 40
        Width = 129
        Height = 26
        DataField = 'D_baza'
        DataSource = DataSource5
        TabOrder = 1
      end
      object DBEdit86: TDBEdit
        Left = 488
        Top = 40
        Width = 129
        Height = 26
        DataField = 'Cota_cas'
        DataSource = DataSource5
        TabOrder = 2
      end
      object DBGrid1: TDBGrid
        Left = 8
        Top = 40
        Width = 320
        Height = 120
        DataSource = DataSource4
        TabOrder = 0
        TitleFont.Charset = ANSI_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -16
        TitleFont.Name = 'Arial'
        TitleFont.Style = []
      end
      object DBEdit76: TDBEdit
        Left = 168
        Top = 368
        Width = 73
        Height = 26
        DataField = 'cas'
        DataSource = DataSource9
        TabOrder = 7
      end
      object DBEdit77: TDBEdit
        Left = 168
        Top = 392
        Width = 73
        Height = 26
        DataField = 'cas_firma'
        DataSource = DataSource9
        TabOrder = 8
      end
      object DBEdit78: TDBEdit
        Left = 168
        Top = 416
        Width = 73
        Height = 26
        DataField = 'cheltuieli_profesionale'
        DataSource = DataSource9
        TabOrder = 9
      end
      object DBEdit79: TDBEdit
        Left = 496
        Top = 368
        Width = 81
        Height = 26
        DataField = 'somaj'
        DataSource = DataSource9
        TabOrder = 10
      end
      object DBEdit80: TDBEdit
        Left = 496
        Top = 392
        Width = 81
        Height = 26
        DataField = 'somaj_firma'
        DataSource = DataSource9
        TabOrder = 11
      end
      object DBEdit81: TDBEdit
        Left = 696
        Top = 368
        Width = 89
        Height = 26
        DataField = 'sanatate'
        DataSource = DataSource9
        TabOrder = 12
      end
      object DBEdit82: TDBEdit
        Left = 696
        Top = 392
        Width = 89
        Height = 26
        DataField = 'sanatate_firma'
        DataSource = DataSource9
        TabOrder = 13
      end
      object DBEdit98: TDBEdit
        Left = 304
        Top = 368
        Width = 81
        Height = 26
        DataField = 'cas_d'
        DataSource = DataSource9
        TabOrder = 14
      end
      object DBEdit99: TDBEdit
        Left = 304
        Top = 392
        Width = 81
        Height = 26
        DataField = 'cas_s'
        DataSource = DataSource9
        TabOrder = 15
      end
    end
    object TabSheet9: TTabSheet
      Caption = 'Rapoarte'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = []
      ImageIndex = 4
      ParentFont = False
      TabVisible = False
      OnShow = TabSheet9Show
      object GroupBox1: TGroupBox
        Left = 8
        Top = 16
        Width = 369
        Height = 73
        Caption = 'Alege data'
        TabOrder = 0
        object Label120: TLabel
          Left = 8
          Top = 32
          Width = 19
          Height = 18
          Caption = 'An'
        end
        object Label121: TLabel
          Left = 160
          Top = 32
          Width = 34
          Height = 18
          Caption = 'Luna'
        end
        object ComboBox2: TComboBox
          Left = 48
          Top = 32
          Width = 97
          Height = 26
          ItemHeight = 18
          TabOrder = 0
          Text = '2003'
          Items.Strings = (
            '2003'
            '2004'
            '2005')
        end
        object ComboBox3: TComboBox
          Left = 200
          Top = 32
          Width = 145
          Height = 26
          ItemHeight = 18
          TabOrder = 1
          Text = 'ianuarie'
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
        end
      end
      object Button31: TButton
        Left = 136
        Top = 256
        Width = 121
        Height = 25
        Caption = 'C&reaza raport'
        TabOrder = 1
        OnClick = Button31Click
      end
      object RadioGroup1: TRadioGroup
        Left = 8
        Top = 96
        Width = 185
        Height = 81
        Caption = 'Tipul raportului'
        ItemIndex = 0
        Items.Strings = (
          '1. Tip lista simplu'
          '2. Tip list grupat')
        TabOrder = 2
        OnClick = RadioGroup1Click
      end
      object RadioGroup2: TRadioGroup
        Left = 208
        Top = 96
        Width = 169
        Height = 81
        Caption = 'Pentru'
        ItemIndex = 0
        Items.Strings = (
          'Persoana curenta'
          'Tot personalul')
        TabOrder = 3
      end
      object Button32: TButton
        Left = 272
        Top = 256
        Width = 105
        Height = 25
        Caption = '&Inchide'
        TabOrder = 4
        OnClick = Button32Click
      end
      object GroupBox2: TGroupBox
        Left = 392
        Top = 16
        Width = 321
        Height = 113
        Caption = 'Filtru special'
        TabOrder = 5
        object Label122: TLabel
          Left = 8
          Top = 48
          Width = 38
          Height = 18
          Caption = 'Dupa'
        end
        object Label133: TLabel
          Left = 8
          Top = 88
          Width = 48
          Height = 18
          Caption = 'Textul: '
        end
        object CheckBox1: TCheckBox
          Left = 16
          Top = 24
          Width = 161
          Height = 17
          Caption = 'Activeaza filtru'
          TabOrder = 0
        end
        object ComboBox4: TComboBox
          Left = 56
          Top = 48
          Width = 145
          Height = 26
          ItemHeight = 0
          TabOrder = 1
          Text = 'Functie'
        end
        object Edit5: TEdit
          Left = 56
          Top = 80
          Width = 145
          Height = 26
          CharCase = ecUpperCase
          TabOrder = 2
        end
      end
      object GroupBox3: TGroupBox
        Left = 8
        Top = 184
        Width = 369
        Height = 65
        Caption = 'Grupat dupa'
        TabOrder = 6
        object ComboBox5: TComboBox
          Left = 16
          Top = 24
          Width = 177
          Height = 26
          Enabled = False
          ItemHeight = 18
          TabOrder = 0
          Text = 'Nume'
          Items.Strings = (
            'Nume'
            'Functia'
            'Marca'
            'Sectia')
        end
      end
      object Button33: TButton
        Left = 8
        Top = 256
        Width = 113
        Height = 25
        Caption = '&Centralizeaza'
        TabOrder = 7
        OnClick = Button33Click
      end
    end
    object TabSheet10: TTabSheet
      Caption = 'Somaj'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ImageIndex = 5
      ParentFont = False
      TabVisible = False
      object Label145: TLabel
        Left = 8
        Top = 96
        Width = 90
        Height = 20
        Caption = 'Numar inreg.'
      end
      object Label146: TLabel
        Left = 8
        Top = 120
        Width = 78
        Height = 20
        Caption = 'Data inreg.'
      end
      object Label147: TLabel
        Left = 8
        Top = 144
        Width = 106
        Height = 20
        Caption = 'Deduceri spec.'
      end
      object Label148: TLabel
        Left = 88
        Top = 176
        Width = 135
        Height = 20
        Caption = 'Contributii nevirate:'
      end
      object Label149: TLabel
        Left = 8
        Top = 216
        Width = 92
        Height = 20
        Caption = 'De angajator'
      end
      object Label150: TLabel
        Left = 8
        Top = 240
        Width = 82
        Height = 20
        Caption = 'De asigurat'
      end
      object Label151: TLabel
        Left = 8
        Top = 264
        Width = 147
        Height = 20
        Caption = 'Majorari de intarziere'
      end
      object Label152: TLabel
        Left = 8
        Top = 288
        Width = 65
        Height = 20
        Caption = 'Penalitati'
      end
      object Label153: TLabel
        Left = 8
        Top = 328
        Width = 107
        Height = 20
        Caption = 'Data depunere'
      end
      object Bevel3: TBevel
        Left = 0
        Top = 48
        Width = 625
        Height = 36
        Style = bsRaised
      end
      object Label144: TLabel
        Left = 8
        Top = 60
        Width = 20
        Height = 20
        Caption = 'An'
      end
      object Label143: TLabel
        Left = 128
        Top = 60
        Width = 36
        Height = 20
        Caption = 'Luna'
      end
      object Bevel4: TBevel
        Left = 0
        Top = 82
        Width = 625
        Height = 273
      end
      object Label154: TLabel
        Left = 136
        Top = 0
        Width = 289
        Height = 45
        Caption = 'Declaratii Somaj'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -40
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
      end
      object Bevel5: TBevel
        Left = 328
        Top = 104
        Width = 185
        Height = 73
      end
      object Label155: TLabel
        Left = 360
        Top = 112
        Width = 118
        Height = 20
        Caption = 'Total somaj virat:'
      end
      object Label156: TLabel
        Left = 440
        Top = 144
        Width = 14
        Height = 20
        Caption = '%'
      end
      object Bevel6: TBevel
        Left = 0
        Top = 354
        Width = 625
        Height = 63
        Style = bsRaised
      end
      object Label157: TLabel
        Left = 8
        Top = 360
        Width = 176
        Height = 20
        Caption = 'Cale director descarcare:'
      end
      object DateTimePicker1: TDateTimePicker
        Left = 160
        Top = 115
        Width = 121
        Height = 28
        CalAlignment = dtaLeft
        Date = 37855.059859838
        Time = 37855.059859838
        DateFormat = dfShort
        DateMode = dmComboBox
        Kind = dtkDate
        ParseInput = False
        TabOrder = 0
      end
      object DateTimePicker2: TDateTimePicker
        Left = 160
        Top = 317
        Width = 121
        Height = 28
        CalAlignment = dtaLeft
        Date = 37855.0626232639
        Time = 37855.0626232639
        DateFormat = dfShort
        DateMode = dmComboBox
        Kind = dtkDate
        ParseInput = False
        TabOrder = 1
      end
      object ComboBox6: TComboBox
        Left = 32
        Top = 52
        Width = 89
        Height = 28
        ItemHeight = 20
        TabOrder = 2
        Text = '2003'
        Items.Strings = (
          '2003'
          '2004'
          '2005')
      end
      object ComboBox7: TComboBox
        Left = 168
        Top = 52
        Width = 113
        Height = 28
        ItemHeight = 20
        TabOrder = 3
        Text = 'august'
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
      end
      object Button35: TButton
        Left = 304
        Top = 53
        Width = 313
        Height = 25
        Caption = 'Creaza'
        TabOrder = 4
        OnClick = Button35Click
      end
      object CSpinEdit1: TCSpinEdit
        Left = 360
        Top = 136
        Width = 65
        Height = 30
        TabStop = True
        Increment = 5
        MaxValue = 100
        ParentColor = False
        TabOrder = 5
        Value = 100
      end
      object Edit6: TEdit
        Left = 160
        Top = 88
        Width = 121
        Height = 28
        TabOrder = 6
        Text = '0'
      end
      object Edit7: TEdit
        Left = 160
        Top = 142
        Width = 121
        Height = 28
        TabOrder = 7
        Text = '0'
      end
      object Edit8: TEdit
        Left = 160
        Top = 208
        Width = 121
        Height = 28
        TabOrder = 8
        Text = '0'
      end
      object Edit9: TEdit
        Left = 160
        Top = 235
        Width = 121
        Height = 28
        TabOrder = 9
        Text = '0'
      end
      object Edit10: TEdit
        Left = 160
        Top = 262
        Width = 121
        Height = 28
        TabOrder = 10
        Text = '0'
      end
      object Edit11: TEdit
        Left = 160
        Top = 289
        Width = 121
        Height = 28
        TabOrder = 11
        Text = '0'
      end
      object Button38: TButton
        Left = 704
        Top = 416
        Width = 75
        Height = 25
        Caption = '&Inchide'
        TabOrder = 12
        OnClick = Button38Click
      end
      object Button36: TButton
        Left = 568
        Top = 360
        Width = 49
        Height = 28
        Caption = '...'
        TabOrder = 13
        OnClick = Button36Click
      end
      object Edit12: TEdit
        Left = 192
        Top = 360
        Width = 377
        Height = 28
        TabOrder = 14
        Text = 'A:\'
      end
      object Button37: TButton
        Left = 240
        Top = 389
        Width = 169
        Height = 25
        Caption = 'Descarca datele'
        TabOrder = 15
        OnClick = Button37Click
      end
    end
    object TabSheet11: TTabSheet
      Caption = 'CAS'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ImageIndex = 6
      ParentFont = False
      TabVisible = False
      object Label158: TLabel
        Left = 16
        Top = 16
        Width = 24
        Height = 20
        Caption = 'An:'
      end
      object Label159: TLabel
        Left = 144
        Top = 16
        Width = 40
        Height = 20
        Caption = 'Luna:'
      end
      object Bevel8: TBevel
        Left = 0
        Top = 2
        Width = 625
        Height = 41
        Style = bsRaised
      end
      object Bevel9: TBevel
        Left = 0
        Top = 42
        Width = 625
        Height = 247
      end
      object Label168: TLabel
        Left = 8
        Top = 56
        Width = 101
        Height = 20
        Caption = 'Data lichidare:'
      end
      object Label169: TLabel
        Left = 8
        Top = 80
        Width = 60
        Height = 20
        Caption = 'CAS145'
      end
      object Label170: TLabel
        Left = 184
        Top = 138
        Width = 73
        Height = 20
        Caption = 'Localitate:'
      end
      object Label171: TLabel
        Left = 8
        Top = 170
        Width = 25
        Height = 20
        Caption = 'Str.'
      end
      object Label172: TLabel
        Left = 264
        Top = 170
        Width = 20
        Height = 20
        Caption = 'Nr.'
      end
      object Label173: TLabel
        Left = 352
        Top = 170
        Width = 18
        Height = 20
        Caption = 'Bl.'
      end
      object Label174: TLabel
        Left = 440
        Top = 170
        Width = 23
        Height = 20
        Caption = 'Sc.'
      end
      object Label175: TLabel
        Left = 536
        Top = 170
        Width = 20
        Height = 20
        Caption = 'Et.'
      end
      object Label176: TLabel
        Left = 8
        Top = 210
        Width = 24
        Height = 20
        Caption = 'Ap.'
      end
      object Label177: TLabel
        Left = 8
        Top = 138
        Width = 40
        Height = 20
        Caption = 'Judet'
      end
      object Label178: TLabel
        Left = 384
        Top = 138
        Width = 47
        Height = 20
        Caption = 'Sector'
      end
      object Bevel10: TBevel
        Left = 440
        Top = 200
        Width = 177
        Height = 82
      end
      object Label179: TLabel
        Left = 488
        Top = 208
        Width = 65
        Height = 20
        Caption = 'Cas Virat'
      end
      object Label180: TLabel
        Left = 560
        Top = 240
        Width = 14
        Height = 20
        Caption = '%'
      end
      object Label181: TLabel
        Left = 8
        Top = 104
        Width = 77
        Height = 20
        Caption = 'Nr. file A11'
      end
      object ComboBox8: TComboBox
        Left = 48
        Top = 8
        Width = 89
        Height = 28
        ItemHeight = 20
        TabOrder = 0
        Text = '2003'
        Items.Strings = (
          '2003'
          '2004'
          '2005')
      end
      object ComboBox9: TComboBox
        Left = 192
        Top = 8
        Width = 121
        Height = 28
        ItemHeight = 20
        TabOrder = 1
        Text = 'august'
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
      end
      object DateTimePicker3: TDateTimePicker
        Left = 120
        Top = 48
        Width = 186
        Height = 28
        CalAlignment = dtaLeft
        Date = 37893.7285523148
        Time = 37893.7285523148
        DateFormat = dfShort
        DateMode = dmComboBox
        Kind = dtkDate
        ParseInput = False
        TabOrder = 2
      end
      object Edit13: TEdit
        Left = 120
        Top = 76
        Width = 185
        Height = 28
        TabOrder = 3
        Text = 'Edit13'
      end
      object Edit14: TEdit
        Left = 56
        Top = 130
        Width = 121
        Height = 28
        TabOrder = 5
        Text = 'Edit14'
      end
      object Edit15: TEdit
        Left = 256
        Top = 130
        Width = 121
        Height = 28
        TabOrder = 6
        Text = 'Edit15'
      end
      object Edit16: TEdit
        Left = 432
        Top = 130
        Width = 57
        Height = 28
        TabOrder = 7
        Text = 'Edit16'
      end
      object Edit17: TEdit
        Left = 40
        Top = 162
        Width = 217
        Height = 28
        TabOrder = 8
        Text = 'Edit17'
      end
      object Edit18: TEdit
        Left = 288
        Top = 162
        Width = 57
        Height = 28
        TabOrder = 9
        Text = 'Edit18'
      end
      object Edit19: TEdit
        Left = 376
        Top = 162
        Width = 57
        Height = 28
        TabOrder = 10
        Text = 'Edit19'
      end
      object Edit20: TEdit
        Left = 472
        Top = 162
        Width = 57
        Height = 28
        TabOrder = 11
        Text = 'Edit20'
      end
      object Edit21: TEdit
        Left = 568
        Top = 162
        Width = 49
        Height = 28
        TabOrder = 12
        Text = 'Edit21'
      end
      object Edit22: TEdit
        Left = 40
        Top = 202
        Width = 57
        Height = 28
        TabOrder = 13
        Text = 'Edit22'
      end
      object Button39: TButton
        Left = 320
        Top = 8
        Width = 75
        Height = 25
        Caption = 'Creaza'
        TabOrder = 14
        OnClick = Button39Click
      end
      object Button40: TButton
        Left = 528
        Top = 8
        Width = 89
        Height = 25
        Caption = 'Descarca'
        TabOrder = 15
      end
      object pcas: TCSpinEdit
        Left = 480
        Top = 232
        Width = 65
        Height = 30
        TabStop = True
        Increment = 5
        MaxValue = 100
        ParentColor = False
        TabOrder = 16
      end
      object Edit23: TEdit
        Left = 120
        Top = 103
        Width = 185
        Height = 28
        TabOrder = 4
        Text = 'Edit23'
      end
      object Button41: TButton
        Left = 704
        Top = 432
        Width = 75
        Height = 25
        Caption = 'Inapoi'
        TabOrder = 17
        OnClick = Button41Click
      end
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 490
    Width = 803
    Height = 19
    Panels = <
      item
        Width = 670
      end
      item
        Width = 50
      end>
    SimplePanel = False
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 568
    Top = 65528
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
    Left = 600
    Top = 65528
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
  object DataSource3: TDataSource
    DataSet = Table3
    Left = 688
    Top = 65528
  end
  object DataSource4: TDataSource
    DataSet = Table4
    Left = 728
    Top = 104
  end
  object Table4: TTable
    DatabaseName = 'data\dat\'
    TableName = 'sporuri.db'
    Left = 760
    Top = 104
    object Table4v1: TIntegerField
      FieldName = 'v1'
    end
    object Table4v2: TIntegerField
      FieldName = 'v2'
    end
    object Table4val: TIntegerField
      FieldName = 'val'
    end
  end
  object MainMenu1: TMainMenu
    Left = 768
    object File1: TMenuItem
      Caption = 'File'
    end
    object Options1: TMenuItem
      Caption = 'Options'
      object Listasporurivechime1: TMenuItem
        Caption = 'Setari date'
        OnClick = Listasporurivechime1Click
      end
    end
    object Help1: TMenuItem
      Caption = 'Raport firma'
      Visible = False
      object Raportcomplet1: TMenuItem
        Caption = 'Rapoarte'
        OnClick = Raportcomplet1Click
      end
      object Declaratiisomaj1: TMenuItem
        Caption = 'Declaratii somaj'
        OnClick = Declaratiisomaj1Click
      end
      object DeclaratiiCAS1: TMenuItem
        Caption = 'Declaratii CAS'
        OnClick = DeclaratiiCAS1Click
      end
    end
  end
  object DataSource5: TDataSource
    DataSet = Table5
    Left = 732
    Top = 136
  end
  object Table5: TTable
    DatabaseName = 'data\dat'
    TableName = 'ded_baza.DB'
    Left = 764
    Top = 136
    object Table5D_baza: TIntegerField
      FieldName = 'D_baza'
    end
    object Table5Cota_cas: TIntegerField
      FieldName = 'Cota_cas'
    end
  end
  object DataSource6: TDataSource
    DataSet = Table6
    Left = 732
    Top = 168
  end
  object Table6: TTable
    DatabaseName = 'data\dat'
    TableName = 'ded_sup1.DB'
    Left = 764
    Top = 168
    object Table6Cota1: TFloatField
      DisplayWidth = 7
      FieldName = 'Cota1'
    end
  end
  object DataSource7: TDataSource
    DataSet = Table7
    Left = 732
    Top = 200
  end
  object Table7: TTable
    DatabaseName = 'data\dat'
    TableName = 'cote_imp.DB'
    Left = 764
    Top = 200
    object Table7V1: TIntegerField
      DisplayWidth = 16
      FieldName = 'V1'
    end
    object Table7V2: TIntegerField
      DisplayWidth = 12
      FieldName = 'V2'
    end
    object Table7Suma_fixa: TIntegerField
      DisplayWidth = 10
      FieldName = 'Suma_fixa'
    end
    object Table7Cota: TIntegerField
      DisplayWidth = 9
      FieldName = 'Cota'
    end
  end
  object Timer1: TTimer
    Interval = 0
    OnTimer = Timer1Timer
    Left = 764
    Top = 416
  end
  object DataSource9: TDataSource
    DataSet = Table9
    Left = 696
    Top = 432
  end
  object DataSource8: TDataSource
    DataSet = Table8
    Left = 732
    Top = 264
  end
  object DataSource10: TDataSource
    DataSet = Table10
    Left = 364
    Top = 448
  end
  object Table10: TTable
    DatabaseName = 'data\dat\'
    TableName = 'zl.dbf'
    Left = 404
    Top = 448
    object Table10L01: TStringField
      FieldName = 'L01'
      Size = 2
    end
    object Table10L02: TStringField
      FieldName = 'L02'
      Size = 2
    end
    object Table10L03: TStringField
      FieldName = 'L03'
      Size = 2
    end
    object Table10L04: TStringField
      FieldName = 'L04'
      Size = 2
    end
    object Table10L05: TStringField
      FieldName = 'L05'
      Size = 2
    end
    object Table10L06: TStringField
      FieldName = 'L06'
      Size = 2
    end
    object Table10L07: TStringField
      FieldName = 'L07'
      Size = 2
    end
    object Table10L08: TStringField
      FieldName = 'L08'
      Size = 2
    end
    object Table10L09: TStringField
      FieldName = 'L09'
      Size = 2
    end
    object Table10L10: TStringField
      FieldName = 'L10'
      Size = 2
    end
    object Table10L11: TStringField
      FieldName = 'L11'
      Size = 2
    end
    object Table10L12: TStringField
      FieldName = 'L12'
      Size = 2
    end
    object Table10ANUL: TSmallintField
      FieldName = 'ANUL'
    end
  end
  object Table9: TTable
    DatabaseName = 'data\dat\'
    TableName = 'dbsomaj'
    Left = 728
    Top = 432
    object Table9cas: TFloatField
      FieldName = 'cas'
    end
    object Table9cas_firma: TFloatField
      FieldName = 'cas_firma'
    end
    object Table9somaj: TFloatField
      FieldName = 'somaj'
    end
    object Table9somaj_firma: TFloatField
      FieldName = 'somaj_firma'
    end
    object Table9sanatate: TFloatField
      FieldName = 'sanatate'
    end
    object Table9sanatate_firma: TFloatField
      FieldName = 'sanatate_firma'
    end
    object Table9cheltuieli_profesionale: TFloatField
      FieldName = 'cheltuieli_profesionale'
    end
    object Table9cas_d: TFloatField
      FieldName = 'cas_d'
    end
    object Table9cas_s: TFloatField
      FieldName = 'cas_s'
    end
  end
  object Table8: TTable
    DatabaseName = 'data\'
    FieldDefs = <
      item
        Name = 'Nume_firma'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'J'
        DataType = ftString
        Size = 25
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
        Name = 'Nume'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Prenume'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Cod'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Cnp'
        DataType = ftFloat
      end
      item
        Name = 'Functie'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Cod_functie'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Sectia'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Marca'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Data_angajare'
        DataType = ftDate
      end
      item
        Name = 'Salar_tarifar'
        DataType = ftFloat
      end
      item
        Name = 'Prima'
        DataType = ftFloat
      end
      item
        Name = 'Data_prima_angajare'
        DataType = ftDate
      end
      item
        Name = 'Spor_vechime'
        DataType = ftBoolean
      end
      item
        Name = 'Regie'
        DataType = ftBoolean
      end
      item
        Name = 'Sex'
        DataType = ftString
        Size = 1
      end
      item
        Name = 'Stare_civila'
        DataType = ftString
        Size = 12
      end
      item
        Name = 'Telefon'
        DataType = ftFloat
      end
      item
        Name = 'Adresa'
        DataType = ftMemo
        Size = 1
      end
      item
        Name = 'Data_nastere'
        DataType = ftDate
      end
      item
        Name = 'Stagiu_militar'
        DataType = ftBoolean
      end
      item
        Name = 'Livret_militar'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Studii'
        DataType = ftMemo
        Size = 1
      end
      item
        Name = 'Numar_copii'
        DataType = ftInteger
      end
      item
        Name = 'Date_copii'
        DataType = ftMemo
        Size = 1
      end
      item
        Name = 'Pers_handicapate_grI'
        DataType = ftBoolean
      end
      item
        Name = 'Pers_handicapate_grII'
        DataType = ftBoolean
      end
      item
        Name = 'Sotie_in_intretinere'
        DataType = ftBoolean
      end
      item
        Name = 'Concediu_pe_an'
        DataType = ftInteger
      end
      item
        Name = 'An'
        DataType = ftInteger
      end
      item
        Name = 'Luna'
        DataType = ftString
        Size = 15
      end
      item
        Name = 'Salar_ora'
        DataType = ftFloat
      end
      item
        Name = 'Zile_lucrate'
        DataType = ftInteger
      end
      item
        Name = 'Zile_nelucrate'
        DataType = ftInteger
      end
      item
        Name = 'Ore_suplimentare_1,5'
        DataType = ftInteger
      end
      item
        Name = 'Ore_suplimentare_2'
        DataType = ftInteger
      end
      item
        Name = 'Ore_in_sarbatori'
        DataType = ftInteger
      end
      item
        Name = 'Ore_noapte'
        DataType = ftInteger
      end
      item
        Name = 'Ore_nemotivate'
        DataType = ftInteger
      end
      item
        Name = 'Cfs'
        DataType = ftInteger
      end
      item
        Name = 'Ore_in_acord'
        DataType = ftInteger
      end
      item
        Name = 'Premiu'
        DataType = ftFloat
      end
      item
        Name = 'Alti_bani'
        DataType = ftFloat
      end
      item
        Name = 'Diferenta_diurna'
        DataType = ftFloat
      end
      item
        Name = 'Regularizare'
        DataType = ftFloat
      end
      item
        Name = 'Salar_realizat'
        DataType = ftFloat
      end
      item
        Name = 'Suplimentar_1,5'
        DataType = ftFloat
      end
      item
        Name = 'Suplimentar_2'
        DataType = ftFloat
      end
      item
        Name = 'Sarbatori'
        DataType = ftFloat
      end
      item
        Name = 'Noapte'
        DataType = ftFloat
      end
      item
        Name = 'Spor_vechime_val'
        DataType = ftFloat
      end
      item
        Name = 'Valoare_acord'
        DataType = ftFloat
      end
      item
        Name = 'Salar_brut'
        DataType = ftFloat
      end
      item
        Name = 'Zile_concediu_O'
        DataType = ftInteger
      end
      item
        Name = 'Valoare_concediu_O'
        DataType = ftFloat
      end
      item
        Name = 'Zile_concediu_M'
        DataType = ftInteger
      end
      item
        Name = 'Valoare_concediu_M'
        DataType = ftFloat
      end
      item
        Name = 'Preaviz'
        DataType = ftBoolean
      end
      item
        Name = 'Baza_calcul_CAS'
        DataType = ftFloat
      end
      item
        Name = 'Cas'
        DataType = ftFloat
      end
      item
        Name = 'Cas_firma'
        DataType = ftFloat
      end
      item
        Name = 'Somaj'
        DataType = ftFloat
      end
      item
        Name = 'Somaj_firma'
        DataType = ftFloat
      end
      item
        Name = 'Sanatate'
        DataType = ftFloat
      end
      item
        Name = 'Sanatate_firma'
        DataType = ftFloat
      end
      item
        Name = 'Cheltuieli_profesionale'
        DataType = ftFloat
      end
      item
        Name = 'Venit_net'
        DataType = ftFloat
      end
      item
        Name = 'Deducere_pers_de_baza'
        DataType = ftFloat
      end
      item
        Name = 'Deducere_suplimentara'
        DataType = ftFloat
      end
      item
        Name = 'Baza_calcul_impozit'
        DataType = ftFloat
      end
      item
        Name = 'Baza_calcul_impozit_CO'
        DataType = ftFloat
      end
      item
        Name = 'Impozit'
        DataType = ftFloat
      end
      item
        Name = 'Impozit_concediu_O'
        DataType = ftFloat
      end
      item
        Name = 'Ajutor_nastere'
        DataType = ftFloat
      end
      item
        Name = 'Avans'
        DataType = ftFloat
      end
      item
        Name = 'Indemnizatii'
        DataType = ftFloat
      end
      item
        Name = 'Popriri'
        DataType = ftFloat
      end
      item
        Name = 'Alte_rate'
        DataType = ftFloat
      end
      item
        Name = 'Garantii_materiale'
        DataType = ftFloat
      end
      item
        Name = 'Rest_plata'
        DataType = ftFloat
      end
      item
        Name = 'Diferenta_impozit'
        DataType = ftFloat
      end
      item
        Name = 'Salar_net'
        DataType = ftFloat
      end
      item
        Name = 'Total_plata'
        DataType = ftFloat
      end
      item
        Name = 'Concediu_ramas'
        DataType = ftInteger
      end
      item
        Name = 'Zile_luna'
        DataType = ftInteger
      end
      item
        Name = 'Cnp_angajator'
        DataType = ftFloat
      end
      item
        Name = 'Functia_pers_raport'
        DataType = ftString
        Size = 15
      end
      item
        Name = 'Nume_pers_raport'
        DataType = ftString
        Size = 15
      end
      item
        Name = 'Banca_1'
        DataType = ftString
        Size = 15
      end
      item
        Name = 'Banca_2'
        DataType = ftString
        Size = 15
      end
      item
        Name = 'Cont_banca_1'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Cont_banca_2'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Data_lichidare_salar'
        DataType = ftDate
      end
      item
        Name = 'Norma_ore_zi'
        DataType = ftInteger
      end
      item
        Name = 'e_mail_firma'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'Filiala_1'
        DataType = ftString
        Size = 12
      end
      item
        Name = 'Filiala_2'
        DataType = ftString
        Size = 12
      end
      item
        Name = 'Fisc'
        DataType = ftFloat
      end
      item
        Name = 'Zile_lucrate_D'
        DataType = ftInteger
      end
      item
        Name = 'Zile_lucrate_S'
        DataType = ftInteger
      end
      item
        Name = 'Venit_D'
        DataType = ftFloat
      end
      item
        Name = 'Venit_S'
        DataType = ftFloat
      end
      item
        Name = 'BASS'
        DataType = ftFloat
      end
      item
        Name = 'Pensionar'
        DataType = ftBoolean
      end>
    StoreDefs = True
    TableName = '2003augustSCzNeozTradingzLdtzSRL.DB'
    Left = 764
    Top = 264
    object Table8Nume_firma: TStringField
      FieldName = 'Nume_firma'
      Size = 25
    end
    object Table8J: TStringField
      FieldName = 'J'
      Size = 25
    end
    object Table8Telefon_firma: TFloatField
      FieldName = 'Telefon_firma'
    end
    object Table8Adresa_firma: TMemoField
      FieldName = 'Adresa_firma'
      BlobType = ftMemo
      Size = 1
    end
    object Table8Nume: TStringField
      FieldName = 'Nume'
      Size = 25
    end
    object Table8Prenume: TStringField
      FieldName = 'Prenume'
      Size = 25
    end
    object Table8Cod: TStringField
      FieldName = 'Cod'
      Size = 25
    end
    object Table8Cnp: TFloatField
      FieldName = 'Cnp'
    end
    object Table8Functie: TStringField
      FieldName = 'Functie'
      Size = 25
    end
    object Table8Cod_functie: TStringField
      FieldName = 'Cod_functie'
      Size = 25
    end
    object Table8Sectia: TStringField
      FieldName = 'Sectia'
      Size = 25
    end
    object Table8Marca: TStringField
      FieldName = 'Marca'
      Size = 25
    end
    object Table8Data_angajare: TDateField
      FieldName = 'Data_angajare'
    end
    object Table8Salar_tarifar: TFloatField
      FieldName = 'Salar_tarifar'
    end
    object Table8Prima: TFloatField
      FieldName = 'Prima'
    end
    object Table8Data_prima_angajare: TDateField
      FieldName = 'Data_prima_angajare'
    end
    object Table8Spor_vechime: TBooleanField
      FieldName = 'Spor_vechime'
    end
    object Table8Regie: TBooleanField
      FieldName = 'Regie'
    end
    object Table8Sex: TStringField
      FieldName = 'Sex'
      Size = 1
    end
    object Table8Stare_civila: TStringField
      FieldName = 'Stare_civila'
      Size = 12
    end
    object Table8Telefon: TFloatField
      FieldName = 'Telefon'
    end
    object Table8Adresa: TMemoField
      FieldName = 'Adresa'
      BlobType = ftMemo
      Size = 1
    end
    object Table8Data_nastere: TDateField
      FieldName = 'Data_nastere'
    end
    object Table8Stagiu_militar: TBooleanField
      FieldName = 'Stagiu_militar'
    end
    object Table8Livret_militar: TStringField
      FieldName = 'Livret_militar'
      Size = 25
    end
    object Table8Studii: TMemoField
      FieldName = 'Studii'
      BlobType = ftMemo
      Size = 1
    end
    object Table8Numar_copii: TIntegerField
      FieldName = 'Numar_copii'
    end
    object Table8Date_copii: TMemoField
      FieldName = 'Date_copii'
      BlobType = ftMemo
      Size = 1
    end
    object Table8Pers_handicapate_grI: TBooleanField
      FieldName = 'Pers_handicapate_grI'
    end
    object Table8Pers_handicapate_grII: TBooleanField
      FieldName = 'Pers_handicapate_grII'
    end
    object Table8Sotie_in_intretinere: TBooleanField
      FieldName = 'Sotie_in_intretinere'
    end
    object Table8Concediu_pe_an: TIntegerField
      FieldName = 'Concediu_pe_an'
    end
    object Table8An: TIntegerField
      FieldName = 'An'
    end
    object Table8Luna: TStringField
      FieldName = 'Luna'
      Size = 15
    end
    object Table8Salar_ora: TFloatField
      FieldName = 'Salar_ora'
    end
    object Table8Zile_lucrate: TIntegerField
      FieldName = 'Zile_lucrate'
    end
    object Table8Zile_nelucrate: TIntegerField
      FieldName = 'Zile_nelucrate'
    end
    object Table8Ore_suplimentare_15: TIntegerField
      FieldName = 'Ore_suplimentare_1,5'
    end
    object Table8Ore_suplimentare_2: TIntegerField
      FieldName = 'Ore_suplimentare_2'
    end
    object Table8Ore_in_sarbatori: TIntegerField
      FieldName = 'Ore_in_sarbatori'
    end
    object Table8Ore_noapte: TIntegerField
      FieldName = 'Ore_noapte'
    end
    object Table8Ore_nemotivate: TIntegerField
      FieldName = 'Ore_nemotivate'
    end
    object Table8Cfs: TIntegerField
      FieldName = 'Cfs'
    end
    object Table8Ore_in_acord: TIntegerField
      FieldName = 'Ore_in_acord'
    end
    object Table8Premiu: TFloatField
      FieldName = 'Premiu'
    end
    object Table8Alti_bani: TFloatField
      FieldName = 'Alti_bani'
    end
    object Table8Diferenta_diurna: TFloatField
      FieldName = 'Diferenta_diurna'
    end
    object Table8Regularizare: TFloatField
      FieldName = 'Regularizare'
    end
    object Table8Salar_realizat: TFloatField
      FieldName = 'Salar_realizat'
    end
    object Table8Suplimentar_15: TFloatField
      FieldName = 'Suplimentar_1,5'
    end
    object Table8Suplimentar_2: TFloatField
      FieldName = 'Suplimentar_2'
    end
    object Table8Sarbatori: TFloatField
      FieldName = 'Sarbatori'
    end
    object Table8Noapte: TFloatField
      FieldName = 'Noapte'
    end
    object Table8Spor_vechime_val: TFloatField
      FieldName = 'Spor_vechime_val'
    end
    object Table8Valoare_acord: TFloatField
      FieldName = 'Valoare_acord'
    end
    object Table8Salar_brut: TFloatField
      FieldName = 'Salar_brut'
    end
    object Table8Zile_concediu_O: TIntegerField
      FieldName = 'Zile_concediu_O'
    end
    object Table8Valoare_concediu_O: TFloatField
      FieldName = 'Valoare_concediu_O'
    end
    object Table8Zile_concediu_M: TIntegerField
      FieldName = 'Zile_concediu_M'
    end
    object Table8Valoare_concediu_M: TFloatField
      FieldName = 'Valoare_concediu_M'
    end
    object Table8Preaviz: TBooleanField
      FieldName = 'Preaviz'
    end
    object Table8Baza_calcul_CAS: TFloatField
      FieldName = 'Baza_calcul_CAS'
    end
    object Table8Cas: TFloatField
      FieldName = 'Cas'
    end
    object Table8Cas_firma: TFloatField
      FieldName = 'Cas_firma'
    end
    object Table8Somaj: TFloatField
      FieldName = 'Somaj'
    end
    object Table8Somaj_firma: TFloatField
      FieldName = 'Somaj_firma'
    end
    object Table8Sanatate: TFloatField
      FieldName = 'Sanatate'
    end
    object Table8Sanatate_firma: TFloatField
      FieldName = 'Sanatate_firma'
    end
    object Table8Cheltuieli_profesionale: TFloatField
      FieldName = 'Cheltuieli_profesionale'
    end
    object Table8Venit_net: TFloatField
      FieldName = 'Venit_net'
    end
    object Table8Deducere_pers_de_baza: TFloatField
      FieldName = 'Deducere_pers_de_baza'
    end
    object Table8Deducere_suplimentara: TFloatField
      FieldName = 'Deducere_suplimentara'
    end
    object Table8Baza_calcul_impozit: TFloatField
      FieldName = 'Baza_calcul_impozit'
    end
    object Table8Baza_calcul_impozit_CO: TFloatField
      FieldName = 'Baza_calcul_impozit_CO'
    end
    object Table8Impozit: TFloatField
      FieldName = 'Impozit'
    end
    object Table8Impozit_concediu_O: TFloatField
      FieldName = 'Impozit_concediu_O'
    end
    object Table8Ajutor_nastere: TFloatField
      FieldName = 'Ajutor_nastere'
    end
    object Table8Avans: TFloatField
      FieldName = 'Avans'
    end
    object Table8Indemnizatii: TFloatField
      FieldName = 'Indemnizatii'
    end
    object Table8Popriri: TFloatField
      FieldName = 'Popriri'
    end
    object Table8Alte_rate: TFloatField
      FieldName = 'Alte_rate'
    end
    object Table8Garantii_materiale: TFloatField
      FieldName = 'Garantii_materiale'
    end
    object Table8Rest_plata: TFloatField
      FieldName = 'Rest_plata'
    end
    object Table8Diferenta_impozit: TFloatField
      FieldName = 'Diferenta_impozit'
    end
    object Table8Salar_net: TFloatField
      FieldName = 'Salar_net'
    end
    object Table8Total_plata: TFloatField
      FieldName = 'Total_plata'
    end
    object Table8Concediu_ramas: TIntegerField
      FieldName = 'Concediu_ramas'
    end
    object Table8Zile_luna: TIntegerField
      FieldName = 'Zile_luna'
    end
    object Table8Cnp_angajator: TFloatField
      FieldName = 'Cnp_angajator'
    end
    object Table8Functia_pers_raport: TStringField
      FieldName = 'Functia_pers_raport'
      Size = 15
    end
    object Table8Nume_pers_raport: TStringField
      FieldName = 'Nume_pers_raport'
      Size = 15
    end
    object Table8Banca_1: TStringField
      FieldName = 'Banca_1'
      Size = 15
    end
    object Table8Banca_2: TStringField
      FieldName = 'Banca_2'
      Size = 15
    end
    object Table8Cont_banca_1: TStringField
      FieldName = 'Cont_banca_1'
      Size = 25
    end
    object Table8Cont_banca_2: TStringField
      FieldName = 'Cont_banca_2'
      Size = 25
    end
    object Table8Data_lichidare_salar: TDateField
      FieldName = 'Data_lichidare_salar'
    end
    object Table8Norma_ore_zi: TIntegerField
      FieldName = 'Norma_ore_zi'
    end
    object Table8e_mail_firma: TStringField
      FieldName = 'e_mail_firma'
      Size = 25
    end
    object Table8Filiala_1: TStringField
      FieldName = 'Filiala_1'
      Size = 12
    end
    object Table8Filiala_2: TStringField
      FieldName = 'Filiala_2'
      Size = 12
    end
    object Table8Fisc: TFloatField
      FieldName = 'Fisc'
      Precision = 2
    end
    object Table8Zile_lucrate_D: TIntegerField
      FieldName = 'Zile_lucrate_D'
    end
    object Table8Zile_lucrate_S: TIntegerField
      FieldName = 'Zile_lucrate_S'
    end
    object Table8Venit_D: TFloatField
      FieldName = 'Venit_D'
    end
    object Table8Venit_S: TFloatField
      FieldName = 'Venit_S'
    end
    object Table8BASS: TFloatField
      FieldName = 'BASS'
    end
    object Table8Pensionar: TBooleanField
      FieldName = 'Pensionar'
    end
  end
  object Table3: TTable
    DatabaseName = 'data\'
    FieldDefs = <
      item
        Name = 'An'
        DataType = ftInteger
      end
      item
        Name = 'Luna'
        DataType = ftString
        Size = 15
      end
      item
        Name = 'Salar_ora'
        DataType = ftFloat
      end
      item
        Name = 'Zile_lucrate'
        DataType = ftInteger
      end
      item
        Name = 'Zile_nelucrate'
        DataType = ftInteger
      end
      item
        Name = 'Ore_suplimentare_15'
        DataType = ftInteger
      end
      item
        Name = 'Ore_suplimentare_2'
        DataType = ftInteger
      end
      item
        Name = 'Ore_in_sarbatori'
        DataType = ftInteger
      end
      item
        Name = 'Ore_noapte'
        DataType = ftInteger
      end
      item
        Name = 'Ore_nemotivate'
        DataType = ftInteger
      end
      item
        Name = 'Cfs'
        DataType = ftInteger
      end
      item
        Name = 'Ore_in_acord'
        DataType = ftInteger
      end
      item
        Name = 'Premiu'
        DataType = ftFloat
      end
      item
        Name = 'Alti_bani'
        DataType = ftFloat
      end
      item
        Name = 'Diferenta_diurna'
        DataType = ftFloat
      end
      item
        Name = 'Regularizare'
        DataType = ftFloat
      end
      item
        Name = 'Salar_realizat'
        DataType = ftFloat
      end
      item
        Name = 'Suplimentar_15'
        DataType = ftFloat
      end
      item
        Name = 'Suplimentar_2'
        DataType = ftFloat
      end
      item
        Name = 'Sarbatori'
        DataType = ftFloat
      end
      item
        Name = 'Noapte'
        DataType = ftFloat
      end
      item
        Name = 'Spor_vechime_val'
        DataType = ftFloat
      end
      item
        Name = 'Valoare_acord'
        DataType = ftFloat
      end
      item
        Name = 'Salar_brut'
        DataType = ftFloat
      end
      item
        Name = 'Zile_concediu_O'
        DataType = ftInteger
      end
      item
        Name = 'Valoare_concediu_O'
        DataType = ftFloat
      end
      item
        Name = 'Zile_concediu_M'
        DataType = ftInteger
      end
      item
        Name = 'Valoare_concediu_M'
        DataType = ftFloat
      end
      item
        Name = 'Preaviz'
        DataType = ftBoolean
      end
      item
        Name = 'Baza_calcul_CAS'
        DataType = ftFloat
      end
      item
        Name = 'Cas'
        DataType = ftFloat
      end
      item
        Name = 'Cas_firma'
        DataType = ftFloat
      end
      item
        Name = 'Somaj'
        DataType = ftFloat
      end
      item
        Name = 'Somaj_firma'
        DataType = ftFloat
      end
      item
        Name = 'Sanatate'
        DataType = ftFloat
      end
      item
        Name = 'Sanatate_firma'
        DataType = ftFloat
      end
      item
        Name = 'Cheltuieli_profesionale'
        DataType = ftFloat
      end
      item
        Name = 'Venit_net'
        DataType = ftFloat
      end
      item
        Name = 'Deducere_pers_de_baza'
        DataType = ftFloat
      end
      item
        Name = 'Deducere_suplimentara'
        DataType = ftFloat
      end
      item
        Name = 'Baza_calcul_impozit'
        DataType = ftFloat
      end
      item
        Name = 'Baza_calcul_impozit_CO'
        DataType = ftFloat
      end
      item
        Name = 'Impozit'
        DataType = ftFloat
      end
      item
        Name = 'Impozit_concediu_O'
        DataType = ftFloat
      end
      item
        Name = 'Ajutor_nastere'
        DataType = ftFloat
      end
      item
        Name = 'Avans'
        DataType = ftFloat
      end
      item
        Name = 'Indemnizatii'
        DataType = ftFloat
      end
      item
        Name = 'Popriri'
        DataType = ftFloat
      end
      item
        Name = 'Alte_rate'
        DataType = ftFloat
      end
      item
        Name = 'Garantii_materiale'
        DataType = ftFloat
      end
      item
        Name = 'Rest_plata'
        DataType = ftFloat
      end
      item
        Name = 'Diferenta_impozit'
        DataType = ftFloat
      end
      item
        Name = 'Salar_net'
        DataType = ftFloat
      end
      item
        Name = 'Total_plata'
        DataType = ftFloat
      end
      item
        Name = 'Concediu_ramas'
        DataType = ftInteger
      end
      item
        Name = 'Zile_luna'
        DataType = ftInteger
      end
      item
        Name = 'Zile_lucrate_D'
        DataType = ftInteger
      end
      item
        Name = 'Zile_lucrate_S'
        DataType = ftInteger
      end
      item
        Name = 'Venit_D'
        DataType = ftFloat
      end
      item
        Name = 'Venit_S'
        DataType = ftFloat
      end>
    StoreDefs = True
    TableName = 'angajat1.DB'
    Left = 720
    Top = 65528
    object Table3An: TIntegerField
      FieldName = 'An'
    end
    object Table3Luna: TStringField
      FieldName = 'Luna'
      Size = 15
    end
    object Table3Salar_ora: TFloatField
      FieldName = 'Salar_ora'
    end
    object Table3Zile_lucrate: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_lucrate'
    end
    object Table3Zile_nelucrate: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_nelucrate'
    end
    object Table3Ore_suplimentare_15: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_suplimentare_15'
    end
    object Table3Ore_suplimentare_2: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_suplimentare_2'
    end
    object Table3Ore_in_sarbatori: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_in_sarbatori'
    end
    object Table3Ore_noapte: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_noapte'
    end
    object Table3Ore_nemotivate: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_nemotivate'
    end
    object Table3Cfs: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Cfs'
    end
    object Table3Ore_in_acord: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Ore_in_acord'
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
    end
    object Table3Valoare_concediu_O: TFloatField
      DefaultExpression = '0'
      FieldName = 'Valoare_concediu_O'
      DisplayFormat = '###,###,###,##0'
    end
    object Table3Zile_concediu_M: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_concediu_M'
    end
    object Table3Valoare_concediu_M: TFloatField
      DefaultExpression = '0'
      FieldName = 'Valoare_concediu_M'
    end
    object Table3Preaviz: TBooleanField
      DefaultExpression = 'False'
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
      FieldName = 'Concediu_ramas'
    end
    object Table3Zile_luna: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_luna'
    end
    object Table3Zile_lucrate_D: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_lucrate_D'
    end
    object Table3Zile_lucrate_S: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Zile_lucrate_S'
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
  object DataSource2: TDataSource
    DataSet = Table2
    Left = 632
  end
  object Table2: TTable
    DatabaseName = 'data\'
    Left = 664
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
      DefaultExpression = 'False'
      FieldName = 'Spor_vechime'
    end
    object Table2Regie: TBooleanField
      DefaultExpression = 'True'
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
      DefaultExpression = 'True'
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
      FieldName = 'Numar_copii'
    end
    object Table2Date_copii: TMemoField
      FieldName = 'Date_copii'
      BlobType = ftMemo
      Size = 1
    end
    object Table2Pers_handicapate_grI: TBooleanField
      DefaultExpression = 'False'
      FieldName = 'Pers_handicapate_grI'
    end
    object Table2Pers_handicapate_grII: TBooleanField
      DefaultExpression = 'False'
      FieldName = 'Pers_handicapate_grII'
    end
    object Table2Sotie_in_intretinere: TBooleanField
      DefaultExpression = 'False'
      FieldName = 'Sotie_in_intretinere'
    end
    object Table2Concediu_pe_an: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Concediu_pe_an'
    end
    object Table2Data_lichidare_salar: TDateField
      FieldName = 'Data_lichidare_salar'
    end
    object Table2Norma_ore_zi: TIntegerField
      DefaultExpression = '0'
      FieldName = 'Norma_ore_zi'
    end
    object Table2Pensionar: TBooleanField
      DefaultExpression = 'false'
      FieldName = 'Pensionar'
    end
    object Table2BASS: TFloatField
      DefaultExpression = '0'
      FieldName = 'BASS'
    end
  end
end
