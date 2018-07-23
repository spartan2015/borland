object Depozit: TDepozit
  Left = 195
  Top = 138
  BorderIcons = [biMinimize]
  BorderStyle = bsSingle
  Caption = 'Depozit'
  ClientHeight = 416
  ClientWidth = 803
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 20
  object Label1: TLabel
    Left = 8
    Top = 24
    Width = 28
    Height = 20
    Caption = 'An: '
  end
  object Label2: TLabel
    Left = 8
    Top = 56
    Width = 44
    Height = 20
    Caption = 'Luna: '
  end
  object SpeedButton2: TSpeedButton
    Left = 216
    Top = 48
    Width = 25
    Height = 25
    Flat = True
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000000000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF007777777C7777
      77777777777747777777777777C757777777777777754577777777777C745477
      777777777745454777777777C754545777777777754545457777777C74545454
      7777777777C545777777777777C454777777777777C545777777777777C45477
      7777777777C545777777777777C454777777777777C545777777}
  end
  object SpeedButton1: TSpeedButton
    Left = 216
    Top = 16
    Width = 25
    Height = 25
    Flat = True
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000000000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00777777C75457
      7777777777C745477777777777C754577777777777C745477777777777C75457
      7777777777C745477777777777C7545777777777C74545454777777777545454
      777777777C75454577777777777454577777777777C745477777777777775477
      77777777777C75777777777777777777777777777777C7777777}
  end
  object SpeedButton4: TSpeedButton
    Left = 544
    Top = 64
    Width = 75
    Height = 25
    Caption = 'Sterg&e'
    OnClick = SpeedButton4Click
  end
  object SpeedButton3: TSpeedButton
    Left = 544
    Top = 32
    Width = 75
    Height = 25
    Caption = '&Nou'
    OnClick = SpeedButton3Click
  end
  object ComboBox1: TComboBox
    Left = 56
    Top = 16
    Width = 145
    Height = 28
    ItemHeight = 20
    TabOrder = 0
    Text = '2003'
    OnChange = ComboBox1Change
    Items.Strings = (
      '2003'
      '2004')
  end
  object ComboBox2: TComboBox
    Left = 56
    Top = 48
    Width = 145
    Height = 28
    ItemHeight = 20
    TabOrder = 1
    Text = 'august'
    OnChange = ComboBox2Change
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
  object DBGrid1: TDBGrid
    Left = 256
    Top = 8
    Width = 273
    Height = 121
    Color = clWindowFrame
    DataSource = dm.DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    ReadOnly = True
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'Arial'
    TitleFont.Style = []
    OnCellClick = DBGrid1CellClick
    Columns = <
      item
        Expanded = False
        FieldName = 'an'
        Title.Caption = 'An'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'luna'
        Title.Caption = 'Luna'
        Width = 145
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 256
    Top = 128
    Width = 260
    Height = 25
    DataSource = dm.DataSource2
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
  end
  object GroupBox2: TGroupBox
    Left = 1
    Top = 160
    Width = 520
    Height = 105
    Caption = 'Informatii generale:'
    TabOrder = 4
    object Label11: TLabel
      Left = 8
      Top = 24
      Width = 151
      Height = 20
      Caption = 'Inregistrari an in curs:'
    end
    object Label12: TLabel
      Left = 8
      Top = 48
      Width = 155
      Height = 20
      Caption = 'Inregistrari an anterior'
    end
    object Label13: TLabel
      Left = 8
      Top = 72
      Width = 114
      Height = 20
      Caption = 'Inregistrari total:'
    end
    object Label14: TLabel
      Left = 184
      Top = 24
      Width = 60
      Height = 19
      Caption = 'Label14'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label15: TLabel
      Left = 184
      Top = 48
      Width = 60
      Height = 19
      Caption = 'Label15'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label16: TLabel
      Left = 184
      Top = 72
      Width = 60
      Height = 19
      Caption = 'Label16'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
  object Button2: TButton
    Left = 720
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Inapoi'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Panel1: TPanel
    Left = 528
    Top = 168
    Width = 273
    Height = 97
    BevelInner = bvRaised
    BorderWidth = 4
    BorderStyle = bsSingle
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    object SpeedButton5: TSpeedButton
      Left = 14
      Top = 24
      Width = 75
      Height = 25
      Caption = '&Intrari'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton5Click
    end
    object Label3: TLabel
      Left = 104
      Top = 8
      Width = 57
      Height = 20
      Caption = 'Facturi'
    end
    object Button1: TButton
      Left = 174
      Top = 24
      Width = 75
      Height = 25
      Caption = 'Iesiri'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button5: TButton
      Left = 48
      Top = 56
      Width = 75
      Height = 25
      Caption = 'Import'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object Button6: TButton
      Left = 144
      Top = 56
      Width = 75
      Height = 25
      Caption = 'Export'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
    end
  end
  object check1: TCheckBox
    Left = 544
    Top = 8
    Width = 249
    Height = 17
    Caption = 'Preluare stoc luna precedenta'
    Checked = True
    State = cbChecked
    TabOrder = 7
  end
  object Button3: TButton
    Left = 376
    Top = 304
    Width = 155
    Height = 25
    Caption = 'Casa'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 376
    Top = 336
    Width = 153
    Height = 25
    Caption = 'Banca'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnClick = Button4Click
  end
end
