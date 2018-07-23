object Sold_initial: TSold_initial
  Left = 117
  Top = 162
  Width = 839
  Height = 480
  Caption = 'Sold_initial'
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Arial'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 18
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 33
    Height = 18
    Caption = 'Cont'
  end
  object Label2: TLabel
    Left = 144
    Top = 16
    Width = 68
    Height = 18
    Caption = 'Denumire'
  end
  object Label3: TLabel
    Left = 576
    Top = 16
    Width = 38
    Height = 18
    Caption = 'Debit'
  end
  object Label4: TLabel
    Left = 704
    Top = 16
    Width = 43
    Height = 18
    Caption = 'Credit'
  end
  object DBGrid1: TDBGrid
    Left = 16
    Top = 72
    Width = 809
    Height = 313
    Color = clBlack
    DataSource = DataModule1.DataSource5
    Font.Charset = ANSI_CHARSET
    Font.Color = clWhite
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    TitleFont.Charset = ANSI_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'Arial'
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
        Width = 506
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Debit'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Credit'
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 16
    Top = 384
    Width = 240
    Height = 25
    DataSource = DataModule1.DataSource5
    TabOrder = 5
  end
  object DBEdit1: TDBEdit
    Left = 16
    Top = 40
    Width = 105
    Height = 26
    DataField = 'Cont'
    DataSource = DataModule1.DataSource5
    TabOrder = 0
  end
  object DBEdit2: TDBEdit
    Left = 128
    Top = 40
    Width = 329
    Height = 26
    DataField = 'Denumire'
    DataSource = DataModule1.DataSource5
    TabOrder = 1
  end
  object DBEdit3: TDBEdit
    Left = 576
    Top = 40
    Width = 121
    Height = 26
    DataField = 'Debit'
    DataSource = DataModule1.DataSource5
    TabOrder = 2
  end
  object DBEdit4: TDBEdit
    Left = 704
    Top = 40
    Width = 121
    Height = 26
    DataField = 'Credit'
    DataSource = DataModule1.DataSource5
    TabOrder = 3
  end
  object Panel1: TPanel
    Left = 16
    Top = 408
    Width = 809
    Height = 41
    TabOrder = 6
    object Button4: TButton
      Left = 696
      Top = 8
      Width = 75
      Height = 25
      Caption = '&Iesire'
      TabOrder = 4
      OnClick = Button4Click
    end
    object Button3: TButton
      Left = 504
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Delete &All'
      TabOrder = 3
      OnClick = Button3Click
    end
    object Button2: TButton
      Left = 336
      Top = 8
      Width = 75
      Height = 25
      Caption = '&Delete'
      TabOrder = 2
      OnClick = Button2Click
    end
    object Button1: TButton
      Left = 160
      Top = 8
      Width = 75
      Height = 25
      Caption = '&Save'
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button5: TButton
      Left = 24
      Top = 8
      Width = 75
      Height = 25
      Caption = '&Nou'
      TabOrder = 0
      OnClick = Button5Click
    end
  end
end
