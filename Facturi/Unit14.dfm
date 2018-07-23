object seeker: Tseeker
  Left = 135
  Top = 107
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Cautare...'
  ClientHeight = 388
  ClientWidth = 859
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
  object Label2: TLabel
    Left = 0
    Top = 336
    Width = 34
    Height = 16
    Caption = 'Filtru: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 0
    Top = 360
    Width = 35
    Height = 16
    Caption = 'Cauta'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 16
    Top = 0
    Width = 157
    Height = 20
    Caption = 'Firme in baza de date:'
  end
  object Label5: TLabel
    Left = 203
    Top = 350
    Width = 7
    Height = 16
    Caption = '='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 24
    Width = 857
    Height = 281
    Color = clNavy
    DataSource = dm.DataSource4
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'nume_firma'
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'j'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'fisc'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'adresa'
        Width = 220
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'telefon'
        Visible = True
      end>
  end
  object DBNav: TDBNavigator
    Left = 0
    Top = 304
    Width = 225
    Height = 25
    DataSource = dm.DataSource4
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbRefresh]
    TabOrder = 1
  end
  object CheckBox1: TCheckBox
    Left = 40
    Top = 340
    Width = 17
    Height = 17
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = CheckBox1Click
  end
  object ComboBox1: TComboBox
    Left = 56
    Top = 344
    Width = 145
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemHeight = 16
    ParentFont = False
    TabOrder = 3
    Text = 'nume_firma'
    Items.Strings = (
      'nume_firma'
      'telefon'
      'j'
      'fisc'
      'total_valoare'
      'total_tva'
      'total_plata'
      'banca'
      'filiala'
      'nume_delegat'
      'mijloc_transport')
  end
  object Edit2: TEdit
    Left = 216
    Top = 360
    Width = 201
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnChange = Edit2Change
  end
  object Edit1: TEdit
    Left = 216
    Top = 336
    Width = 201
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnChange = Edit1Change
  end
  object Button4: TButton
    Left = 774
    Top = 352
    Width = 75
    Height = 25
    Caption = 'Inapoi'
    TabOrder = 6
    OnClick = Button4Click
  end
  object GroupBox1: TGroupBox
    Left = 424
    Top = 328
    Width = 241
    Height = 57
    Caption = 'Facturi in luna curenta:'
    TabOrder = 7
    object Button1: TButton
      Left = 8
      Top = 26
      Width = 105
      Height = 25
      Caption = 'Intrari'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 128
      Top = 26
      Width = 105
      Height = 25
      Caption = 'Iesiri'
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object ActionList1: TActionList
    Left = 792
    object vede: TAction
      Caption = 'vede'
    end
    object DeleteTable: TAction
      Caption = 'DeleteTable'
    end
    object Inapoi: TAction
      Caption = 'Inapoi'
    end
    object Salveaza: TAction
      Caption = 'Salveaza'
    end
    object Nou: TAction
      Caption = 'Nou'
    end
    object EditCopy1: TEditCopy
      Category = 'Edit'
      Caption = '&Copy'
      Hint = 'Copy'
      ImageIndex = 1
      ShortCut = 16451
    end
    object EditCut1: TEditCut
      Category = 'Edit'
      Caption = 'Cu&t'
      Hint = 'Cut'
      ImageIndex = 0
      ShortCut = 16472
    end
    object EditDelete1: TEditDelete
      Category = 'Edit'
      Caption = '&Delete'
      ImageIndex = 5
      ShortCut = 46
    end
    object EditPaste1: TEditPaste
      Category = 'Edit'
      Caption = '&Paste'
      Hint = 'Paste'
      ImageIndex = 2
      ShortCut = 16470
    end
    object EditSelectAll1: TEditSelectAll
      Category = 'Edit'
      Caption = 'Select &All'
    end
    object EditUndo1: TEditUndo
      Category = 'Edit'
      Caption = '&Undo'
      ImageIndex = 3
      ShortCut = 32776
    end
    object Print: TAction
      Caption = 'Print'
    end
    object mag: TAction
      Caption = 'mag'
    end
  end
end
