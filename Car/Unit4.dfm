object fise: Tfise
  Left = 110
  Top = 171
  BorderIcons = [biMinimize]
  BorderStyle = bsSingle
  Caption = 'Evidenta fise'
  ClientHeight = 446
  ClientWidth = 876
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
  object DBText1: TDBText
    Left = 0
    Top = 0
    Width = 289
    Height = 17
    DataField = 'nume'
    DataSource = dm.DataSource2
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 26
    Top = 29
    Width = 34
    Height = 18
    Caption = 'Data'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 106
    Top = 29
    Width = 46
    Height = 18
    Caption = 'Nr doc'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 173
    Top = 30
    Width = 63
    Height = 18
    Caption = 'Explicatii'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 408
    Top = 8
    Width = 65
    Height = 18
    Caption = 'Dobanda'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 367
    Top = 29
    Width = 39
    Height = 18
    Caption = 'calcul'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 439
    Top = 29
    Width = 59
    Height = 18
    Caption = 'incasata'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 576
    Top = 8
    Width = 63
    Height = 18
    Caption = 'Imprumut'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label9: TLabel
    Left = 543
    Top = 29
    Width = 35
    Height = 18
    Caption = 'debit'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label10: TLabel
    Left = 623
    Top = 29
    Width = 39
    Height = 18
    Caption = 'credit'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label12: TLabel
    Left = 736
    Top = 8
    Width = 81
    Height = 18
    Caption = 'Fond social'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label13: TLabel
    Left = 719
    Top = 29
    Width = 35
    Height = 18
    Caption = 'debit'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label14: TLabel
    Left = 799
    Top = 29
    Width = 39
    Height = 18
    Caption = 'credit'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object SpeedButton1: TSpeedButton
    Left = 0
    Top = 80
    Width = 89
    Height = 22
    Caption = 'Nou'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = nouExecute
  end
  object SpeedButton2: TSpeedButton
    Left = 104
    Top = 80
    Width = 89
    Height = 22
    Caption = 'Save++'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = saveExecute
  end
  object SpeedButton3: TSpeedButton
    Left = 664
    Top = 80
    Width = 105
    Height = 22
    Caption = 'Sterge'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = stergeExecute
  end
  object SpeedButton4: TSpeedButton
    Left = 784
    Top = 80
    Width = 89
    Height = 22
    Caption = 'Print'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = printExecute
  end
  object SpeedButton5: TSpeedButton
    Left = 752
    Top = 392
    Width = 121
    Height = 22
    Caption = 'Exit'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000000000000000000000000
      8000008000000080800080000000800080008080000080808000C0C0C0000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00888888000088
      8888888800FFFF0088888880FF0000FF0888880F00999900F08880F009999990
      0F080F009999999900F00F099999999990F00F09FFFFFFFF90F00F09FFFFFFFF
      90F00F099999999990F00F009999999900F080F0999999990F0880FF00999900
      FF088800FF0000FF0088888800FFFF0088888888880000888888}
    ParentFont = False
    OnClick = exitExecute
  end
  object SpeedButton6: TSpeedButton
    Left = 392
    Top = 80
    Width = 81
    Height = 22
    Caption = 'Sold initial'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = siExecute
  end
  object SpeedButton8: TSpeedButton
    Left = 296
    Top = 0
    Width = 23
    Height = 22
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000000000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00777777777777
      7777777777777777777777777777777777777777777777777777777777745777
      7777777775454777777777745454545454547545454545454545C77454545777
      777777C775454CCCCCCC7777C77457777777777777C77777777777777777C777
      7777777777777777777777777777777777777777777777777777}
    ParentFont = False
    OnClick = SpeedButton8Click
  end
  object SpeedButton9: TSpeedButton
    Left = 320
    Top = 0
    Width = 23
    Height = 22
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000000000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00777777777777
      7777777777777777777777777777777777777777777777777777777777745777
      7777777777754547777754545454545457774545454545454547545454545454
      577CCCCCCCC545477C7777777774577C7777777777777C7777777777777C7777
      7777777777777777777777777777777777777777777777777777}
    ParentFont = False
    OnClick = SpeedButton9Click
  end
  object DBEdit1: TDBEdit
    Left = 0
    Top = 48
    Width = 105
    Height = 26
    DataField = 'data'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object DBEdit2: TDBEdit
    Left = 104
    Top = 48
    Width = 49
    Height = 26
    DataField = 'nr_doc'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object DBEdit3: TDBEdit
    Left = 152
    Top = 48
    Width = 193
    Height = 26
    DataField = 'explicatii'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object DBEdit4: TDBEdit
    Left = 344
    Top = 48
    Width = 90
    Height = 26
    DataField = 'dobanda_calculata'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object DBEdit5: TDBEdit
    Left = 432
    Top = 48
    Width = 90
    Height = 26
    DataField = 'dobanda_incasata'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object DBEdit6: TDBEdit
    Left = 520
    Top = 48
    Width = 90
    Height = 26
    DataField = 'imprumut_debit'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object DBEdit7: TDBEdit
    Left = 608
    Top = 48
    Width = 90
    Height = 26
    DataField = 'imprumut_credit'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
  end
  object DBEdit8: TDBEdit
    Left = 696
    Top = 48
    Width = 90
    Height = 26
    DataField = 'fs_debit'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
  end
  object DBEdit9: TDBEdit
    Left = 784
    Top = 48
    Width = 90
    Height = 26
    DataField = 'fs_credit'
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 112
    Width = 873
    Height = 217
    DataSource = dm.DataSource3
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit]
    ParentFont = False
    TabOrder = 9
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'data'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'nr_doc'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'explicatii'
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'dobanda_calculata'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'dobanda_incasata'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'dobanda_sold'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'imprumut_debit'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'imprumut_credit'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'imprumut_sold'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'fs_debit'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'fs_credit'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'fs_sold'
        Width = 100
        Visible = True
      end>
  end
  object GroupBox1: TGroupBox
    Left = 0
    Top = 336
    Width = 217
    Height = 89
    Caption = 'Cauta'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    object Label7: TLabel
      Left = 8
      Top = 24
      Width = 35
      Height = 18
      Caption = 'Field'
    end
    object ComboBox1: TComboBox
      Left = 56
      Top = 24
      Width = 145
      Height = 26
      ItemHeight = 18
      TabOrder = 0
      Items.Strings = (
        'nr_doc'
        'explicatii')
    end
    object Edit1: TEdit
      Left = 56
      Top = 56
      Width = 145
      Height = 26
      TabOrder = 1
      OnChange = Edit1Change
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 427
    Width = 876
    Height = 19
    Panels = <>
    SimplePanel = False
  end
  object GroupBox2: TGroupBox
    Left = 224
    Top = 336
    Width = 297
    Height = 89
    Caption = 'Filtru'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
    object Label15: TLabel
      Left = 8
      Top = 24
      Width = 35
      Height = 18
      Caption = 'Field'
    end
    object SpeedButton7: TSpeedButton
      Left = 200
      Top = 24
      Width = 89
      Height = 57
      Caption = 'Constructor'
      OnClick = SpeedButton7Click
    end
    object CheckBox1: TCheckBox
      Left = 8
      Top = 56
      Width = 17
      Height = 17
      TabOrder = 0
      OnClick = CheckBox1Click
    end
    object ComboBox2: TComboBox
      Left = 48
      Top = 24
      Width = 145
      Height = 26
      ItemHeight = 18
      TabOrder = 1
      Items.Strings = (
        'data'
        'nr_doc'
        'explicatii')
    end
    object Edit2: TEdit
      Left = 48
      Top = 56
      Width = 145
      Height = 26
      TabOrder = 2
      OnChange = Edit2Change
    end
  end
  object ActionList1: TActionList
    Left = 600
    Top = 344
    object nou: TAction
      Caption = 'nou'
      OnExecute = nouExecute
    end
    object save: TAction
      Caption = 'save'
      OnExecute = saveExecute
    end
    object sterge: TAction
      Caption = 'sterge'
      OnExecute = stergeExecute
    end
    object print: TAction
      Caption = 'print'
      OnExecute = printExecute
    end
    object exit: TAction
      Caption = 'exit'
      OnExecute = exitExecute
    end
    object si: TAction
      Caption = 'si'
      OnExecute = siExecute
    end
  end
end