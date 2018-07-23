object filtercon: Tfiltercon
  Left = 294
  Top = 191
  Width = 492
  Height = 241
  Caption = 'Constructor de filtru'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 20
  object Label1: TLabel
    Left = 16
    Top = 0
    Width = 35
    Height = 18
    Caption = 'Field'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 224
    Top = 0
    Width = 39
    Height = 18
    Caption = 'Logic'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 192
    Width = 34
    Height = 18
    Caption = 'Filtru'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object SpeedButton1: TSpeedButton
    Left = 384
    Top = 72
    Width = 89
    Height = 22
    Caption = 'OK'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = SpeedButton1Click
  end
  object SpeedButton2: TSpeedButton
    Left = 384
    Top = 104
    Width = 89
    Height = 22
    Caption = 'Cancel'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = SpeedButton2Click
  end
  object SpeedButton3: TSpeedButton
    Left = 423
    Top = 185
    Width = 49
    Height = 25
    Caption = 'Clear'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = SpeedButton3Click
  end
  object ListBox1: TListBox
    Left = 8
    Top = 24
    Width = 177
    Height = 145
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ItemHeight = 18
    Items.Strings = (
      'data'
      'explicatii'
      'nr_doc')
    ParentFont = False
    TabOrder = 0
    OnDblClick = ListBox1DblClick
  end
  object ListBox2: TListBox
    Left = 200
    Top = 24
    Width = 65
    Height = 145
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ItemHeight = 18
    Items.Strings = (
      '='
      '>'
      '<'
      '>='
      '<='
      '!='
      'AND'
      'OR')
    ParentFont = False
    TabOrder = 1
    OnClick = ListBox2Click
  end
  object Edit1: TEdit
    Left = 48
    Top = 184
    Width = 369
    Height = 26
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
end
