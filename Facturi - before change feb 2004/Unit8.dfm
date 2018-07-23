object delegati: Tdelegati
  Left = 214
  Top = 196
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Delegati:'
  ClientHeight = 279
  ClientWidth = 679
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 20
  object DBGrid1: TDBGrid
    Left = 8
    Top = 24
    Width = 465
    Height = 177
    DataSource = dm.DataSource6
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'nume_delegat'
        Title.Caption = 'Nume delegat'
        Width = 245
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'buletin_delegat'
        Title.Caption = 'Buletin delegat'
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 200
    Width = 240
    Height = 25
    DataSource = dm.DataSource6
    TabOrder = 1
  end
  object Button1: TButton
    Left = 592
    Top = 208
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 592
    Top = 240
    Width = 75
    Height = 25
    Caption = 'Cancel'
    TabOrder = 3
    OnClick = Button2Click
  end
  object GroupBox1: TGroupBox
    Left = 488
    Top = 24
    Width = 185
    Height = 73
    Caption = 'Cauta:'
    TabOrder = 4
    object Label2: TLabel
      Left = 10
      Top = 24
      Width = 46
      Height = 20
      Caption = 'Nume:'
    end
    object Edit1: TEdit
      Left = 56
      Top = 24
      Width = 121
      Height = 28
      TabOrder = 0
      OnChange = Edit1Change
    end
  end
end
