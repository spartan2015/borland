object magazie: Tmagazie
  Left = 78
  Top = 132
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'magazie'
  ClientHeight = 452
  ClientWidth = 922
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
  object GroupBox1: TGroupBox
    Left = 0
    Top = 360
    Width = 489
    Height = 89
    Caption = 'Motor'
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 29
      Width = 35
      Height = 20
      Caption = 'Filtru'
    end
    object Label2: TLabel
      Left = 8
      Top = 53
      Width = 43
      Height = 20
      Caption = 'Cauta'
    end
    object CheckBox1: TCheckBox
      Left = 72
      Top = 32
      Width = 17
      Height = 17
      Caption = 'CheckBox1'
      Checked = True
      State = cbChecked
      TabOrder = 0
      OnClick = CheckBox1Click
    end
    object ComboBox1: TComboBox
      Left = 104
      Top = 37
      Width = 145
      Height = 28
      ItemHeight = 20
      TabOrder = 1
      Text = 'Denumire'
      Items.Strings = (
        'Denumire'
        'nr_factura'
        'nume_firma'
        'cont')
    end
    object Edit2: TEdit
      Left = 272
      Top = 53
      Width = 209
      Height = 28
      TabOrder = 2
      OnChange = Edit2Change
    end
    object Edit1: TEdit
      Left = 272
      Top = 21
      Width = 209
      Height = 28
      TabOrder = 3
      OnChange = Edit1Change
    end
  end
  object radio1: TRadioGroup
    Left = 504
    Top = 360
    Width = 97
    Height = 81
    Caption = 'Tipul'
    ItemIndex = 0
    Items.Strings = (
      'intrare'
      'iesire')
    TabOrder = 1
    OnClick = radio1Click
  end
  object Button1: TButton
    Left = 832
    Top = 368
    Width = 73
    Height = 25
    Caption = 'Print'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button3: TButton
    Left = 832
    Top = 416
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 3
    OnClick = Button3Click
  end
  object radio2: TRadioGroup
    Left = 616
    Top = 360
    Width = 185
    Height = 81
    Caption = 'Optiuni printare'
    ItemIndex = 0
    Items.Strings = (
      'Nota de intrare'
      'Fisa de magazie')
    TabOrder = 4
  end
  object Button2: TButton
    Left = 776
    Top = 8
    Width = 145
    Height = 25
    Caption = 'Inchide luna/stocuri'
    TabOrder = 5
    OnClick = Button2Click
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 769
    Height = 120
    DataSource = dm.dscproduse
    TabOrder = 6
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'cod'
        Width = 60
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'denumire'
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'clasa'
        Width = 200
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'um'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'tva'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cont'
        Width = 70
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 0
    Top = 120
    Width = 913
    Height = 233
    DataSource = dm.DataSource7
    TabOrder = 7
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'nr_factura'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'data_factura'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'um'
        Width = 40
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'pu'
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
        FieldName = 'stoc'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'valoarea'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'tva'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cont'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'fc_adaos'
        Width = 40
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'fc_pv'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'fc_tva'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'fc_pvtva'
        Visible = True
      end>
  end
end
