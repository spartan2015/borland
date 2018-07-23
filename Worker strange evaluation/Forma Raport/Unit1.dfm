object Form1: TForm1
  Left = 192
  Top = 107
  Width = 749
  Height = 488
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
  object Button33: TButton
    Left = 8
    Top = 288
    Width = 113
    Height = 25
    Caption = '&Centralizeaza'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Button31: TButton
    Left = 136
    Top = 288
    Width = 121
    Height = 25
    Caption = 'C&reaza raport'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Button32: TButton
    Left = 272
    Top = 288
    Width = 105
    Height = 25
    Caption = '&Inchide'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object GroupBox3: TGroupBox
    Left = 8
    Top = 200
    Width = 369
    Height = 65
    Caption = 'Grupat dupa'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    object ComboBox5: TComboBox
      Left = 16
      Top = 24
      Width = 177
      Height = 28
      Enabled = False
      ItemHeight = 20
      TabOrder = 0
      Text = 'Nume'
      Items.Strings = (
        'Nume'
        'Functia'
        'Marca'
        'Sectia')
    end
  end
  object RadioGroup1: TRadioGroup
    Left = 8
    Top = 120
    Width = 185
    Height = 81
    Caption = 'Tipul raportului'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemIndex = 0
    Items.Strings = (
      '1. Tip lista simplu'
      '2. Tip list grupat')
    ParentFont = False
    TabOrder = 4
  end
  object RadioGroup2: TRadioGroup
    Left = 208
    Top = 120
    Width = 169
    Height = 81
    Caption = 'Pentru'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemIndex = 0
    Items.Strings = (
      'Persoana curenta'
      'Tot personalul')
    ParentFont = False
    TabOrder = 5
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 16
    Width = 369
    Height = 73
    Caption = 'Alege data'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    object Label120: TLabel
      Left = 8
      Top = 32
      Width = 20
      Height = 20
      Caption = 'An'
    end
    object Label121: TLabel
      Left = 160
      Top = 32
      Width = 36
      Height = 20
      Caption = 'Luna'
    end
    object ComboBox2: TComboBox
      Left = 48
      Top = 32
      Width = 97
      Height = 28
      ItemHeight = 20
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
      Height = 28
      ItemHeight = 20
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
  object GroupBox2: TGroupBox
    Left = 407
    Top = 24
    Width = 321
    Height = 113
    Caption = 'Filtru special'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    object Label122: TLabel
      Left = 8
      Top = 48
      Width = 39
      Height = 20
      Caption = 'Dupa'
    end
    object Label133: TLabel
      Left = 8
      Top = 88
      Width = 50
      Height = 20
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
      Height = 28
      ItemHeight = 20
      TabOrder = 1
      Text = 'Functie'
    end
    object Edit5: TEdit
      Left = 56
      Top = 80
      Width = 145
      Height = 28
      CharCase = ecUpperCase
      TabOrder = 2
    end
  end
end
