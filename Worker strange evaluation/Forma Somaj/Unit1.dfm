object Form1: TForm1
  Left = 192
  Top = 107
  Width = 696
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
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
  object Label144: TLabel
    Left = 8
    Top = 60
    Width = 20
    Height = 20
    Caption = 'An'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label143: TLabel
    Left = 128
    Top = 60
    Width = 36
    Height = 20
    Caption = 'Luna'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label155: TLabel
    Left = 360
    Top = 112
    Width = 118
    Height = 20
    Caption = 'Total somaj virat:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label157: TLabel
    Left = 8
    Top = 360
    Width = 176
    Height = 20
    Caption = 'Cale director descarcare:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label153: TLabel
    Left = 8
    Top = 328
    Width = 107
    Height = 20
    Caption = 'Data depunere'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label152: TLabel
    Left = 8
    Top = 288
    Width = 65
    Height = 20
    Caption = 'Penalitati'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label151: TLabel
    Left = 8
    Top = 264
    Width = 147
    Height = 20
    Caption = 'Majorari de intarziere'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label150: TLabel
    Left = 8
    Top = 240
    Width = 82
    Height = 20
    Caption = 'De asigurat'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label149: TLabel
    Left = 8
    Top = 216
    Width = 92
    Height = 20
    Caption = 'De angajator'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label148: TLabel
    Left = 88
    Top = 176
    Width = 135
    Height = 20
    Caption = 'Contributii nevirate:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label147: TLabel
    Left = 8
    Top = 144
    Width = 106
    Height = 20
    Caption = 'Deduceri spec.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label146: TLabel
    Left = 8
    Top = 120
    Width = 78
    Height = 20
    Caption = 'Data inreg.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label145: TLabel
    Left = 8
    Top = 96
    Width = 90
    Height = 20
    Caption = 'Numar inreg.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object ComboBox6: TComboBox
    Left = 32
    Top = 52
    Width = 89
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemHeight = 20
    ParentFont = False
    TabOrder = 0
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
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemHeight = 20
    ParentFont = False
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
  object CSpinEdit1: TCSpinEdit
    Left = 360
    Top = 136
    Width = 65
    Height = 30
    TabStop = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Increment = 5
    MaxValue = 100
    ParentColor = False
    ParentFont = False
    TabOrder = 2
    Value = 100
  end
  object Edit12: TEdit
    Left = 192
    Top = 360
    Width = 377
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    Text = 'A:\'
  end
  object Button37: TButton
    Left = 240
    Top = 389
    Width = 169
    Height = 25
    Caption = 'Descarca datele'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object Button36: TButton
    Left = 568
    Top = 360
    Width = 49
    Height = 28
    Caption = '...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
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
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Kind = dtkDate
    ParseInput = False
    ParentFont = False
    TabOrder = 6
  end
  object Edit11: TEdit
    Left = 160
    Top = 289
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    Text = '0'
  end
  object Edit10: TEdit
    Left = 160
    Top = 262
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    Text = '0'
  end
  object Edit9: TEdit
    Left = 160
    Top = 235
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    Text = '0'
  end
  object Edit8: TEdit
    Left = 160
    Top = 208
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    Text = '0'
  end
  object Edit7: TEdit
    Left = 160
    Top = 142
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    Text = '0'
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
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Kind = dtkDate
    ParseInput = False
    ParentFont = False
    TabOrder = 12
  end
  object Edit6: TEdit
    Left = 160
    Top = 88
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
    Text = '0'
  end
  object Button35: TButton
    Left = 304
    Top = 53
    Width = 313
    Height = 25
    Caption = 'Creaza'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
  end
  object Button38: TButton
    Left = 613
    Top = 416
    Width = 75
    Height = 25
    Caption = '&Inchide'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 15
  end
end
