object Rulaj_cumulat: TRulaj_cumulat
  Left = 144
  Top = 136
  Width = 833
  Height = 496
  Caption = 'Rulaj cumulat'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 16
    Width = 33
    Height = 18
    Caption = 'Cont'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 144
    Top = 16
    Width = 38
    Height = 18
    Caption = 'Debit'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 272
    Top = 16
    Width = 43
    Height = 18
    Caption = 'Credit'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object DBEdit1: TDBEdit
    Left = 8
    Top = 32
    Width = 121
    Height = 26
    DataField = 'Cont'
    DataSource = DataModule1.DataSource6
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object DBEdit2: TDBEdit
    Left = 144
    Top = 32
    Width = 121
    Height = 26
    DataField = 'Debit'
    DataSource = DataModule1.DataSource6
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object DBEdit3: TDBEdit
    Left = 272
    Top = 32
    Width = 121
    Height = 26
    DataField = 'Credit'
    DataSource = DataModule1.DataSource6
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 72
    Width = 809
    Height = 369
    Color = clBlack
    DataSource = DataModule1.DataSource6
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindow
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Cont'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Denumire'
        Width = 443
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Debit'
        Width = 141
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Credit'
        Width = 128
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 400
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Nou'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 480
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 560
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Delete'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 640
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Delete All'
    TabOrder = 7
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 720
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Inchide'
    TabOrder = 8
    OnClick = Button5Click
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 440
    Width = 240
    Height = 25
    DataSource = DataModule1.DataSource6
    TabOrder = 9
  end
end
