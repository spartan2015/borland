object casabanca: Tcasabanca
  Left = 94
  Top = 159
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Casa Banca in valuta'
  ClientHeight = 447
  ClientWidth = 918
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 20
  object Label1: TLabel
    Left = 64
    Top = 16
    Width = 44
    Height = 20
    Caption = 'Nr.Act'
  end
  object Label2: TLabel
    Left = 136
    Top = 16
    Width = 65
    Height = 20
    Caption = 'Nr.Anexa'
  end
  object Label3: TLabel
    Left = 208
    Top = 16
    Width = 35
    Height = 20
    Caption = 'Data'
  end
  object Label4: TLabel
    Left = 296
    Top = 16
    Width = 67
    Height = 20
    Caption = 'Explicatia'
  end
  object Label7: TLabel
    Left = 136
    Top = 72
    Width = 34
    Height = 20
    Caption = 'Cont'
  end
  object Label8: TLabel
    Left = 384
    Top = 80
    Width = 57
    Height = 40
    Caption = 'Facturi achitate'
    WordWrap = True
  end
  object Label9: TLabel
    Left = 8
    Top = 408
    Width = 43
    Height = 20
    Caption = 'Cauta'
  end
  object Label10: TLabel
    Left = 224
    Top = 408
    Width = 9
    Height = 20
    Caption = '='
  end
  object Label11: TLabel
    Left = 600
    Top = 104
    Width = 47
    Height = 20
    Caption = 'Catre: '
  end
  object Bevel1: TBevel
    Left = 600
    Top = 68
    Width = 321
    Height = 61
    Style = bsRaised
  end
  object Label5: TLabel
    Left = 496
    Top = 16
    Width = 86
    Height = 20
    Caption = 'Intrari / Iesiri'
  end
  object Label12: TLabel
    Left = 608
    Top = 16
    Width = 84
    Height = 20
    Caption = 'Curs valutar'
  end
  object Label13: TLabel
    Left = 728
    Top = 16
    Width = 50
    Height = 20
    Caption = 'Valuta:'
  end
  object Label14: TLabel
    Left = 8
    Top = 72
    Width = 33
    Height = 20
    Caption = 'In lei'
  end
  object Label15: TLabel
    Left = 8
    Top = 16
    Width = 21
    Height = 20
    Caption = 'Tip'
  end
  object Button1: TButton
    Left = 832
    Top = 408
    Width = 75
    Height = 25
    Caption = 'Inapoi'
    TabOrder = 15
    OnClick = inapoiExecute
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 168
    Width = 905
    Height = 193
    Color = clBlack
    DataSource = dm.DataSource8
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 16
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'tip'
        Width = 60
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'nr_act'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'nr_anexa'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'data'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'explicatia'
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'curs_valutar'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'valuta_intrare'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'valuta_iesire'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'sold_valuta'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'intrare'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'iesire'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'sold_lei'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'facturi_achitate'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'checked'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cont'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'catre'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'stand_by'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'soldbool'
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 360
    Width = 231
    Height = 25
    DataSource = dm.DataSource8
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbPost, nbCancel, nbRefresh]
    Hints.Strings = (
      'Prima inregistrare'
      'Sus'
      'Jos'
      'Ultima'
      'Insert record'
      'Delete record'
      'Edit record'
      'Post edit'
      'Cancel edit'
      'Refresh data')
    TabOrder = 17
  end
  object DBEdit1: TDBEdit
    Left = 56
    Top = 40
    Width = 81
    Height = 28
    DataField = 'nr_act'
    DataSource = dm.DataSource8
    TabOrder = 1
  end
  object DBEdit2: TDBEdit
    Left = 136
    Top = 40
    Width = 73
    Height = 28
    DataField = 'nr_anexa'
    DataSource = dm.DataSource8
    TabOrder = 2
  end
  object DBEdit3: TDBEdit
    Left = 208
    Top = 40
    Width = 89
    Height = 28
    DataField = 'data'
    DataSource = dm.DataSource8
    TabOrder = 3
  end
  object DBEdit4: TDBEdit
    Left = 296
    Top = 40
    Width = 201
    Height = 28
    DataField = 'explicatia'
    DataSource = dm.DataSource8
    TabOrder = 4
  end
  object DBEdit7: TDBEdit
    Left = 136
    Top = 96
    Width = 121
    Height = 28
    DataField = 'cont'
    DataSource = dm.DataSource8
    TabOrder = 9
  end
  object DBMemo1: TDBMemo
    Left = 448
    Top = 72
    Width = 153
    Height = 89
    DataField = 'facturi_achitate'
    DataSource = dm.DataSource8
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 11
  end
  object ComboBox1: TComboBox
    Left = 64
    Top = 408
    Width = 145
    Height = 28
    ItemHeight = 20
    TabOrder = 18
    Text = 'nr_act_casa'
    Items.Strings = (
      'nr_act_casa'
      'data'
      'cont')
  end
  object Edit1: TEdit
    Left = 240
    Top = 408
    Width = 201
    Height = 28
    TabOrder = 19
    OnChange = Edit1Change
  end
  object Button2: TButton
    Left = 776
    Top = 136
    Width = 59
    Height = 25
    Caption = 'Nou'
    TabOrder = 14
    OnClick = Action1nouExecute
  end
  object Button3: TButton
    Left = 856
    Top = 136
    Width = 59
    Height = 25
    Caption = 'Sterge'
    TabOrder = 20
    OnClick = Action2stergeExecute
  end
  object Button4: TButton
    Left = 832
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Salveaza'
    TabOrder = 21
    OnClick = Action1salveazaExecute
  end
  object DBCheckBox1: TDBCheckBox
    Left = 648
    Top = 74
    Width = 97
    Height = 17
    Caption = 'Asteptare'
    DataField = 'stand_by'
    DataSource = dm.DataSource8
    TabOrder = 12
    ValueChecked = 'True'
    ValueUnchecked = 'False'
  end
  object DBEdit8: TDBEdit
    Left = 648
    Top = 96
    Width = 265
    Height = 28
    DataField = 'catre'
    DataSource = dm.DataSource8
    TabOrder = 13
  end
  object Button5: TButton
    Left = 376
    Top = 128
    Width = 67
    Height = 25
    Caption = 'Achitare'
    TabOrder = 10
    OnClick = Button5Click
  end
  object CheckBox1: TCheckBox
    Left = 384
    Top = 376
    Width = 57
    Height = 17
    Caption = 'Filtru'
    TabOrder = 22
    OnClick = CheckBox1Click
  end
  object RadioGroup1: TRadioGroup
    Left = 448
    Top = 368
    Width = 185
    Height = 78
    Caption = 'Filtre presetate'
    Items.Strings = (
      'in asteptare'
      'verificate'
      'neverificate')
    TabOrder = 23
    OnClick = RadioGroup1Click
  end
  object DBEdit5: TDBEdit
    Left = 608
    Top = 40
    Width = 121
    Height = 28
    DataField = 'curs_valutar'
    DataSource = dm.DataSource8
    TabOrder = 6
  end
  object DBEdit6: TDBEdit
    Left = 728
    Top = 40
    Width = 121
    Height = 28
    DataField = 'valuta_intrare'
    DataSource = dm.DataSource8
    TabOrder = 7
    OnExit = DBEdit6Exit
  end
  object DBEdit9: TDBEdit
    Left = 8
    Top = 96
    Width = 129
    Height = 28
    DataField = 'intrare'
    DataSource = dm.DataSource8
    TabOrder = 8
  end
  object DBEdit10: TDBEdit
    Left = 0
    Top = 40
    Width = 57
    Height = 28
    DataField = 'tip'
    DataSource = dm.DataSource8
    TabOrder = 0
  end
  object DBComboBox1: TDBComboBox
    Left = 496
    Top = 40
    Width = 113
    Height = 28
    DataField = 'io'
    DataSource = dm.DataSource8
    ItemHeight = 20
    Items.Strings = (
      'intrare'
      'iesire')
    TabOrder = 5
    OnChange = DBComboBox1Change
  end
  object Button6: TButton
    Left = 688
    Top = 392
    Width = 81
    Height = 25
    Caption = 'Print setup'
    TabOrder = 24
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 840
    Top = 0
    Width = 75
    Height = 17
    Caption = 'Sold initial'
    TabOrder = 25
    OnClick = Button7Click
  end
  object ActionList1: TActionList
    Left = 280
    Top = 368
    object Action1nou: TAction
      Caption = 'Action1nou'
      OnExecute = Action1nouExecute
    end
    object Action2sterge: TAction
      Caption = 'Action2sterge'
      OnExecute = Action2stergeExecute
    end
    object Action1salveaza: TAction
      Caption = 'Action1salveaza'
      OnExecute = Action1salveazaExecute
    end
    object Action1inapoi: TAction
      Caption = 'Action1inapoi'
    end
    object inapoi: TAction
      Caption = 'inapoi'
      OnExecute = inapoiExecute
    end
  end
  object MainMenu1: TMainMenu
    Left = 248
    Top = 368
    object Optiuni: TMenuItem
      Caption = 'Optiuni'
      object Nou1: TMenuItem
        Action = Action1nou
        Caption = 'Nou'
        ShortCut = 16462
      end
      object Sterge1: TMenuItem
        Action = Action2sterge
        Caption = 'Sterge'
        ShortCut = 16467
      end
      object Salveaza1: TMenuItem
        Action = Action1salveaza
        Caption = 'Salveaza'
        ShortCut = 16449
      end
    end
  end
end
