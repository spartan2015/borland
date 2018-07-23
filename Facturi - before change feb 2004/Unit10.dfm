object magazie: Tmagazie
  Left = 110
  Top = 215
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
  object DBGrid1: TDBGrid
    Left = 0
    Top = 40
    Width = 921
    Height = 289
    DataSource = dm.DataSource7
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Denumire'
        Width = 350
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'unitatea'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'pret_unitar'
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
        FieldName = 'nume_firma'
        Width = 350
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'nr_factura'
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
        FieldName = 'data_factura'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cont'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'legatura'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'tip'
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 0
    Top = 328
    Width = 240
    Height = 25
    DataSource = dm.DataSource7
    TabOrder = 1
  end
  object GroupBox1: TGroupBox
    Left = 0
    Top = 360
    Width = 489
    Height = 89
    Caption = 'Motor'
    TabOrder = 2
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
    TabOrder = 3
    OnClick = radio1Click
  end
  object Button1: TButton
    Left = 832
    Top = 368
    Width = 73
    Height = 25
    Caption = 'Print'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button3: TButton
    Left = 832
    Top = 416
    Width = 75
    Height = 25
    Caption = 'Iesire'
    TabOrder = 5
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
    TabOrder = 6
  end
  object Button2: TButton
    Left = 760
    Top = 8
    Width = 145
    Height = 25
    Caption = 'Inchide luna/stocuri'
    TabOrder = 7
    OnClick = Button2Click
  end
end
