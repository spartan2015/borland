object solder: Tsolder
  Left = 268
  Top = 187
  Width = 453
  Height = 193
  Caption = 'Sold'
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
    Left = 8
    Top = 8
    Width = 393
    Height = 80
    Caption = 
      'Atentie! Nu a fost gasit soldul initial pe aceasta luna!!! Daca ' +
      'doriti sa il introduceti acum apasati butonul "Sold" Daca doriti' +
      ' sa abandonati operatiunea apasati "Anulare"'
    WordWrap = True
  end
  object Button1: TButton
    Left = 104
    Top = 128
    Width = 75
    Height = 25
    Caption = 'Sold'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 256
    Top = 128
    Width = 75
    Height = 25
    Caption = 'Anulare'
    TabOrder = 1
    OnClick = Button2Click
  end
  object grup1: TGroupBox
    Left = 0
    Top = 8
    Width = 433
    Height = 65
    TabOrder = 2
    Visible = False
    object Label4: TLabel
      Left = 16
      Top = 32
      Width = 43
      Height = 20
      Caption = 'Data: '
    end
    object Label5: TLabel
      Left = 208
      Top = 32
      Width = 55
      Height = 20
      Caption = 'Sold lei:'
    end
    object DBEdit1: TDBEdit
      Left = 64
      Top = 24
      Width = 121
      Height = 28
      DataField = 'data'
      DataSource = dm.DataSource8
      TabOrder = 0
    end
    object DBEdit2: TDBEdit
      Left = 296
      Top = 32
      Width = 121
      Height = 28
      DataField = 'sold_lei'
      DataSource = dm.DataSource8
      TabOrder = 1
    end
  end
  object grup2: TGroupBox
    Left = 0
    Top = 64
    Width = 433
    Height = 57
    TabOrder = 3
    Visible = False
    object Label2: TLabel
      Left = 208
      Top = 21
      Width = 82
      Height = 20
      Caption = 'Sold valuta:'
    end
    object DBEdit3: TDBEdit
      Left = 304
      Top = 21
      Width = 121
      Height = 28
      DataField = 'sold_valuta'
      DataSource = dm.DataSource8
      TabOrder = 0
    end
  end
end
