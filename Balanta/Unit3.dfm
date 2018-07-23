object Sold_initial: TSold_initial
  Left = 117
  Top = 162
  Width = 822
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
  object Label3: TLabel
    Left = 128
    Top = 16
    Width = 38
    Height = 18
    Caption = 'Debit'
  end
  object Label4: TLabel
    Left = 256
    Top = 16
    Width = 43
    Height = 18
    Caption = 'Credit'
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 72
    Width = 809
    Height = 345
    Color = clBlack
    DataSource = dm1.DataSource5
    Font.Charset = ANSI_CHARSET
    Font.Color = clWhite
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
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
        Width = 395
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Debit'
        Width = 115
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Credit'
        Width = 115
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'io'
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 0
    Top = 424
    Width = 240
    Height = 25
    DataSource = dm1.DataSource5
    TabOrder = 4
  end
  object DBEdit1: TDBEdit
    Left = 16
    Top = 40
    Width = 105
    Height = 26
    DataField = 'Cont'
    DataSource = dm1.DataSource5
    TabOrder = 0
  end
  object DBEdit3: TDBEdit
    Left = 128
    Top = 40
    Width = 121
    Height = 26
    DataField = 'Debit'
    DataSource = dm1.DataSource5
    TabOrder = 1
  end
  object DBEdit4: TDBEdit
    Left = 256
    Top = 40
    Width = 121
    Height = 26
    DataField = 'Credit'
    DataSource = dm1.DataSource5
    TabOrder = 2
  end
  object Button5: TButton
    Left = 384
    Top = 40
    Width = 75
    Height = 25
    Caption = '&Nou'
    TabOrder = 5
    OnClick = Button5Click
  end
  object CheckBox1: TCheckBox
    Left = 528
    Top = 8
    Width = 137
    Height = 17
    Caption = 'Save + activare'
    Checked = True
    State = cbChecked
    TabOrder = 6
  end
  object Button1: TButton
    Left = 464
    Top = 40
    Width = 75
    Height = 25
    Caption = '&Save'
    TabOrder = 7
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 648
    Top = 40
    Width = 75
    Height = 25
    Caption = '&Delete'
    TabOrder = 8
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 728
    Top = 40
    Width = 75
    Height = 25
    Caption = 'Delete &All'
    TabOrder = 9
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 736
    Top = 424
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 10
    OnClick = Button4Click
  end
end
